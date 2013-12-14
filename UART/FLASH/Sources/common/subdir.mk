################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/common/irq.c" \
"../Sources/common/led.c" \
"../Sources/common/lptmr.c" \
"../Sources/common/mcg.c" \
"../Sources/common/pit.c" \
"../Sources/common/resources.c" \
"../Sources/common/tpm.c" \
"../Sources/common/uart.c" \

C_SRCS += \
../Sources/common/irq.c \
../Sources/common/led.c \
../Sources/common/lptmr.c \
../Sources/common/mcg.c \
../Sources/common/pit.c \
../Sources/common/resources.c \
../Sources/common/tpm.c \
../Sources/common/uart.c \

OBJS += \
./Sources/common/irq.o \
./Sources/common/led.o \
./Sources/common/lptmr.o \
./Sources/common/mcg.o \
./Sources/common/pit.o \
./Sources/common/resources.o \
./Sources/common/tpm.o \
./Sources/common/uart.o \

C_DEPS += \
./Sources/common/irq.d \
./Sources/common/led.d \
./Sources/common/lptmr.d \
./Sources/common/mcg.d \
./Sources/common/pit.d \
./Sources/common/resources.d \
./Sources/common/tpm.d \
./Sources/common/uart.d \

OBJS_QUOTED += \
"./Sources/common/irq.o" \
"./Sources/common/led.o" \
"./Sources/common/lptmr.o" \
"./Sources/common/mcg.o" \
"./Sources/common/pit.o" \
"./Sources/common/resources.o" \
"./Sources/common/tpm.o" \
"./Sources/common/uart.o" \

C_DEPS_QUOTED += \
"./Sources/common/irq.d" \
"./Sources/common/led.d" \
"./Sources/common/lptmr.d" \
"./Sources/common/mcg.d" \
"./Sources/common/pit.d" \
"./Sources/common/resources.d" \
"./Sources/common/tpm.d" \
"./Sources/common/uart.d" \

OBJS_OS_FORMAT += \
./Sources/common/irq.o \
./Sources/common/led.o \
./Sources/common/lptmr.o \
./Sources/common/mcg.o \
./Sources/common/pit.o \
./Sources/common/resources.o \
./Sources/common/tpm.o \
./Sources/common/uart.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/common/irq.o: ../Sources/common/irq.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/common/irq.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/common/irq.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/common/led.o: ../Sources/common/led.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/common/led.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/common/led.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/common/lptmr.o: ../Sources/common/lptmr.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/common/lptmr.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/common/lptmr.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/common/mcg.o: ../Sources/common/mcg.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/common/mcg.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/common/mcg.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/common/pit.o: ../Sources/common/pit.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/common/pit.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/common/pit.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/common/resources.o: ../Sources/common/resources.c
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/common/resources.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/common/resources.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/common/tpm.o: ../Sources/common/tpm.c
	@echo 'Building file: $<'
	@echo 'Executing target #10 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/common/tpm.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/common/tpm.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/common/uart.o: ../Sources/common/uart.c
	@echo 'Building file: $<'
	@echo 'Executing target #11 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/common/uart.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/common/uart.o"
	@echo 'Finished building: $<'
	@echo ' '


