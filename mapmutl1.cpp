
/* 
 *  M_APM  -  mapmutl1.c
 *
 *  Copyright (C) 2003 - 2007   Michael C. Ring
 *
 *  Permission to use, copy, and distribute this software and its
 *  documentation for any purpose with or without fee is hereby granted,
 *  provided that the above copyright notice appear in all copies and
 *  that both that copyright notice and this permission notice appear
 *  in supporting documentation.
 *
 *  Permission to modify the software is granted. Permission to distribute
 *  the modified code is granted. Modifications are to be distributed by
 *  using the file 'license.txt' as a template to modify the file header.
 *  'license.txt' is available in the official MAPM distribution.
 *
 *  This software is provided "as is" without express or implied warranty.
 */

/*
 *      $Id: mapmutl1.c,v 1.4 2007/12/03 01:59:27 mike Exp $
 *
 *      This file contains the utility function 'M_apm_log_error_msg'
 *
 *	This is the only function in this file so a user can supply
 *	their own custom version easily without changing the base library.
 *
 *      $Log: mapmutl1.c,v $
 *      Revision 1.4  2007/12/03 01:59:27  mike
 *      Update license
 *
 *      Revision 1.3  2003/07/21 21:00:34  mike
 *      Modify error messages to be in a consistent format.
 *
 *      Revision 1.2  2003/05/05 18:38:27  mike
 *      fix comment
 *
 *      Revision 1.1  2003/05/04 18:19:14  mike
 *      Initial revision
 */

#include "m_apm_lc.h"

int MAPM_SHOW_ERRORS = 1;
/****************************************************************************/
void	M_apm_log_error_msg(int fatal, char *message)
{
if (fatal)
  {
   fprintf(stderr, "MAPM Error: %s\n", message);
   exit(100);
  }
else
  {
    if (MAPM_SHOW_ERRORS)
      fprintf(stderr, "MAPM Warning: %s\n", message);
  }
}
/****************************************************************************/

void	M_apm_enable_log()
{
  MAPM_SHOW_ERRORS = 1;
}
void	M_apm_disable_log()
{
  MAPM_SHOW_ERRORS = 0;
}
int	M_apm_log_status()
{
  return MAPM_SHOW_ERRORS;
}

