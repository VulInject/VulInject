static int FUN1(unsigned int VAR1)
{
static u32 VAR2 = 0, VAR3 = VAR4;
int VAR5;

VAR5 = FUN2(VAR1);
if (VAR5 < 0)
return 0;

FUN3(VAR5, VAR1);


if (VAR2 <= VAR3) {
if (VAR5 > VAR2)
VAR2 = VAR5;

if (VAR5 < VAR3)
VAR3 = VAR5;

if (VAR2 > VAR3)
FUN4(&VAR6);
}

return 0;
}


static const struct x86_cpu_id VAR7[] = {
FUN5(VAR8),
{}
};