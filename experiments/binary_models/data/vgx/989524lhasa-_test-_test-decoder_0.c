static void FUN1(void)
{
VAR1 *VAR2;
size_t VAR3;
uint32_t VAR4;
unsigned int VAR5;

for (VAR5 = 0; VAR5 < sizeof(VAR6) / sizeof(VAR7); ++VAR5) {
FUN2(VAR6[VAR5].VAR8, &VAR2, &VAR3);



VAR3 -= 500;



VAR4 = FUN3(VAR2, VAR3, VAR6[VAR5].VAR9,
VAR6[VAR5].VAR10);



assert(VAR4 != VAR6[VAR5].VAR4);

free(VAR2);
}
}