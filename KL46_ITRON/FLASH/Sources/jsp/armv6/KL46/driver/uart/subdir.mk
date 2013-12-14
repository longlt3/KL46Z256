################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/jsp/armv6/KL46/driver/uart/uart.c" \

C_SRCS += \
../Sources/jsp/armv6/KL46/driver/uart/uart.c \

OBJS += \
./Sources/jsp/armv6/KL46/driver/uart/uart.o \

C_DEPS += \
./Sources/jsp/armv6/KL46/driver/uart/uart.d \

OBJS_QUOTED += \
"./Sources/jsp/armv6/KL46/driver/uart/uart.o" \

C_DEPS_QUOTED += \
"./Sources/jsp/armv6/KL46/driver/uart/uart.d" \

OBJS_OS_FORMAT += \
./Sources/jsp/armv6/KL46/driver/uart/uart.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/jsp/armv6/KL46/driver/uart/uart.o: ../Sources/jsp/armv6/KL46/driver/uart/uart.c
	@echo 'Building file: $<'
	@echo 'Executing target #37 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/armv6/KL46/driver/uart/uart.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/armv6/KL46/driver/uart/uart.o"
	@echo 'Finished building: $<'
	@echo ' '


