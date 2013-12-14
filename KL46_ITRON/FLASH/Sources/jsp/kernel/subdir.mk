################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/jsp/kernel/banner.c" \
"../Sources/jsp/kernel/cyclic.c" \
"../Sources/jsp/kernel/dataqueue.c" \
"../Sources/jsp/kernel/eventflag.c" \
"../Sources/jsp/kernel/exception.c" \
"../Sources/jsp/kernel/interrupt.c" \
"../Sources/jsp/kernel/mailbox.c" \
"../Sources/jsp/kernel/mempfix.c" \
"../Sources/jsp/kernel/semaphore.c" \
"../Sources/jsp/kernel/startup.c" \
"../Sources/jsp/kernel/sys_manage.c" \
"../Sources/jsp/kernel/syslog.c" \
"../Sources/jsp/kernel/task.c" \
"../Sources/jsp/kernel/task_except.c" \
"../Sources/jsp/kernel/task_manage.c" \
"../Sources/jsp/kernel/task_sync.c" \
"../Sources/jsp/kernel/time_event.c" \
"../Sources/jsp/kernel/time_manage.c" \
"../Sources/jsp/kernel/wait.c" \

C_SRCS += \
../Sources/jsp/kernel/banner.c \
../Sources/jsp/kernel/cyclic.c \
../Sources/jsp/kernel/dataqueue.c \
../Sources/jsp/kernel/eventflag.c \
../Sources/jsp/kernel/exception.c \
../Sources/jsp/kernel/interrupt.c \
../Sources/jsp/kernel/mailbox.c \
../Sources/jsp/kernel/mempfix.c \
../Sources/jsp/kernel/semaphore.c \
../Sources/jsp/kernel/startup.c \
../Sources/jsp/kernel/sys_manage.c \
../Sources/jsp/kernel/syslog.c \
../Sources/jsp/kernel/task.c \
../Sources/jsp/kernel/task_except.c \
../Sources/jsp/kernel/task_manage.c \
../Sources/jsp/kernel/task_sync.c \
../Sources/jsp/kernel/time_event.c \
../Sources/jsp/kernel/time_manage.c \
../Sources/jsp/kernel/wait.c \

OBJS += \
./Sources/jsp/kernel/banner.o \
./Sources/jsp/kernel/cyclic.o \
./Sources/jsp/kernel/dataqueue.o \
./Sources/jsp/kernel/eventflag.o \
./Sources/jsp/kernel/exception.o \
./Sources/jsp/kernel/interrupt.o \
./Sources/jsp/kernel/mailbox.o \
./Sources/jsp/kernel/mempfix.o \
./Sources/jsp/kernel/semaphore.o \
./Sources/jsp/kernel/startup.o \
./Sources/jsp/kernel/sys_manage.o \
./Sources/jsp/kernel/syslog.o \
./Sources/jsp/kernel/task.o \
./Sources/jsp/kernel/task_except.o \
./Sources/jsp/kernel/task_manage.o \
./Sources/jsp/kernel/task_sync.o \
./Sources/jsp/kernel/time_event.o \
./Sources/jsp/kernel/time_manage.o \
./Sources/jsp/kernel/wait.o \

C_DEPS += \
./Sources/jsp/kernel/banner.d \
./Sources/jsp/kernel/cyclic.d \
./Sources/jsp/kernel/dataqueue.d \
./Sources/jsp/kernel/eventflag.d \
./Sources/jsp/kernel/exception.d \
./Sources/jsp/kernel/interrupt.d \
./Sources/jsp/kernel/mailbox.d \
./Sources/jsp/kernel/mempfix.d \
./Sources/jsp/kernel/semaphore.d \
./Sources/jsp/kernel/startup.d \
./Sources/jsp/kernel/sys_manage.d \
./Sources/jsp/kernel/syslog.d \
./Sources/jsp/kernel/task.d \
./Sources/jsp/kernel/task_except.d \
./Sources/jsp/kernel/task_manage.d \
./Sources/jsp/kernel/task_sync.d \
./Sources/jsp/kernel/time_event.d \
./Sources/jsp/kernel/time_manage.d \
./Sources/jsp/kernel/wait.d \

OBJS_QUOTED += \
"./Sources/jsp/kernel/banner.o" \
"./Sources/jsp/kernel/cyclic.o" \
"./Sources/jsp/kernel/dataqueue.o" \
"./Sources/jsp/kernel/eventflag.o" \
"./Sources/jsp/kernel/exception.o" \
"./Sources/jsp/kernel/interrupt.o" \
"./Sources/jsp/kernel/mailbox.o" \
"./Sources/jsp/kernel/mempfix.o" \
"./Sources/jsp/kernel/semaphore.o" \
"./Sources/jsp/kernel/startup.o" \
"./Sources/jsp/kernel/sys_manage.o" \
"./Sources/jsp/kernel/syslog.o" \
"./Sources/jsp/kernel/task.o" \
"./Sources/jsp/kernel/task_except.o" \
"./Sources/jsp/kernel/task_manage.o" \
"./Sources/jsp/kernel/task_sync.o" \
"./Sources/jsp/kernel/time_event.o" \
"./Sources/jsp/kernel/time_manage.o" \
"./Sources/jsp/kernel/wait.o" \

C_DEPS_QUOTED += \
"./Sources/jsp/kernel/banner.d" \
"./Sources/jsp/kernel/cyclic.d" \
"./Sources/jsp/kernel/dataqueue.d" \
"./Sources/jsp/kernel/eventflag.d" \
"./Sources/jsp/kernel/exception.d" \
"./Sources/jsp/kernel/interrupt.d" \
"./Sources/jsp/kernel/mailbox.d" \
"./Sources/jsp/kernel/mempfix.d" \
"./Sources/jsp/kernel/semaphore.d" \
"./Sources/jsp/kernel/startup.d" \
"./Sources/jsp/kernel/sys_manage.d" \
"./Sources/jsp/kernel/syslog.d" \
"./Sources/jsp/kernel/task.d" \
"./Sources/jsp/kernel/task_except.d" \
"./Sources/jsp/kernel/task_manage.d" \
"./Sources/jsp/kernel/task_sync.d" \
"./Sources/jsp/kernel/time_event.d" \
"./Sources/jsp/kernel/time_manage.d" \
"./Sources/jsp/kernel/wait.d" \

OBJS_OS_FORMAT += \
./Sources/jsp/kernel/banner.o \
./Sources/jsp/kernel/cyclic.o \
./Sources/jsp/kernel/dataqueue.o \
./Sources/jsp/kernel/eventflag.o \
./Sources/jsp/kernel/exception.o \
./Sources/jsp/kernel/interrupt.o \
./Sources/jsp/kernel/mailbox.o \
./Sources/jsp/kernel/mempfix.o \
./Sources/jsp/kernel/semaphore.o \
./Sources/jsp/kernel/startup.o \
./Sources/jsp/kernel/sys_manage.o \
./Sources/jsp/kernel/syslog.o \
./Sources/jsp/kernel/task.o \
./Sources/jsp/kernel/task_except.o \
./Sources/jsp/kernel/task_manage.o \
./Sources/jsp/kernel/task_sync.o \
./Sources/jsp/kernel/time_event.o \
./Sources/jsp/kernel/time_manage.o \
./Sources/jsp/kernel/wait.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/jsp/kernel/banner.o: ../Sources/jsp/kernel/banner.c
	@echo 'Building file: $<'
	@echo 'Executing target #11 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/kernel/banner.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/kernel/banner.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/kernel/cyclic.o: ../Sources/jsp/kernel/cyclic.c
	@echo 'Building file: $<'
	@echo 'Executing target #12 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/kernel/cyclic.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/kernel/cyclic.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/kernel/dataqueue.o: ../Sources/jsp/kernel/dataqueue.c
	@echo 'Building file: $<'
	@echo 'Executing target #13 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/kernel/dataqueue.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/kernel/dataqueue.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/kernel/eventflag.o: ../Sources/jsp/kernel/eventflag.c
	@echo 'Building file: $<'
	@echo 'Executing target #14 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/kernel/eventflag.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/kernel/eventflag.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/kernel/exception.o: ../Sources/jsp/kernel/exception.c
	@echo 'Building file: $<'
	@echo 'Executing target #15 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/kernel/exception.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/kernel/exception.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/kernel/interrupt.o: ../Sources/jsp/kernel/interrupt.c
	@echo 'Building file: $<'
	@echo 'Executing target #16 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/kernel/interrupt.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/kernel/interrupt.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/kernel/mailbox.o: ../Sources/jsp/kernel/mailbox.c
	@echo 'Building file: $<'
	@echo 'Executing target #17 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/kernel/mailbox.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/kernel/mailbox.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/kernel/mempfix.o: ../Sources/jsp/kernel/mempfix.c
	@echo 'Building file: $<'
	@echo 'Executing target #18 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/kernel/mempfix.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/kernel/mempfix.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/kernel/semaphore.o: ../Sources/jsp/kernel/semaphore.c
	@echo 'Building file: $<'
	@echo 'Executing target #19 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/kernel/semaphore.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/kernel/semaphore.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/kernel/startup.o: ../Sources/jsp/kernel/startup.c
	@echo 'Building file: $<'
	@echo 'Executing target #20 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/kernel/startup.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/kernel/startup.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/kernel/sys_manage.o: ../Sources/jsp/kernel/sys_manage.c
	@echo 'Building file: $<'
	@echo 'Executing target #21 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/kernel/sys_manage.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/kernel/sys_manage.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/kernel/syslog.o: ../Sources/jsp/kernel/syslog.c
	@echo 'Building file: $<'
	@echo 'Executing target #22 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/kernel/syslog.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/kernel/syslog.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/kernel/task.o: ../Sources/jsp/kernel/task.c
	@echo 'Building file: $<'
	@echo 'Executing target #23 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/kernel/task.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/kernel/task.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/kernel/task_except.o: ../Sources/jsp/kernel/task_except.c
	@echo 'Building file: $<'
	@echo 'Executing target #24 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/kernel/task_except.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/kernel/task_except.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/kernel/task_manage.o: ../Sources/jsp/kernel/task_manage.c
	@echo 'Building file: $<'
	@echo 'Executing target #25 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/kernel/task_manage.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/kernel/task_manage.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/kernel/task_sync.o: ../Sources/jsp/kernel/task_sync.c
	@echo 'Building file: $<'
	@echo 'Executing target #26 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/kernel/task_sync.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/kernel/task_sync.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/kernel/time_event.o: ../Sources/jsp/kernel/time_event.c
	@echo 'Building file: $<'
	@echo 'Executing target #27 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/kernel/time_event.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/kernel/time_event.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/kernel/time_manage.o: ../Sources/jsp/kernel/time_manage.c
	@echo 'Building file: $<'
	@echo 'Executing target #28 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/kernel/time_manage.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/kernel/time_manage.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/jsp/kernel/wait.o: ../Sources/jsp/kernel/wait.c
	@echo 'Building file: $<'
	@echo 'Executing target #29 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/jsp/kernel/wait.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/jsp/kernel/wait.o"
	@echo 'Finished building: $<'
	@echo ' '


