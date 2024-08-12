FUN1("");
FUN2("");

(1 << VAR1) | \
(1 << VAR2)

static const struct xt_table VAR3 = {
.VAR4		= "",
.VAR5	= VAR6,
.VAR7		= VAR8,
.VAR9		= VAR10,
.VAR11	= VAR12,
};

static struct VAR13 *sectbl_ops VAR14;

static int FUN3(struct VAR15 *VAR15)
{
struct VAR16 *VAR17;
int VAR18;

VAR17 = FUN4(&VAR3);
if (VAR17 == NULL)
return -VAR19;
VAR18 = FUN5(VAR15, &VAR3, VAR17, VAR20);
FUN6(VAR17);
return VAR18;
}