#!/bin/bash

fhelp()
{
  echo EXIT

  exit 1
}

ARGS=$(getopt -o p:f:r:h -l "path:,file:,fregex:,help" -n "getopt.sh" -- "$@");


if [ $? -ne 0 ];
then
  fhelp
  exit 1
fi

eval set -- "$ARGS";

path='.'
fregex='*';
vart='';
file='';

while true; do
  case "$1" in
    -p|--path)
      shift;
      if [ -n "$1" ]; then
        if [ -z $(echo $1 | grep ^/) ] ; then
          path=$(echo $path/$1)
        else
          path=$1
        fi
        shift;
      fi
      ;;
    -r|--fregex)
      shift;
      if [ -n "$1" ]; then
        fregex=$1
        shift;
      fi
      ;;
    -f|--file)
      shift;
      if [ -n "$1" ]; then
        file=$1
        shift;
      fi
      ;;
    -h|--help)
      shift;
      fhelp
      ;;
    --)
      shift;
      #path=$1
      break;
      ;;
  esac
done

if [ -z "${file}" ] ; then
  fhelp
elif [ -e "$file" ] ; then
  echo File $file found
  
else
  echo File $file not found
fi

#echo path $path
#echo fregex $fregex
find $path -type f | grep $fregex > ctlmTemp
echo =============================================================
echo BEGIN
while read ctlmTempLine
do
  echo -------------------------------------------------------------
  while read fileLine
  do
    src=$(echo $fileLine | sed -e 's/\([^|]*\)|[^|]*/\1/g')
    des=$(echo $fileLine | sed -e 's/[^|]*|\([^|]*\)/\1/g')
    if [ -z ${src} ] ; then
      echo -e "\n$des" | sed -e 's/\\//g' >> $ctlmTempLine;
    else
      sed -ie 's/'$src'/'$des'/g' $ctlmTempLine;
    fi
    sed -i '/^[ \r]*$/d' $ctlmTempLine;
  done < $file
  sedtmpfile=$ctlmTempLine'e'
  rm -f $sedtmpfile
  echo done $ctlmTempLine
done < ctlmTemp
echo =============================================================
echo FINISHED
echo =============================================================
#sed -e 7's/.*/HAHA/g' file

rm -f ctlmTemp


