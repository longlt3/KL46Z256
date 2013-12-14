################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/jsp/library/log_output.c" \
"../Sources/jsp/library/strerror.c" \
"../Sources/jsp/library/t_perror.c" \
"../Sources/jsp/library/vasyslog.c" \

C_SRCS += \
../Sources/jsp/library/log_output.c \
../Sources/jsp/library/strerror.c \
../Sources/jsp/library/t_perror.c \
../Sources/jsp/library/vasyslog.c \

OBJS += \
./Sources/jsp/library/log_output.o \
./Sources/jsp/library/strerror.o \
./Sources/jsp/library/t_perror.o \
./Sources/jsp/library/vasyslog.o \

C_DEPS += \
./Sources/jsp/library/log_output.d \
./Sources/jsp/library/strerror.d \
./Sources/jsp/library/t_perror.d \
./Sources/jsp/library/vasyslog.d \

OBJS_QUOTED += \
"./Sources/jsp/library/log_output.o" \
"./Sources/jsp/library/strerror.o" \
"./Sources/jsp/library/t_perror.o" \
"./Sources/jsp/library/vasyslog.o" \

C_DEPS_QUOTED += \
"./Sources/jsp/library/log_output.d" \
"./Sources/jsp/library/strerror.d" \
"./Sources/jsp/library/t_perror.d" \
"./Sources/jsp/library/vasyslog.d" \

OBJS_OS_FORMAT += \
./Sources/jsp/library/log_output.o \
./Sources/jsp/library/strerror.o \
./Sources/jsp/library/t_perror.o \
./Sources/jsp/library/vasyslog.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/jsp/library/log_output.o: ../Sources/jsp/library/log_output.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/library/log_output.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/library/log_output.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/library/strerror.o: ../Sources/jsp/library/strerror.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/library/strerror.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/library/strerror.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/library/t_perror.o: ../Sources/jsp/library/t_perror.c
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/library/t_perror.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/library/t_perror.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/library/vasyslog.o: ../Sources/jsp/library/vasyslog.c
	@echo 'Building file: $<'
	@echo 'Executing target #10 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/library/vasyslog.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/library/vasyslog.o"
	@echo 'Finished building: $<'
	@echo ' '


