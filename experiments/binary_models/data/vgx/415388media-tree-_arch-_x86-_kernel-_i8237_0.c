static void FUN1(void)
{
unsigned long VAR1;
int VAR2;

VAR1 = FUN2();

FUN3(0, VAR3);
FUN3(0, VAR4);

for (VAR2 = 0; VAR2 < 8; VAR2++) {
FUN4(VAR2, 0x000000);

FUN5(VAR2, 1);
}


FUN6(4);

FUN7(VAR1);
}

static struct syscore_ops VAR5 = {
.VAR6		= VAR7,
};