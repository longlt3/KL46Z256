################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/jsp/armv6/KL46/Startup_Code/__arm_end.c" \
"../Sources/jsp/armv6/KL46/Startup_Code/__arm_start.c" \
"../Sources/jsp/armv6/KL46/Startup_Code/kinetis_sysinit.c" \

C_SRCS += \
../Sources/jsp/armv6/KL46/Startup_Code/__arm_end.c \
../Sources/jsp/armv6/KL46/Startup_Code/__arm_start.c \
../Sources/jsp/armv6/KL46/Startup_Code/kinetis_sysinit.c \

OBJS += \
./Sources/jsp/armv6/KL46/Startup_Code/__arm_end.o \
./Sources/jsp/armv6/KL46/Startup_Code/__arm_start.o \
./Sources/jsp/armv6/KL46/Startup_Code/kinetis_sysinit.o \

C_DEPS += \
./Sources/jsp/armv6/KL46/Startup_Code/__arm_end.d \
./Sources/jsp/armv6/KL46/Startup_Code/__arm_start.d \
./Sources/jsp/armv6/KL46/Startup_Code/kinetis_sysinit.d \

OBJS_QUOTED += \
"./Sources/jsp/armv6/KL46/Startup_Code/__arm_end.o" \
"./Sources/jsp/armv6/KL46/Startup_Code/__arm_start.o" \
"./Sources/jsp/armv6/KL46/Startup_Code/kinetis_sysinit.o" \

C_DEPS_QUOTED += \
"./Sources/jsp/armv6/KL46/Startup_Code/__arm_end.d" \
"./Sources/jsp/armv6/KL46/Startup_Code/__arm_start.d" \
"./Sources/jsp/armv6/KL46/Startup_Code/kinetis_sysinit.d" \

OBJS_OS_FORMAT += \
./Sources/jsp/armv6/KL46/Startup_Code/__arm_end.o \
./Sources/jsp/armv6/KL46/Startup_Code/__arm_start.o \
./Sources/jsp/armv6/KL46/Startup_Code/kinetis_sysinit.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/jsp/armv6/KL46/Startup_Code/__arm_end.o: ../Sources/jsp/armv6/KL46/Startup_Code/__arm_end.c
	@echo 'Building file: $<'
	@echo 'Executing target #40 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/armv6/KL46/Startup_Code/__arm_end.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/armv6/KL46/Startup_Code/__arm_end.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/armv6/KL46/Startup_Code/__arm_start.o: ../Sources/jsp/armv6/KL46/Startup_Code/__arm_start.c
	@echo 'Building file: $<'
	@echo 'Executing target #41 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/armv6/KL46/Startup_Code/__arm_start.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/armv6/KL46/Startup_Code/__arm_start.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/armv6/KL46/Startup_Code/kinetis_sysinit.o: ../Sources/jsp/armv6/KL46/Startup_Code/kinetis_sysinit.c
	@echo 'Building file: $<'
	@echo 'Executing target #42 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/armv6/KL46/Startup_Code/kinetis_sysinit.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/armv6/KL46/Startup_Code/kinetis_sysinit.o"
	@echo 'Finished building: $<'
	@echo ' '


