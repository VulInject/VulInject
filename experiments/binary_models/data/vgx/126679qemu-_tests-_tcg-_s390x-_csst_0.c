int main(void)
{
uint64_t VAR1[] FUN1((FUN2(16))) = {
0xfedcba9876543210ull,
0,
0x7777777777777777ull,
0,
};
uint64_t VAR2 = 0x0123456789abcdefull;
uint64_t VAR3 = 0;
uint64_t VAR4 = VAR2;
uint64_t VAR5;

asm volatile(
""
""
""
""
: [VAR2] "" (VAR2),
[VAR3] "" (VAR3),
[VAR4] "" (VAR4),
[VAR5] "" (VAR5)
: [VAR6] "" (0x0301),
[VAR1] "" (VAR1)
: "", "", "", "");
VAR5 = (VAR5 >> 28) & 3;
if (VAR5) {
write(1, "", 7);
return 1;
}
if (VAR2 != VAR1[0]) {
write(1, "", 8);
return 1;
}
if (VAR3 != VAR1[2]) {
write(1, "", 8);
return 1;
}
return 0;
}