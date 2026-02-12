int SetLocalNumNick(struct Client *cptr)
{
static unsigned int last_nn     = 0;
struct Client**     client_list = cli_serv(&me)->client_list;
unsigned int        mask        = cli_serv(&me)->nn_mask;
unsigned int        count       = 0;

assert(cli_user(cptr)->server == &me);

while (client_list[last_nn & mask]) {
if (++count == NN_MAX_CLIENT) {
assert(count < NN_MAX_CLIENT);
return 0;
}
if (++last_nn == NN_MAX_CLIENT)
last_nn = 0;
}
client_list[last_nn & mask] = cptr;  

inttobase64(cli_yxx(cptr), last_nn, 3);
if (++last_nn == NN_MAX_CLIENT)
last_nn = 0;
return 1;
}