/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

#ifndef VMINPUT_SDK_H
#define VMINPUT_SDK_H

#ifdef __cplusplus
extern "C" {
#endif

#include "vmsys.h"

typedef enum
{
VM_INPUT_MODE_NONE = 0,
VM_INPUT_MODE_123,
VM_INPUT_MODE_123_SYMBOLS,
/* English */
VM_INPUT_MODE_MULTITAP_UPPERCASE_ABC,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_ABC,
VM_INPUT_MODE_MULTITAP_UPPERCASE_ABC_NO_NUMERIC,
VM_INPUT_MODE_MULTITAP_LOWERCASE_ABC_NO_NUMERIC,
/* The above 6 input modes are used by Q03C WCSS editor, and the
 * editor requires the input modes values are smaller than 0x1F,
 * so we should make sure the input modes used in UI_check_WCSS_normal_character() 
 * of gui_inputs.c are smaller than 0x1F
 */
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_ABC, 
VM_INPUT_MODE_SMART_LOWERCASE_ABC, 
VM_INPUT_MODE_SMART_UPPERCASE_ABC, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_ABC,

VM_INPUT_MODE_ARABIC_NUMERIC,
VM_INPUT_MODE_FLOAT_123,
VM_INPUT_MODE_HK_STROKE,    
VM_INPUT_MODE_KEYPAD_NUMERIC,
VM_INPUT_MODE_MAGIC_NUMBER,
VM_INPUT_MODE_PHONE_NUMBER,
VM_INPUT_MODE_PHONE_NUMBER_WILDCHAR,
VM_INPUT_MODE_SIGNED_123,
VM_INPUT_MODE_SIGNED_FLOAT_123,
VM_INPUT_MODE_SIM_NUMERIC,

/*Afrikaans*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_AFRIKAANS,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_AFRIKAANS,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_AFRIKAANS, 
VM_INPUT_MODE_SMART_LOWERCASE_AFRIKAANS, 
VM_INPUT_MODE_SMART_UPPERCASE_AFRIKAANS, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_AFRIKAANS,
/*Albanian*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_ALBANIAN,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_ALBANIAN,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_ALBANIAN, 
VM_INPUT_MODE_SMART_LOWERCASE_ALBANIAN, 
VM_INPUT_MODE_SMART_UPPERCASE_ALBANIAN, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_ALBANIAN,
/*Armenian*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_ARMENIAN,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_ARMENIAN,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_ARMENIAN, 
VM_INPUT_MODE_SMART_LOWERCASE_ARMENIAN, 
VM_INPUT_MODE_SMART_UPPERCASE_ARMENIAN, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_ARMENIAN,
/*Arabic*/
VM_INPUT_MODE_MULTITAP_ARABIC,    
VM_INPUT_MODE_SMART_ARABIC,
/*Assamese*/
VM_INPUT_MODE_MULTITAP_ASSAMESE,    
VM_INPUT_MODE_SMART_ASSAMESE,
/*Azerbaijani*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_AZERBAIJANI,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_AZERBAIJANI,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_AZERBAIJANI, 
VM_INPUT_MODE_SMART_LOWERCASE_AZERBAIJANI, 
VM_INPUT_MODE_SMART_UPPERCASE_AZERBAIJANI, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_AZERBAIJANI,
/*Basque*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_BASQUE,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_BASQUE,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_BASQUE, 
VM_INPUT_MODE_SMART_LOWERCASE_BASQUE, 
VM_INPUT_MODE_SMART_UPPERCASE_BASQUE, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_BASQUE,
/*Bengali*/
VM_INPUT_MODE_MULTITAP_BENGALI,    
VM_INPUT_MODE_SMART_BENGALI,
/*Bulgarian*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_BULGARIAN,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_BULGARIAN,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_BULGARIAN, 
VM_INPUT_MODE_SMART_LOWERCASE_BULGARIAN, 
VM_INPUT_MODE_SMART_UPPERCASE_BULGARIAN, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_BULGARIAN,
/*Catalan*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_CATALAN,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_CATALAN,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_CATALAN, 
VM_INPUT_MODE_SMART_LOWERCASE_CATALAN, 
VM_INPUT_MODE_SMART_UPPERCASE_CATALAN, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_CATALAN,
/*Croatian*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_CROATIAN,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_CROATIAN,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_CROATIAN, 
VM_INPUT_MODE_SMART_LOWERCASE_CROATIAN, 
VM_INPUT_MODE_SMART_UPPERCASE_CROATIAN, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_CROATIAN,
/*Czech*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_CZECH,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_CZECH,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_CZECH, 
VM_INPUT_MODE_SMART_LOWERCASE_CZECH, 
VM_INPUT_MODE_SMART_UPPERCASE_CZECH, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_CZECH,
/*Danish*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_DANISH,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_DANISH,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_DANISH, 
VM_INPUT_MODE_SMART_LOWERCASE_DANISH, 
VM_INPUT_MODE_SMART_UPPERCASE_DANISH, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_DANISH,
/*Dutch*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_DUTCH,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_DUTCH,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_DUTCH, 
VM_INPUT_MODE_SMART_LOWERCASE_DUTCH, 
VM_INPUT_MODE_SMART_UPPERCASE_DUTCH, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_DUTCH,
/*Estonian*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_ESTONIAN,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_ESTONIAN,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_ESTONIAN, 
VM_INPUT_MODE_SMART_LOWERCASE_ESTONIAN, 
VM_INPUT_MODE_SMART_UPPERCASE_ESTONIAN, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_ESTONIAN,
/*Filipino*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_FILIPINO,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_FILIPINO,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_FILIPINO, 
VM_INPUT_MODE_SMART_LOWERCASE_FILIPINO, 
VM_INPUT_MODE_SMART_UPPERCASE_FILIPINO, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_FILIPINO,
/*Finnish*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_FINNISH,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_FINNISH,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_FINNISH, 
VM_INPUT_MODE_SMART_LOWERCASE_FINNISH, 
VM_INPUT_MODE_SMART_UPPERCASE_FINNISH, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_FINNISH,
/*French*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_FRENCH,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_FRENCH,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_FRENCH, 
VM_INPUT_MODE_SMART_LOWERCASE_FRENCH, 
VM_INPUT_MODE_SMART_UPPERCASE_FRENCH, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_FRENCH,
/*Galician*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_GALICIAN,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_GALICIAN,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_GALICIAN, 
VM_INPUT_MODE_SMART_LOWERCASE_GALICIAN, 
VM_INPUT_MODE_SMART_UPPERCASE_GALICIAN, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_GALICIAN,
/*Georgian*/
VM_INPUT_MODE_MULTITAP_GEORGIAN,    
VM_INPUT_MODE_SMART_GEORGIAN,
/*German*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_GERMAN,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_GERMAN,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_GERMAN, 
VM_INPUT_MODE_SMART_LOWERCASE_GERMAN, 
VM_INPUT_MODE_SMART_UPPERCASE_GERMAN, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_GERMAN,
/*Greek*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_GREEK,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_GREEK,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_GREEK, 
VM_INPUT_MODE_SMART_LOWERCASE_GREEK, 
VM_INPUT_MODE_SMART_UPPERCASE_GREEK, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_GREEK,
/*Gujarati*/
VM_INPUT_MODE_MULTITAP_GUJARATI,    
VM_INPUT_MODE_SMART_GUJARATI,
/*Hausa*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_HAUSA,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_HAUSA,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_HAUSA, 
VM_INPUT_MODE_SMART_LOWERCASE_HAUSA, 
VM_INPUT_MODE_SMART_UPPERCASE_HAUSA, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_HAUSA,
/*Hebrew*/
VM_INPUT_MODE_MULTITAP_HEBREW,    
VM_INPUT_MODE_SMART_HEBREW,
/*Hindi*/
VM_INPUT_MODE_MULTITAP_HINDI,    
VM_INPUT_MODE_SMART_HINDI,
/*Hungarian*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_HUNGARIAN,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_HUNGARIAN,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_HUNGARIAN, 
VM_INPUT_MODE_SMART_LOWERCASE_HUNGARIAN, 
VM_INPUT_MODE_SMART_UPPERCASE_HUNGARIAN, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_HUNGARIAN,
/*Icelandic*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_ICELANDIC,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_ICELANDIC,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_ICELANDIC, 
VM_INPUT_MODE_SMART_LOWERCASE_ICELANDIC, 
VM_INPUT_MODE_SMART_UPPERCASE_ICELANDIC, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_ICELANDIC,
/*Igbo*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_IGBO,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_IGBO,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_IGBO, 
VM_INPUT_MODE_SMART_LOWERCASE_IGBO, 
VM_INPUT_MODE_SMART_UPPERCASE_IGBO, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_IGBO,
/*Indonesian*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_INDONESIAN,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_INDONESIAN,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_INDONESIAN, 
VM_INPUT_MODE_SMART_LOWERCASE_INDONESIAN, 
VM_INPUT_MODE_SMART_UPPERCASE_INDONESIAN, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_INDONESIAN,
/*Irish*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_IRISH,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_IRISH,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_IRISH, 
VM_INPUT_MODE_SMART_LOWERCASE_IRISH, 
VM_INPUT_MODE_SMART_UPPERCASE_IRISH, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_IRISH,
/*Italian*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_ITALIAN,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_ITALIAN,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_ITALIAN, 
VM_INPUT_MODE_SMART_LOWERCASE_ITALIAN, 
VM_INPUT_MODE_SMART_UPPERCASE_ITALIAN, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_ITALIAN,
/*Kannada*/
VM_INPUT_MODE_MULTITAP_KANNADA,    
VM_INPUT_MODE_SMART_KANNADA,
/*Kazakh*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_KAZAKH,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_KAZAKH,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_KAZAKH, 
VM_INPUT_MODE_SMART_LOWERCASE_KAZAKH, 
VM_INPUT_MODE_SMART_UPPERCASE_KAZAKH, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_KAZAKH,
VM_INPUT_MODE_MULTITAP_KOREAN,
/*Latvian*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_LATVIAN,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_LATVIAN,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_LATVIAN, 
VM_INPUT_MODE_SMART_LOWERCASE_LATVIAN, 
VM_INPUT_MODE_SMART_UPPERCASE_LATVIAN, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_LATVIAN,
/*Lithuanian*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_LITHUANIAN,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_LITHUANIAN,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_LITHUANIAN, 
VM_INPUT_MODE_SMART_LOWERCASE_LITHUANIAN, 
VM_INPUT_MODE_SMART_UPPERCASE_LITHUANIAN, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_LITHUANIAN,
/*Macedonian*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_MACEDONIAN,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_MACEDONIAN,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_MACEDONIAN, 
VM_INPUT_MODE_SMART_LOWERCASE_MACEDONIAN, 
VM_INPUT_MODE_SMART_UPPERCASE_MACEDONIAN, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_MACEDONIAN,
/*Malay*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_MALAY,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_MALAY,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_MALAY, 
VM_INPUT_MODE_SMART_LOWERCASE_MALAY, 
VM_INPUT_MODE_SMART_UPPERCASE_MALAY, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_MALAY,
/*Malayalam*/
VM_INPUT_MODE_MULTITAP_MALAYALAM,    
VM_INPUT_MODE_MULTITAP_LAO,
VM_INPUT_MODE_MULTITAP_KHMER,
VM_INPUT_MODE_SMART_KHMER,
VM_INPUT_MODE_MULTITAP_MYANMAR,
VM_INPUT_MODE_SMART_MALAYALAM,
/*Marathi*/
VM_INPUT_MODE_MULTITAP_MARATHI,    
VM_INPUT_MODE_SMART_MARATHI,
/*Moldovan*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_MOLDOVAN,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_MOLDOVAN,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_MOLDOVAN, 
VM_INPUT_MODE_SMART_LOWERCASE_MOLDOVAN, 
VM_INPUT_MODE_SMART_UPPERCASE_MOLDOVAN, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_MOLDOVAN,
/*Norwegian*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_NORWEGIAN,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_NORWEGIAN,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_NORWEGIAN, 
VM_INPUT_MODE_SMART_LOWERCASE_NORWEGIAN, 
VM_INPUT_MODE_SMART_UPPERCASE_NORWEGIAN,
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_NORWEGIAN,
/*Oriya*/
VM_INPUT_MODE_MULTITAP_ORIYA,    
VM_INPUT_MODE_SMART_ORIYA,
/*Persian*/ 
VM_INPUT_MODE_MULTITAP_PERSIAN,    
VM_INPUT_MODE_SMART_PERSIAN,
/*Polish*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_POLISH,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_POLISH,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_POLISH, 
VM_INPUT_MODE_SMART_LOWERCASE_POLISH, 
VM_INPUT_MODE_SMART_UPPERCASE_POLISH, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_POLISH,
/*Portuguese*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_PORTUGUESE,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_PORTUGUESE,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_PORTUGUESE, 
VM_INPUT_MODE_SMART_LOWERCASE_PORTUGUESE, 
VM_INPUT_MODE_SMART_UPPERCASE_PORTUGUESE, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_PORTUGUESE,
/*Punjabi*/
VM_INPUT_MODE_MULTITAP_PUNJABI,    
VM_INPUT_MODE_SMART_PUNJABI,
/*Romanian*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_ROMANIAN,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_ROMANIAN,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_ROMANIAN, 
VM_INPUT_MODE_SMART_LOWERCASE_ROMANIAN, 
VM_INPUT_MODE_SMART_UPPERCASE_ROMANIAN, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_ROMANIAN,
/*Russian*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_RUSSIAN,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_RUSSIAN,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_RUSSIAN, 
VM_INPUT_MODE_SMART_LOWERCASE_RUSSIAN, 
VM_INPUT_MODE_SMART_UPPERCASE_RUSSIAN, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_RUSSIAN,
/*Serbian*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_SERBIAN,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_SERBIAN,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_SERBIAN, 
VM_INPUT_MODE_SMART_LOWERCASE_SERBIAN, 
VM_INPUT_MODE_SMART_UPPERCASE_SERBIAN, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_SERBIAN,
/*Sesotho*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_SESOTHO,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_SESOTHO,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_SESOTHO, 
VM_INPUT_MODE_SMART_LOWERCASE_SESOTHO, 
VM_INPUT_MODE_SMART_UPPERCASE_SESOTHO, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_SESOTHO,
/*Slovak*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_SLOVAK,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_SLOVAK,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_SLOVAK, 
VM_INPUT_MODE_SMART_LOWERCASE_SLOVAK, 
VM_INPUT_MODE_SMART_UPPERCASE_SLOVAK, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_SLOVAK,
/*Slovenian*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_SLOVENIAN,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_SLOVENIAN,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_SLOVENIAN, 
VM_INPUT_MODE_SMART_LOWERCASE_SLOVENIAN, 
VM_INPUT_MODE_SMART_UPPERCASE_SLOVENIAN, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_SLOVENIAN,
/*Spanish*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_SPANISH,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_SPANISH,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_SPANISH, 
VM_INPUT_MODE_SMART_LOWERCASE_SPANISH, 
VM_INPUT_MODE_SMART_UPPERCASE_SPANISH, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_SPANISH,
/*Swahili*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_SWAHILI,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_SWAHILI,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_SWAHILI, 
VM_INPUT_MODE_SMART_LOWERCASE_SWAHILI, 
VM_INPUT_MODE_SMART_UPPERCASE_SWAHILI, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_SWAHILI,
/*Swedish*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_SWEDISH,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_SWEDISH,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_SWEDISH, 
VM_INPUT_MODE_SMART_LOWERCASE_SWEDISH, 
VM_INPUT_MODE_SMART_UPPERCASE_SWEDISH, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_SWEDISH,
/*Tagalog*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_TAGALOG,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_TAGALOG,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_TAGALOG, 
VM_INPUT_MODE_SMART_LOWERCASE_TAGALOG, 
VM_INPUT_MODE_SMART_UPPERCASE_TAGALOG, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_TAGALOG,
/*Tamil*/
VM_INPUT_MODE_MULTITAP_TAMIL,    
VM_INPUT_MODE_SMART_TAMIL,
/*Telugu*/
VM_INPUT_MODE_MULTITAP_TELUGU,    
VM_INPUT_MODE_SMART_TELUGU,
/*Thai*/
VM_INPUT_MODE_MULTITAP_THAI,    
VM_INPUT_MODE_SMART_THAI,
/*Turkish*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_TURKISH,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_TURKISH,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_TURKISH, 
VM_INPUT_MODE_SMART_LOWERCASE_TURKISH, 
VM_INPUT_MODE_SMART_UPPERCASE_TURKISH, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_TURKISH,
/*Ukrainian*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_UKRAINIAN,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_UKRAINIAN,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_UKRAINIAN, 
VM_INPUT_MODE_SMART_LOWERCASE_UKRAINIAN, 
VM_INPUT_MODE_SMART_UPPERCASE_UKRAINIAN, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_UKRAINIAN,
/*Urdu*/
VM_INPUT_MODE_MULTITAP_URDU,    
VM_INPUT_MODE_SMART_URDU,
/*Vietnamese*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_VIETNAMESE,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_VIETNAMESE,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_VIETNAMESE, 
VM_INPUT_MODE_SMART_LOWERCASE_VIETNAMESE, 
VM_INPUT_MODE_SMART_UPPERCASE_VIETNAMESE, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_VIETNAMESE,
/*Xhosa*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_XHOSA,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_XHOSA,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_XHOSA, 
VM_INPUT_MODE_SMART_LOWERCASE_XHOSA, 
VM_INPUT_MODE_SMART_UPPERCASE_XHOSA, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_XHOSA,
/*Yoruba*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_YORUBA,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_YORUBA,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_YORUBA, 
VM_INPUT_MODE_SMART_LOWERCASE_YORUBA, 
VM_INPUT_MODE_SMART_UPPERCASE_YORUBA, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_YORUBA,
/*Zulu*/ 
VM_INPUT_MODE_MULTITAP_UPPERCASE_ZULU,    
VM_INPUT_MODE_MULTITAP_LOWERCASE_ZULU,
VM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_ZULU, 
VM_INPUT_MODE_SMART_LOWERCASE_ZULU, 
VM_INPUT_MODE_SMART_UPPERCASE_ZULU, 
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_ZULU,

/* Dialects */
VM_INPUT_MODE_SMART_UPPERCASE_UK_ABC,
VM_INPUT_MODE_SMART_LOWERCASE_UK_ABC,
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_UK_ABC,
VM_INPUT_MODE_SMART_UPPERCASE_CA_FRENCH,
VM_INPUT_MODE_SMART_LOWERCASE_CA_FRENCH,
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_CA_FRENCH,
VM_INPUT_MODE_SMART_UPPERCASE_HINGLISH,
VM_INPUT_MODE_SMART_LOWERCASE_HINGLISH,
VM_INPUT_MODE_SMART_UPPERCASE_SA_SPANISH,
VM_INPUT_MODE_SMART_LOWERCASE_SA_SPANISH,
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_SA_SPANISH,
VM_INPUT_MODE_SMART_UPPERCASE_SA_PORTUGUESE,
VM_INPUT_MODE_SMART_LOWERCASE_SA_PORTUGUESE,
VM_INPUT_MODE_SMART_FIRST_UPPERCASE_SA_PORTUGUESE,

/* Chinese*/
VM_INPUT_MODE_TR_BOPOMO,
VM_INPUT_MODE_TR_MULTITAP_BOPOMO,
VM_INPUT_MODE_TR_STROKE,
VM_INPUT_MODE_QUICK_SEARCH_BOPOMO,
VM_INPUT_MODE_QUICK_SEARCH_HK_STROKE,    
VM_INPUT_MODE_QUICK_SEARCH_PINYIN,
VM_INPUT_MODE_QUICK_SEARCH_SM_STROKE,
VM_INPUT_MODE_QUICK_SEARCH_TR_STROKE,
VM_INPUT_MODE_SM_MULTITAP_PINYIN,
VM_INPUT_MODE_SM_PINYIN,
VM_INPUT_MODE_SM_STROKE,

VM_INPUT_MODE_MAX_NUM
} vm_input_mode_enum;

/* If selects OK or Cancel in editor screen, the state will pass to application via callback's parameter. */

#define VM_INPUT_OK             (1)     /* If selects OK */
#define VM_INPUT_CANCEL     (0) /* If selects Cancel */
#define VM_INPUT_NOTIFY     (2) /* If another screen makes editor exit, this message will be sent */
#define VM_INPUT_CLOSE      (3) /* If application close the input screen self, application will receive this message */
 /*****************************************************************************
 * FUNCTION
 *  vm_input_text
 * DESCRIPTION
 *  Display a editor screen. The default input method is VM_INPUT_METHOD_TEXT.
 *  The max length of input string is 250.
 * PARAMETERS
 *  f : [IN] This callback will be invoked when the editor screen closed. If user selects OK, the state will be VM_INPUT_OK.
 *  If user select Cancel, the state will be VM_INPUT_CANCEL.
 * RETURNS
 *  The error code of the operation.
 * RETURN VALUES
 *  0 : If open the input screen successfully.
 *  <0 : If failed.
 *****************************************************************************/
VMINT vm_input_text(void (*f)(VMINT state, VMWSTR text));

#define VM_INPUT_METHOD_TEXT     1      /* Input text and the default input method is PINYIN */
#define VM_INPUT_METHOD_PASSWORD 2      /* Input password and the default input method is multitap abc.
                                           only 0~9, *, # are allowed and the content would be displayed as * in editor. */
#define VM_INPUT_METHOD_NUMERIC         4       /* Input number and the default input method is phone number */
#define VM_INPUT_METHOD_ALPHABETIC    8 /* Input English and the default input method is multitap abc */
#define VM_INPUT_METHOD_URL         16 /* Input URL */

 /*****************************************************************************
 * FUNCTION
 *  vm_input_text2
 * DESCRIPTION
 *  Display a editor screen. User can set default string and default input method.
 *  The max length of input string is 250.
 * PARAMETERS
 *  def_str : [IN] Default string in editor screen.
 *  def_input_method: [IN] Default input method.
 *  f : [IN] This callback will be invoked when the editor screen closed. If user selects OK, the state will be VM_INPUT_OK.
 *  If user select Cancel, the state will be VM_INPUT_CANCEL.
 * RETURNS
 *  The error code of the operation.
 * RETURN VALUES
 *  0 : If open the input screen successfully.
 *  <0 : If failed.
 *****************************************************************************/
VMINT vm_input_text2(VMWSTR def_str, VMINT def_input_method, void (*f) (VMINT state, VMWSTR text));

/*****************************************************************************
 * FUNCTION
 *  vm_input_text3
 * DESCRIPTION
 *  Display a editor screen. User can set default string and default input method.
 *  User can also set the max input length (in short) via parameter input_max_size.
 * PARAMETERS
 *  default_string : [IN] Default string in editor screen.
 *  input_max_size : [IN] 
 *  default_input_method: [IN] Default input method.
 *  input_text_cb : [IN] This callback will be invoked when the editor screen closed. If user selects OK, the state will be VM_INPUT_OK.
 *  If user select Cancel, the state will be VM_INPUT_CANCEL.
 * RETURNS
 *  The error code of the operation.
 * RETURN VALUES
 *  0 : If open the input screen successfully.
 *  <0 : If failed.
 *****************************************************************************/
VMINT vm_input_text3(VMWSTR default_string, VMINT input_max_size, 
	VMINT default_input_method, void (*input_text_cb)(VMINT state, VMWSTR text));

 /*****************************************************************************
 * FUNCTION
 *  vm_set_app_desired_input_mode
 * DESCRIPTION
 *  To set editor desired input mode. Used when App call vm_input_text/vm_input_text2/vm_input_text3 to enter editor screen.
 * PARAMETERS
 *  desired_input_mode : [IN] input mode.
 * RETURN VALUES
 *  void
 *****************************************************************************/
void vm_set_app_desired_input_mode(vm_input_mode_enum desired_input_mode);

/*****************************************************************************
 * FUNCTION
 *  vm_input_close_screen
 * DESCRIPTION
 *  Close input screen by application self. And it will send VM_INPUT_CLOSE to application.
 * PARAMETERS
 *  void
 * RETURN VALUES
 *  void
 *****************************************************************************/
void vm_input_close_screen(void);
 
/*****************************************************************************
 * FUNCTION
 *  vm_input_move_cursor_to_start
 * DESCRIPTION
 *  Move the cursor to the start position and edit from the beginning.
 *  You need to call this API after vm_input_text/vm_input_text2/vm_input_text3.
 * PARAMETERS
 *  void
 * RETURN VALUES
 *  void
 *****************************************************************************/
void vm_input_move_cursor_to_start(void);

/*****************************************************************************
 * FUNCTION
 *  vm_input_set_vk_default_enlarge
 * DESCRIPTION
 *  Set VK default enlarge.
 * PARAMETERS
 *  void
 * RETURN VALUES
 *  void
 *****************************************************************************/
void vm_input_set_vk_default_enlarge(void);

/******************************************************************************
 * FUNCTION
 *	vm_input_set_editor_title
 * DESCRIPTION
 *	set the input editor title. This function should be called just before
 *	vm_input_text, vm_input_text2 or vm_input_text3, and the title's length must
 *	be less than 60.
 * PARAMETERS
 *	title	:	[IN]	editor title provided by user
 * RETURN VALUES
 *	TRUE	:	if set the editor title successfully.
 *	FALSE	:	if fail to set the editor title.
 *****************************************************************************/
VMINT vm_input_set_editor_title(VMWSTR title);

#ifdef __cplusplus
}
#endif

#endif /* VMINPUT_SDK_H */ 

