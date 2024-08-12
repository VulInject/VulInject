VAR1 FUN1(const void *VAR2, size_t VAR3)
{
uint32_t VAR4 = 0x811c9dc5;
unsigned char *VAR5 = (unsigned char *)VAR2;
unsigned char *VAR6 = VAR5 + VAR3;

while (VAR5 < VAR6) {
VAR4 ^= (VAR1)*VAR5++;
VAR4 += (VAR4 << 1) + (VAR4 << 4) + (VAR4 << 7) + (VAR4 << 8) + (VAR4 << 24);
}

return VAR4;
}

if ((VAR7)->VAR8.VAR9) { \
(VAR10)->VAR11 = (VAR7)->VAR8.FUN2(VAR11); \
} else { \
(VAR10)->VAR11 = VAR11; \
} \
} while (0)