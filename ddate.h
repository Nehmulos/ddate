#ifndef __DISC_DDATE_H_AIL_H_AIL_H_AIL_H_AIL_H_AIL__
#define __DISC_DDATE_H_AIL_H_AIL_H_AIL_H_AIL_H_AIL__

/* the thing */

struct disc_time {
    int season; /* 0-4 */
    int day; /* 0-72 */
    int yday; /* 0-365 */
    int year; /* 3066- */
};

/* string constants */

char *disc_holyday[5][2] = {
    { "Mungday", "Chaoflux" },
    { "Mojoday", "Discoflux" },
    { "Syaday",  "Confuflux" },
    { "Zaraday", "Bureflux" },
    { "Maladay", "Afflux" }
};

char *disc_day_long[5] = {
    "Sweetmorn", "Boomtime", "Pungenday", "Prickle-Prickle", "Setting Orange"
};

char *disc_day_short[5] = {"SM","BT","PD","PP","SO"};

char *disc_season_long[5] = {
    "Chaos", "Discord", "Confusion", "Bureaucracy", "The Aftermath"
};

char *disc_season_short[5] = {"Chs", "Dsc", "Cfn", "Bcy", "Afm"};

/* the doers of thing  */

struct disc_time disc_convert(int,int);
struct disc_time disc_makeday(int,int,int);
void disc_format(char *buf, const char* fmt, struct disc_time dt);

#endif /* __DISC_DDATE_H_AIL_H_AIL_H_AIL_H_AIL_H_AIL__ */
