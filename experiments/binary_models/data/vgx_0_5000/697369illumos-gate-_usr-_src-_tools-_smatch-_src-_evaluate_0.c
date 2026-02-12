static struct symbol *evaluate_symbol_expression(struct expression *expr)
{
struct expression *addr;
struct symbol *sym = expr->symbol;
struct symbol *base_type;

if (!sym) {
expression_error(expr, "undefined identifier '%s'", show_ident(expr->symbol_name));
return NULL;
}

examine_symbol_type(sym);

base_type = get_base_type(sym);
if (!base_type) {
expression_error(expr, "identifier '%s' has no type", show_ident(expr->symbol_name));
return NULL;
}

addr = alloc_expression(expr->pos, EXPR_SYMBOL);
addr->symbol = sym;
addr->symbol_name = expr->symbol_name;
addr->ctype = &lazy_ptr_ctype;	
addr->flags = expr->flags;
expr->type = EXPR_PREOP;
expr->op = '*';
expr->unop = addr;
expr->flags = CEF_NONE;


expr->ctype = sym;
return sym;
}