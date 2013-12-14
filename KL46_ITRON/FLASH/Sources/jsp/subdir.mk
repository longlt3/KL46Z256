################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/jsp/kernel_cfg.c" \
"../Sources/jsp/test.c" \

C_SRCS += \
../Sources/jsp/kernel_cfg.c \
../Sources/jsp/test.c \

OBJS += \
./Sources/jsp/kernel_cfg.o \
./Sources/jsp/test.o \

C_DEPS += \
./Sources/jsp/kernel_cfg.d \
./Sources/jsp/test.d \

OBJS_QUOTED += \
"./Sources/jsp/kernel_cfg.o" \
"./Sources/jsp/test.o" \

C_DEPS_QUOTED += \
"./Sources/jsp/kernel_cfg.d" \
"./Sources/jsp/test.d" \

OBJS_OS_FORMAT += \
./Sources/jsp/kernel_cfg.o \
./Sources/jsp/test.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/jsp/kernel_cfg.o: ../Sources/jsp/kernel_cfg.c
	@echo 'Building file: $<'
	@echo 'Executing target #3 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/kernel_cfg.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/kernel_cfg.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/test.o: ../Sources/jsp/test.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/test.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/test.o"
	@echo 'Finished building: $<'
	@echo ' '


