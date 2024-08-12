static char *FUN1(void)
{
int VAR1 = 48 + rand() % 15;

return (char *) (1UL << VAR1);
}