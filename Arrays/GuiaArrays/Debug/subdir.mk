################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ejercicio7.c \
../ejercicio9-generico.c \
../ejercicio9.c 

OBJS += \
./ejercicio7.o \
./ejercicio9-generico.o \
./ejercicio9.o 

C_DEPS += \
./ejercicio7.d \
./ejercicio9-generico.d \
./ejercicio9.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


