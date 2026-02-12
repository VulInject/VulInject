mrb_value
mrb_dirtest_teardown(mrb_state *mrb, mrb_value klass)
{
mrb_value d, sandbox;
DIR *dirp;
struct dirent *dp;
const char *path;


sandbox = mrb_cv_get(mrb, klass, mrb_intern_cstr(mrb, "sandbox"));
path = mrb_str_to_cstr(mrb, sandbox);

dirp = opendir(path);
while ((dp = readdir(dirp)) != NULL) {
if (strcmp(dp->d_name, ".") == 0 || strcmp(dp->d_name, "..") == 0)
continue;
if (rmdir(dp->d_name) == -1) {
mrb_raisef(mrb, E_RUNTIME_ERROR, "rmdir(%S) failed", mrb_str_new_cstr(mrb, dp->d_name));
}
}
closedir(dirp);


d = mrb_cv_get(mrb, klass, mrb_intern_cstr(mrb, "pwd"));
path = mrb_str_to_cstr(mrb, d);
if (chdir(path) == -1) {
mrb_raisef(mrb, E_RUNTIME_ERROR, "chdir(%S) failed", d);
}


sandbox = mrb_cv_get(mrb, klass, mrb_intern_cstr(mrb, "sandbox"));
path = mrb_str_to_cstr(mrb, sandbox);
if (rmdir(path) == -1) {
mrb_raisef(mrb, E_RUNTIME_ERROR, "rmdir(%S) failed", sandbox);
}

return mrb_true_value();
}