global main       ; Declare the main function as global

extern printf     ; Declare the printf function

main:
mov edi, format  ; Load the address of the format string into edi
xor eax, eax     ; Clear eax to indicate no floating point args
call printf      ; Call the printf function
mov eax, 0       ; Set the return value to 0
ret              ; Return from the main function

format:
db 'Hello, Holberton\n', 0  ; Define the format string and null-terminate it
