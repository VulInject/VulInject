static void FUN1(VAR1 *VAR2, PrefilterPacketHeaderValue VAR3, VAR4 *VAR5)
{
switch (VAR3.VAR6[0]) {
case VAR7:
{
VAR8 *VAR9 = VAR2->VAR10[VAR3.VAR6[1]];
VAR9->VAR11[VAR9->VAR12++] = VAR5->VAR13;
break;
}
case VAR14:
{
uint8_t VAR15 = VAR3.VAR6[1] - 1;
do {
VAR8 *VAR9 = VAR2->VAR10[VAR15];
VAR9->VAR11[VAR9->VAR12++] = VAR5->VAR13;
} while (VAR15--);

break;
}
case VAR16:
{
int VAR15 = VAR3.VAR6[1] + 1;
do {
VAR8 *VAR9 = VAR2->VAR10[VAR15];
VAR9->VAR11[VAR9->VAR12++] = VAR5->VAR13;
} while (++VAR15 < 256);

break;
}
case VAR17:
{
int VAR15 = VAR3.VAR6[1] + 1;
do {
VAR8 *VAR9 = VAR2->VAR10[VAR15];
VAR9->VAR11[VAR9->VAR12++] = VAR5->VAR13;
} while (++VAR15 < VAR3.VAR6[2]);

break;
}
}
}