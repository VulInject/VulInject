safe_execute_command (struct ui_out *uiout, char *command, int from_tty)
{
struct captured_execute_command_args args;
args.command = command;
args.from_tty = from_tty;
return catch_exceptions (uiout, do_captured_execute_command, &args,
NULL, RETURN_MASK_ALL);
}



extern initialize_file_ftype _initialize_cli_interp; 

void
_initialize_cli_interp (void)
{
static const struct interp_procs procs = {
cli_interpreter_init,	
cli_interpreter_resume,	
cli_interpreter_suspend,	
cli_interpreter_exec,	
cli_interpreter_display_prompt_p	
};
struct interp *cli_interp;


cli_uiout = cli_out_new (gdb_stdout);
cli_interp = interp_new (INTERP_CONSOLE, NULL, cli_uiout, &procs);

interp_add (cli_interp);
}