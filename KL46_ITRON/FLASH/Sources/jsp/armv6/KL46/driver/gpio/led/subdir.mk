################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/jsp/armv6/KL46/driver/gpio/led/led.c" \

C_SRCS += \
../Sources/jsp/armv6/KL46/driver/gpio/led/led.c \

OBJS += \
./Sources/jsp/armv6/KL46/driver/gpio/led/led.o \

C_DEPS += \
./Sources/jsp/armv6/KL46/driver/gpio/led/led.d \

OBJS_QUOTED += \
"./Sources/jsp/armv6/KL46/driver/gpio/led/led.o" \

C_DEPS_QUOTED += \
"./Sources/jsp/armv6/KL46/driver/gpio/led/led.d" \

OBJS_OS_FORMAT += \
./Sources/jsp/armv6/KL46/driver/gpio/led/led.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/jsp/armv6/KL46/driver/gpio/led/led.o: ../Sources/jsp/armv6/KL46/driver/gpio/led/led.c
	@echo 'Building file: $<'
	@echo 'Executing target #39 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/armv6/KL46/driver/gpio/led/led.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/armv6/KL46/driver/gpio/led/led.o"
	@echo 'Finished building: $<'
	@echo ' '


