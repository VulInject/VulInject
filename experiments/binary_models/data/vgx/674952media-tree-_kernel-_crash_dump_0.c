* stores the physical address of elf header of crash VAR1
*
* VAR2: elfcorehdr_addr is not just limited to VAR3. It is also used VAR4
* FUN1() to determine if we are booting after a VAR5. Hence VAR6
* it under CONFIG_CRASH_DUMP and not VAR7.
unsigned long long VAR8 = VAR9;
FUN2(VAR8);


unsigned long long VAR10;


static int VAR11 FUN3(char *VAR12)
{
char *VAR13;
if (!VAR12)
return -VAR14;
VAR8 = FUN4(VAR12, &VAR13);
if (*VAR13 == '') {
VAR10 = VAR8;
VAR8 = FUN4(VAR13 + 1, &VAR13);
}
return VAR13 > VAR12 ? 0 : -VAR14;
}