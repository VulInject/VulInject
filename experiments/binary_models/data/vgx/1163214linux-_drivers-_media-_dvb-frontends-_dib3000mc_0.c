}
FUN1(VAR1);

static const struct dvb_frontend_ops VAR2;

struct VAR3 * FUN2(struct VAR4 *VAR5, u8 VAR6, struct VAR7 *VAR8)
{
struct VAR3 *VAR9;
struct VAR10 *VAR11;
VAR11 = FUN3(sizeof(struct VAR10), VAR12);
if (VAR11 == NULL)
return NULL;

VAR11->VAR8 = VAR8;
VAR11->VAR5 = VAR5;
VAR11->VAR6 = VAR6;

VAR9                   = &VAR11->VAR9;
VAR9->VAR13 = VAR11;
memcpy(&VAR11->VAR9.VAR14, &VAR2, sizeof(struct VAR15));

if (FUN4(VAR11) != 0)
goto VAR16;

FUN5(&VAR11->VAR17, VAR18, VAR11->VAR5, VAR11->VAR6);

FUN6(VAR11, 1037, 0x3130);

return VAR9;

VAR16:
FUN7(VAR11);
return NULL;
}