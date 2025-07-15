const char msg[] = "Hello world!";

void _start() {
    asm volatile (
        "mov $1, %%rax\n"
        "mov $1, %%rdi\n"
        "lea msg(%%rip), %%rsi\n"
        "mov $14, %%rdx\n"
        "syscall\n"
        :
        :
        : "rax", "rdi", "rsi", "rdx"
        );
    asm volatile (
            "mov $60, %%rax\n"
            "xor %%rdi, %%rax\n"
            "syscall\n"
            :
            :
            : "rax", "rdi"
            );
}
