################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS_QUOTED += \
"../Sources/jsp/armv6/cpu_support.S" \

S_UPPER_SRCS += \
../Sources/jsp/armv6/cpu_support.S \

C_SRCS_QUOTED += \
"../Sources/jsp/armv6/cpu_config.c" \
"../Sources/jsp/armv6/makeoffset.c" \

C_SRCS += \
../Sources/jsp/armv6/cpu_config.c \
../Sources/jsp/armv6/makeoffset.c \

OBJS += \
./Sources/jsp/armv6/cpu_config.o \
./Sources/jsp/armv6/cpu_support.o \
./Sources/jsp/armv6/makeoffset.o \

C_DEPS += \
./Sources/jsp/armv6/cpu_config.d \
./Sources/jsp/armv6/makeoffset.d \

S_UPPER_DEPS += \
./Sources/jsp/armv6/cpu_support.d \

OBJS_QUOTED += \
"./Sources/jsp/armv6/cpu_config.o" \
"./Sources/jsp/armv6/cpu_support.o" \
"./Sources/jsp/armv6/makeoffset.o" \

S_UPPER_DEPS_QUOTED += \
"./Sources/jsp/armv6/cpu_support.d" \

C_DEPS_QUOTED += \
"./Sources/jsp/armv6/cpu_config.d" \
"./Sources/jsp/armv6/makeoffset.d" \

OBJS_OS_FORMAT += \
./Sources/jsp/armv6/cpu_config.o \
./Sources/jsp/armv6/cpu_support.o \
./Sources/jsp/armv6/makeoffset.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/jsp/armv6/cpu_config.o: ../Sources/jsp/armv6/cpu_config.c
	@echo 'Building file: $<'
	@echo 'Executing target #30 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/armv6/cpu_config.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/armv6/cpu_config.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/armv6/cpu_support.o: ../Sources/jsp/armv6/cpu_support.S
	@echo 'Building file: $<'
	@echo 'Executing target #31 $<'
	@echo 'Invoking: ARM Ltd Windows GCC Assembler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/armv6/cpu_support.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"Sources/jsp/armv6/cpu_support.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/armv6/makeoffset.o: ../Sources/jsp/armv6/makeoffset.c
	@echo 'Building file: $<'
	@echo 'Executing target #32 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/armv6/makeoffset.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/armv6/makeoffset.o"
	@echo 'Finished building: $<'
	@echo ' '


