################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/jsp/systask/serial.c" \
"../Sources/jsp/systask/timer.c" \

C_SRCS += \
../Sources/jsp/systask/serial.c \
../Sources/jsp/systask/timer.c \

OBJS += \
./Sources/jsp/systask/serial.o \
./Sources/jsp/systask/timer.o \

C_DEPS += \
./Sources/jsp/systask/serial.d \
./Sources/jsp/systask/timer.d \

OBJS_QUOTED += \
"./Sources/jsp/systask/serial.o" \
"./Sources/jsp/systask/timer.o" \

C_DEPS_QUOTED += \
"./Sources/jsp/systask/serial.d" \
"./Sources/jsp/systask/timer.d" \

OBJS_OS_FORMAT += \
./Sources/jsp/systask/serial.o \
./Sources/jsp/systask/timer.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/jsp/systask/serial.o: ../Sources/jsp/systask/serial.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/systask/serial.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/systask/serial.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/systask/timer.o: ../Sources/jsp/systask/timer.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/systask/timer.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/systask/timer.o"
	@echo 'Finished building: $<'
	@echo ' '


