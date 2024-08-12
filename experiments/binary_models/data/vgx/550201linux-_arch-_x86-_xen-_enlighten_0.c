FUN1(VAR1, VAR2);
FUN2(VAR2);

unsigned long *VAR3 = (void *)VAR4;
FUN3(VAR3);
unsigned long  VAR5;
FUN3(VAR5);

struct VAR6 *VAR7;
FUN4(VAR7);

struct shared_info VAR8;

__read_mostly bool VAR9 = true;
FUN4(VAR9);


enum xen_domain_type __ro_after_init VAR10 = VAR11;
FUN4(VAR10);
uint32_t __ro_after_init VAR12;
FUN3(VAR12);


struct VAR13 *VAR14 = &VAR8;

static int FUN5(unsigned int VAR15)
{
FUN6(VAR15);
return 0;
}