const char *FUN1(void)
{
const char *VAR1 = getenv("");
int VAR2 = FUN2();

if (!VAR1 && VAR3)
VAR1 = VAR3;
if (!VAR1 && !VAR2)
VAR1 = getenv("");
if (!VAR1)
VAR1 = getenv("");

if (!VAR1 && VAR2)
return NULL;

if (!VAR1)
VAR1 = VAR4;

return VAR1;
}