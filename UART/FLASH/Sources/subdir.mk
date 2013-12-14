################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/main.c" \
"../Sources/sa_mtb.c" \

C_SRCS += \
../Sources/main.c \
../Sources/sa_mtb.c \

S_SRCS += \
../Sources/test.s \

S_SRCS_QUOTED += \
"../Sources/test.s" \

S_DEPS_QUOTED += \
"./Sources/test.d" \

OBJS += \
./Sources/main.o \
./Sources/sa_mtb.o \
./Sources/test.o \

C_DEPS += \
./Sources/main.d \
./Sources/sa_mtb.d \

S_DEPS += \
./Sources/test.d \

OBJS_QUOTED += \
"./Sources/main.o" \
"./Sources/sa_mtb.o" \
"./Sources/test.o" \

C_DEPS_QUOTED += \
"./Sources/main.d" \
"./Sources/sa_mtb.d" \

OBJS_OS_FORMAT += \
./Sources/main.o \
./Sources/sa_mtb.o \
./Sources/test.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/main.o: ../Sources/main.c
	@echo 'Building file: $<'
	@echo 'Executing target #1 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/main.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/main.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/sa_mtb.o: ../Sources/sa_mtb.c
	@echo 'Building file: $<'
	@echo 'Executing target #2 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/sa_mtb.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/sa_mtb.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/test.o: ../Sources/test.s
	@echo 'Building file: $<'
	@echo 'Executing target #3 $<'
	@echo 'Invoking: ARM Ltd Windows GCC Assembler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/test.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"Sources/test.o"
	@echo 'Finished building: $<'
	@echo ' '


