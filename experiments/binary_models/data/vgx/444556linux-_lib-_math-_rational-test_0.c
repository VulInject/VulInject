static void FUN1(struct VAR1 *VAR2)
{
const struct VAR3 *VAR4 = (const struct VAR3 *)VAR2->VAR5;
unsigned long VAR6 = 0, VAR7 = 0;

FUN2(VAR4->VAR8, VAR4->VAR9, VAR4->VAR10, VAR4->VAR11, &VAR6, &VAR7);
FUN3(VAR2, VAR6, VAR4->VAR12);
FUN3(VAR2, VAR7, VAR4->VAR13);
}

static struct kunit_case VAR14[] = {
FUN4(VAR15, VAR16),
{}
};