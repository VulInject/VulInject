static int __init ima_template_fmt_setup(char *str)
{
int num_templates = ARRAY_SIZE(builtin_templates);

if (template_setup_done)
return 1;

if (template_desc_init_fields(str, NULL, NULL) < 0) {
pr_err("format string '%s' not valid, using template %s\n",
str, CONFIG_IMA_DEFAULT_TEMPLATE);
return 1;
}

builtin_templates[num_templates - 1].fmt = str;
ima_template = builtin_templates + num_templates - 1;
template_setup_done = 1;

return 1;
}