static int update_pwuser_cb(FILE *fptr, FILE *ftmp, const char *username, const char *password, const char *line, struct cb_helper *helper)
{
int rc = 0;

UNUSED(fptr);
UNUSED(password);

if(strcmp(username, helper->username)){

fprintf(ftmp, "%s", line);
}else{

helper->found = true;
rc = output_new_password(ftmp, username, helper->password, helper->iterations);
}
return rc;
}