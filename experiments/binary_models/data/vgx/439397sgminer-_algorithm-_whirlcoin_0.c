inline void FUN1(void *VAR1, const void *VAR2)
{
FUN2();

Whash_context_holder VAR3;
uint32_t VAR4[16], VAR5[16];

memcpy(&VAR3, &VAR6, sizeof(VAR6));

FUN3(&VAR3.VAR7, VAR2, 80);
FUN4(&VAR3.VAR7, VAR4);

FUN3(&VAR3.VAR8, VAR4, 64);
FUN4(&VAR3.VAR8, VAR5);

FUN3(&VAR3.VAR9, VAR5, 64);
FUN4(&VAR3.VAR9, VAR4);

FUN3(&VAR3.VAR10, VAR4, 64);
FUN4(&VAR3.VAR10, VAR5);

memcpy(VAR1, VAR5, 32);
}