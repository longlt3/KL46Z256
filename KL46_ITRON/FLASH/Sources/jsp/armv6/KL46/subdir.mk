################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS_QUOTED += \
"../Sources/jsp/armv6/KL46/sys_support.S" \

S_UPPER_SRCS += \
../Sources/jsp/armv6/KL46/sys_support.S \

C_SRCS_QUOTED += \
"../Sources/jsp/armv6/KL46/hw_timer.c" \
"../Sources/jsp/armv6/KL46/integrator.c" \
"../Sources/jsp/armv6/KL46/sys_config.c" \

C_SRCS += \
../Sources/jsp/armv6/KL46/hw_timer.c \
../Sources/jsp/armv6/KL46/integrator.c \
../Sources/jsp/armv6/KL46/sys_config.c \

OBJS += \
./Sources/jsp/armv6/KL46/hw_timer.o \
./Sources/jsp/armv6/KL46/integrator.o \
./Sources/jsp/armv6/KL46/sys_config.o \
./Sources/jsp/armv6/KL46/sys_support.o \

C_DEPS += \
./Sources/jsp/armv6/KL46/hw_timer.d \
./Sources/jsp/armv6/KL46/integrator.d \
./Sources/jsp/armv6/KL46/sys_config.d \

S_UPPER_DEPS += \
./Sources/jsp/armv6/KL46/sys_support.d \

OBJS_QUOTED += \
"./Sources/jsp/armv6/KL46/hw_timer.o" \
"./Sources/jsp/armv6/KL46/integrator.o" \
"./Sources/jsp/armv6/KL46/sys_config.o" \
"./Sources/jsp/armv6/KL46/sys_support.o" \

S_UPPER_DEPS_QUOTED += \
"./Sources/jsp/armv6/KL46/sys_support.d" \

C_DEPS_QUOTED += \
"./Sources/jsp/armv6/KL46/hw_timer.d" \
"./Sources/jsp/armv6/KL46/integrator.d" \
"./Sources/jsp/armv6/KL46/sys_config.d" \

OBJS_OS_FORMAT += \
./Sources/jsp/armv6/KL46/hw_timer.o \
./Sources/jsp/armv6/KL46/integrator.o \
./Sources/jsp/armv6/KL46/sys_config.o \
./Sources/jsp/armv6/KL46/sys_support.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/jsp/armv6/KL46/hw_timer.o: ../Sources/jsp/armv6/KL46/hw_timer.c
	@echo 'Building file: $<'
	@echo 'Executing target #33 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/armv6/KL46/hw_timer.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/armv6/KL46/hw_timer.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/armv6/KL46/integrator.o: ../Sources/jsp/armv6/KL46/integrator.c
	@echo 'Building file: $<'
	@echo 'Executing target #34 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/armv6/KL46/integrator.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/armv6/KL46/integrator.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/armv6/KL46/sys_config.o: ../Sources/jsp/armv6/KL46/sys_config.c
	@echo 'Building file: $<'
	@echo 'Executing target #35 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/armv6/KL46/sys_config.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/armv6/KL46/sys_config.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/armv6/KL46/sys_support.o: ../Sources/jsp/armv6/KL46/sys_support.S
	@echo 'Building file: $<'
	@echo 'Executing target #36 $<'
	@echo 'Invoking: ARM Ltd Windows GCC Assembler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/armv6/KL46/sys_support.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"Sources/jsp/armv6/KL46/sys_support.o"
	@echo 'Finished building: $<'
	@echo ' '


