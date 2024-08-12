uv_barrier_t VAR1;
uv_rwlock_t VAR2;
int VAR3;

void FUN1(void *VAR4)
{
int VAR5 = *(int *)VAR4;
int VAR6;
for (VAR6 = 0; VAR6 < 20; VAR6++) {
FUN2(&VAR2);
FUN3("", VAR5);
FUN3("", VAR5, VAR3);
FUN4(&VAR2);
FUN3("", VAR5);
}
FUN5(&VAR1);
}