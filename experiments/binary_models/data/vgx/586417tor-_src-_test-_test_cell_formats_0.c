static void
FUN1(VAR1 *VAR2, uint8_t VAR3,
const void *VAR4, size_t VAR5)
{
relay_header_t VAR6;

memset(&VAR6, 0, sizeof(VAR6));
VAR6.VAR7 = 5;
VAR6.VAR3 = VAR3;
VAR6.VAR8 = VAR5;

VAR2->VAR3 = VAR9;
VAR2->VAR10 = 10;
FUN2(VAR2->VAR11, &VAR6);

memcpy(VAR2->VAR11 + VAR12, VAR4, VAR5);
}