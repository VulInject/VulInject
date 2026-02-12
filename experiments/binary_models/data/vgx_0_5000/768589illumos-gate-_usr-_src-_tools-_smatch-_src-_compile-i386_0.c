static struct storage *emit_return_stmt(struct statement *stmt)
{
struct function *f = current_func;
struct expression *expr = stmt->ret_value;
struct storage *val = NULL, *jmplbl;

if (expr && expr->ctype) {
val = x86_expression(expr);
assert(val != NULL);
emit_move(val, REG_EAX, expr->ctype, "return");
}

jmplbl = new_storage(STOR_LABEL);
jmplbl->flags |= STOR_WANTS_FREE;
jmplbl->label = f->ret_target;
insn("jmp", jmplbl, NULL, NULL);

return val;
}