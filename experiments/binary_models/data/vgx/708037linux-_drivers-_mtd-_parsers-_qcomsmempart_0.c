static void FUN1(const struct VAR1 *VAR2,
int VAR3)
{
int VAR4;

for (VAR4 = 0; VAR4 < VAR3; VAR4++)
FUN2(VAR2[VAR4].VAR5);

FUN2(VAR2);
}

static const struct of_device_id VAR6[] = {
{ .VAR7 = "" },
{},
};