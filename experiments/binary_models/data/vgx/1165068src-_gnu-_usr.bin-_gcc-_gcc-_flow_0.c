static int verify_wide_reg_1		FUN1 ((VAR1 *, void *));
static void verify_wide_reg		FUN1 ((int, VAR2));
static void verify_local_live_at_start	FUN1 ((VAR3, VAR2));
static void notice_stack_pointer_modification_1 FUN1 ((VAR1, VAR1, void *));
static void notice_stack_pointer_modification FUN1 ((VAR1));
static void mark_reg			FUN1 ((VAR1, void *));
static void mark_regs_live_at_end	FUN1 ((VAR3));
static int set_phi_alternative_reg      FUN1 ((VAR1, int, int, void *));
static void calculate_global_regs_live	FUN1 ((VAR4, VAR4, int));
static void propagate_block_delete_insn FUN1 ((VAR1));
static rtx propagate_block_delete_libcall FUN1 ((VAR1, VAR1));
static int insn_dead_p			FUN1 ((struct VAR5 *,
VAR1, int, VAR1));
static int libcall_dead_p		FUN1 ((struct VAR5 *,
VAR1, VAR1));
static void mark_set_regs		FUN1 ((struct VAR5 *,
VAR1, VAR1));
static void mark_set_1			FUN1 ((struct VAR5 *,
enum VAR6, VAR1, VAR1,
VAR1, int));
static int find_regno_partial		FUN1 ((VAR1 *, void *));

static int mark_regno_cond_dead		FUN1 ((struct VAR5 *,
int, VAR1));
static void free_reg_cond_life_info	FUN1 ((VAR7));
static int flush_reg_cond_reg_1		FUN1 ((VAR8, void *));
static void flush_reg_cond_reg		FUN1 ((struct VAR5 *,
int));
static rtx elim_reg_cond		FUN1 ((VAR1, unsigned int));
static rtx ior_reg_cond			FUN1 ((VAR1, VAR1, int));
static rtx not_reg_cond			FUN1 ((VAR1));
static rtx and_reg_cond			FUN1 ((VAR1, VAR1, int));
static void attempt_auto_inc		FUN1 ((struct VAR5 *,
VAR1, VAR1, VAR1, VAR1, VAR1));
static void find_auto_inc		FUN1 ((struct VAR5 *,
VAR1, VAR1));
static int try_pre_increment_1		FUN1 ((struct VAR5 *,
VAR1));
static int try_pre_increment		FUN1 ((VAR1, VAR1, VAR9));
static void mark_used_reg		FUN1 ((struct VAR5 *,
VAR1, VAR1, VAR1));
static void mark_used_regs		FUN1 ((struct VAR5 *,
VAR1, VAR1, VAR1));
void dump_flow_info			FUN1 ((VAR10 *));
void debug_flow_info			FUN1 ((void));
static void add_to_mem_set_list		FUN1 ((struct VAR5 *,
VAR1));
static int invalidate_mems_from_autoinc FUN1 ((VAR1 *, void *));
static void invalidate_mems_from_set	FUN1 ((struct VAR5 *,
VAR1));
static void clear_log_links		FUN1 ((VAR4));


void
FUN2 ()
{
if (VAR11
&& !FUN3 (VAR12->VAR13)
&& VAR14->VAR15 == NULL
&& (VAR16
&& !FUN4 (VAR12->VAR13)))
FUN5 ("");


if (FUN3 (VAR12->VAR13)
&& VAR14->VAR15 != NULL)
FUN5 ("");


else if (VAR17
&& VAR12->VAR18 != NULL
&& VAR14->VAR15 != NULL)
{
int VAR19 = FUN6 ();


if (FUN7 (VAR12->VAR18) < VAR19)
{
rtx VAR20;

for (VAR20 = FUN8 (); VAR20; VAR20 = FUN9 (VAR20))
if (VAR20 == VAR12->VAR18)
{
FUN5 ("");
break;
}
}
}
}