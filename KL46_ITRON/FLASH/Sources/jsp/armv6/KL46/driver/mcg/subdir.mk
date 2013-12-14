################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/jsp/armv6/KL46/driver/mcg/mcg.c" \

C_SRCS += \
../Sources/jsp/armv6/KL46/driver/mcg/mcg.c \

OBJS += \
./Sources/jsp/armv6/KL46/driver/mcg/mcg.o \

C_DEPS += \
./Sources/jsp/armv6/KL46/driver/mcg/mcg.d \

OBJS_QUOTED += \
"./Sources/jsp/armv6/KL46/driver/mcg/mcg.o" \

C_DEPS_QUOTED += \
"./Sources/jsp/armv6/KL46/driver/mcg/mcg.d" \

OBJS_OS_FORMAT += \
./Sources/jsp/armv6/KL46/driver/mcg/mcg.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/jsp/armv6/KL46/driver/mcg/mcg.o: ../Sources/jsp/armv6/KL46/driver/mcg/mcg.c
	@echo 'Building file: $<'
	@echo 'Executing target #38 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/armv6/KL46/driver/mcg/mcg.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/armv6/KL46/driver/mcg/mcg.o"
	@echo 'Finished building: $<'
	@echo ' '


