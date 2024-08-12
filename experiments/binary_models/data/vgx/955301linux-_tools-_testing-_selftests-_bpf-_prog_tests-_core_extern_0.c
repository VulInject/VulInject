static VAR1 FUN1(void)
{
uint32_t VAR2, VAR3, VAR4;
struct utsname VAR5;

FUN2(&VAR5);
if (sscanf(VAR5.VAR6, "", &VAR2, &VAR3, &VAR4) != 3)
return 0;
return FUN3(VAR2, VAR3, VAR4);
}


static struct VAR7 {
const char *VAR8;
const char *VAR9;
bool VAR10;
struct test_core_extern__data VAR11;
} VAR12[] = {