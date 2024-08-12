FUN1 (const char **VAR1)
{
const char **VAR2 = &VAR1[0];

VAR3;

for (; *VAR2 != NULL; VAR2++) {
if (FUN2 (*VAR2, VAR4)) {

continue;
}

if (FUN2 (*VAR2, VAR5)) {
FUN3 ("", *VAR2, VAR6);
continue;
}

FUN4 (*VAR2);
}

FUN4 (NULL);
}