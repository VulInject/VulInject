static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
int VAR5, VAR6 = VAR2->VAR7->VAR8;

FUN3("", VAR2->VAR9.VAR10, VAR2);

FUN4(VAR2);

for (VAR5 = 0; VAR5 < VAR6; VAR5++) {
struct VAR11 *VAR12 = VAR4->VAR13[VAR5];

FUN5(VAR12);
}

FUN6(VAR4);
}

static const struct drm_framebuffer_funcs VAR14 = {
.VAR15 = VAR16,
.VAR17 = VAR18,
};