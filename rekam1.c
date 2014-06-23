/* --COPYRIGHT--,TI
 *  MSP430/C2000 Tools Source and Object Code Software License Agreement
 *
 *
 *  IMPORTANT PLEASE READ THE FOLLOWING LICENSE AGREEMENT CAREFULLY.  THIS IS A LEGALLY BINDING AGREEMENT.  AFTER YOU READ THIS LICENSE AGREEMENT, YOU WILL BE ASKED WHETHER YOU ACCEPT AND AGREE TO THE TERMS OF THIS LICENSE AGREEMENT.  DO NOT CLICK "I HAVE READ AND AGREE" UNLESS: (1) YOU ARE AUTHORIZED TO ACCEPT AND AGREE TO THE TERMS OF THIS LICENSE AGREEMENT ON BEHALF OF YOURSELF AND YOUR COMPANY; AND (2) YOU INTEND TO ENTER INTO AND TO BE BOUND BY THE TERMS OF THIS LEGALLY BINDING AGREEMENT ON BEHALF OF YOURSELF AND YOUR COMPANY.
 *
 *
 *  Important Read carefully: This MSP430 Tools source and object code software license agreement ("Agreement") is a legal agreement between you (either an individual or entity) and Texas Instruments Incorporated ("TI").  The "Licensed Materials" subject to this Agreement include the software programs (in whole or in part) that accompany this Agreement and which you access "on-line" and/or electronic documentation (in whole or in part) associated and provided with these programs, as well as any updates or upgrades to such software programs and documentation, if any, provided to you at TI's sole discretion.  The Licensed Materials are specifically designed and licensed for use solely and exclusively with MSP430 microcontroller devices manufactured by or for TI ("TI Devices").  By installing, copying or otherwise using the Licensed Materials you agree to abide by the provisions set forth herein.  This Agreement is displayed for you to read prior to using the Licensed Materials.  If you choose not to accept or agree with these provisions, do not download or install the Licensed Materials.
 *
 *
 *  1.	License Grant and Use Restrictions.
 *
 *  a.	Licensed Materials License Grant.
 *
 *  			i.	Limited Source Code License.  Subject to the terms of this Agreement, TI hereby grants to you a limited, non-transferable, non-exclusive, non-assignable, non-sublicensable, fully paid-up and royalty-free license to make copies, prepare derivative works, display internally and use internally the Licensed Materials provided to you in source code for the sole purpose of developing object and executable versions of such Licensed Materials, or any derivative thereof, that execute solely and exclusively on TI Devices, for end use in Licensee Products, and maintaining and supporting such Licensed Materials, or any derivative thereof, and Licensee Products.  For purposes of this Agreement, "Licensee Product" means a product that consists of both hardware, including one or more TI Devices, and software components, including only executable versions of the Licensed Materials that execute solely and exclusively on such TI Devices and not on devices manufactured by or for an entity other than TI.
 *
 *  			ii.	Object Code Evaluation, Testing and Use License.  Subject to the terms of this Agreement, TI hereby grants to you a limited, non-transferable, non-exclusive, non-assignable, non-sublicensable, fully paid-up and royalty free license under all TI intellectual property embodied in the Licensed Materials provided to you in object code to make copies, display internally, distribute internally and use internally the Licensed Materials provided to you for the sole purposes of evaluating and testing the Licensed Materials and designing and developing Licensee Products, and maintaining and supporting the Licensee Products.
 *
 *  			iii.	Demonstration License.  Subject to the terms of this Agreement, TI hereby grants to you a limited, non-transferable, non-exclusive, non-assignable, non-sublicensable, fully paid-up and royalty free license under all TI intellectual property embodied in the Licensed Materials to demonstrate to third parties the Licensed Materials, or any derivatives thereof, executing solely and exclusively on TI Devices as they are used in Licensee Products, provided that such Licensed Materials, or any derivatives thereof, are demonstrated in object or executable versions only.
 *
 *  		iv.	Production and Distribution License.  Subject to the terms of this Agreement, TI hereby grants to you a non-transferable, non-exclusive, non-assignable, non-sublicensable, fully paid-up and royalty free license under all TI intellectual property embodied in the Licensed Materials to make, use, sell, offer to sell, import, export and otherwise distribute the Licensed Materials, or any derivatives thereof, as part of a Licensee Product, provided that such Licensee Products include only embedded executable copies of such Licensed Materials, or any derivatives thereof, that execute solely and exclusively on TI Devices in such Licensee Products.
 *
 *  	b.	Contractors and Suppliers.  The licenses granted to you hereunder shall include your on-site and off-site suppliers and independent contractors, while such suppliers and independent contractors are performing work for or providing services to you, provided that such suppliers and independent contractors have executed work-for-hire agreements with you containing applicable terms and conditions consistent with the terms and conditions set forth in this Agreement and provided further that you shall be liable to TI for any breach by your suppliers or independent contractors of this Agreement to the same extent as you would be if you had breached the Agreement yourself.
 *
 *  	c.	Limited License to TI and Covenant not to Sue.  Continuing for the term of this Agreement, you hereby grant to TI and TI's licensees of the Licensed Materials, under any of your patents embodied in the Licensed Materials, a non-transferable, non-exclusive, non-assignable, worldwide, fully paid-up, royalty-free license to make, use, sell, offer to sell, import, export and otherwise distribute such Licensed Materials.  You covenant not to sue or otherwise assert Derived Patents against TI and TI's affiliates and their licensees of the Licensed Materials.  In the event you assign a Derived Patent, you shall require as a condition of any such assignment that the assignee agree to be bound by the provisions in this Section 1(c) with respect to such Derived Patent.  Any attempted assignment or transfer in violation of this Section 1(c) shall be null and void.  For purposes of this Agreement, "Derived Patents" means any of your patents issuing from a patent application that discloses and claims an invention conceived of by you after delivery of the Licensed Materials, and derived by you from your access to the Licensed Materials.
 *
 *  	d.	No Other License.  Notwithstanding anything to the contrary, nothing in this Agreement shall be construed as a license to any intellectual property rights of TI other than those rights embodied in the Licensed Materials provided to you by TI.  EXCEPT AS PROVIDED HEREIN, NO OTHER LICENSE, EXPRESS OR IMPLIED, BY ESTOPPEL OR OTHERWISE, TO ANY OTHER TI INTELLECTUAL PROPERTY RIGHTS IS GRANTED HEREIN.
 *
 *  	e.	Restrictions.  You shall maintain the source code versions of the Licensed Materials, or any derivatives thereof, under password control protection and shall not disclose such source code versions of the Licensed Materials, or any derivatives thereof, to any person other than your employees and contractors whose job performance requires access.  You shall not use the Licensed Materials, or any derivatives thereof, with a processing device manufactured by or for an entity other than TI, and you agree that any such unauthorized use of the Licensed Materials, or any derivatives thereof, is a material breach of this Agreement.  Except as expressly provided in this Agreement, you shall not copy, publish, disclose, display, provide, transfer or make available the Licensed Materials, or any derivatives thereof, to any third party and you shall not sublicense, transfer, or assign the Licensed Materials, or any derivatives thereof, or your rights under this Agreement to any third party.  You shall not mortgage, pledge or encumber the Licensed Materials, or any derivatives thereof, in any way.  You may use the Licensed Materials, or any derivatives thereof, with Open Source Software or with software developed using Open Source Software tools provided you do not incorporate, combine or distribute the Licensed Materials, or any derivatives thereof, in a manner that subjects the Licensed Materials, or any derivatives thereof, to any license obligations or any other intellectual property related terms of any license governing such Open Source Software.   "Open Source Software" means any software licensed under terms requiring that (A) other software ("Proprietary Software") incorporated, combined or distributed with such software or developed using such software: (i) be disclosed or distributed in source code form; or (ii) otherwise be licensed on terms inconsistent with the terms of this Agreement, including but not limited to permitting use of the Proprietary Software on or with devices other than TI Devices, or (B) require the owner of Proprietary Software to license any of its patents to users of the Open Source Software and/or Proprietary Software incorporated, combined or distributed with such Open Source Software or developed using such Open Source Software.
 *
 *  		f.	Termination.  This Agreement is effective until terminated.  You may terminate this Agreement at any time by written notice to TI.  Without prejudice to any other rights, if you fail to comply with the terms of this Agreement, TI may terminate your right to use the Licensed Materials, or any derivatives thereof, upon written notice to you.  Upon termination of this Agreement, you will destroy any and all copies of the Licensed Materials, or any derivatives thereof, in your possession, custody or control and provide to TI a written statement signed by your authorized representative certifying such destruction. Except for Sections 1(a) and 1(b) and the limited license to TI in Section 1(c), all provisions of this Agreement shall survive termination of this Agreement.
 *
 *  2.	Licensed Materials Ownership.  The Licensed Materials are licensed, not sold to you, and can only be used in accordance with the terms of this Agreement.  Subject to the licenses granted to you pursuant to this Agreement, TI and its licensors own and shall continue to own all right, title, and interest in and to the Licensed Materials, including all copies thereof.  The parties agree that all fixes, modifications and improvements to the Licensed Materials conceived of or made by TI that are based, either in whole or in part, on your feedback, suggestions or recommendations are the exclusive property of TI and all right, title and interest in and to such fixes, modifications or improvements to the Licensed Materials will vest solely in TI.  Moreover, you acknowledge and agree that when your independently developed software or hardware components are combined, in whole or in part, with the Licensed Materials, your right to use the combined work that includes the Licensed Materials remains subject to the terms and conditions of this Agreement.
 *
 *  3.	Intellectual Property Rights.
 *
 *  	a.	The Licensed Materials contain copyrighted material, trade secrets and other proprietary information of TI and its licensors and are protected by copyright laws, international copyright treaties, and trade secret laws, as well as other intellectual property laws.  To protect TI's and its licensors' rights in the Licensed Materials, you agree, except as specifically permitted by statute by a provision that cannot be waived by contract, not to "unlock", decompile, reverse engineer, disassemble or otherwise translate to a human-perceivable form any portions of the Licensed Materials provided to you in object code format only, nor permit any person or entity to do so.  You shall not remove, alter, cover, or obscure any confidentiality, trade secret, trade mark, patent, copyright or other proprietary notice or other identifying marks or designs from any component of the Licensed Materials and you shall reproduce and include in all copies of the Licensed Materials, or any derivatives thereof, the copyright notice(s) and proprietary legend(s) of TI and its licensors as they appear in the Licensed Materials.  TI reserves all rights not specifically granted under this Agreement.
 *
 *  	b.	Certain Licensed Materials may be based on industry recognized standards or software programs published by industry recognized standards bodies and certain third parties may claim to own patents, copyrights, and other intellectual property rights that cover implementation of those standards.  You acknowledge and agree that this Agreement does not convey a license to any such third party patents, copyrights, and other intellectual property rights and that you are solely responsible for any patent, copyright, or other intellectual property right claim that relates to your use or distribution of the Licensed Materials, or any derivatives thereof,, or your use or distribution of your products that include or incorporate the Licensed Materials, or any derivatives thereof,.  Moreover, you acknowledge that you are responsible for any fees or royalties that may be payable to any third party based on such third party's interests in the Licensed Materials or any intellectual property rights that cover implementation of any industry recognized standard, any software program published by any industry recognized standards bodies or any other proprietary technology.
 *
 *  4.	Audit Right.  At TI's request, and within thirty (30) days after receiving written notice, you shall permit an independent auditor selected by TI to have access, no more than twice each calendar year (unless the immediately preceding audit revealed a discrepancy) and during your regular business hours, to all of your equipment, records, and documents as may contain information bearing upon the use of the Licensed Materials, or any derivatives thereof.  You shall keep full, complete, clear and accurate records with respect to product sales and distributions for a period beginning with the then-current calendar year and going back three (3) years.
 *
 *  5.	Confidential Information.  You acknowledge and agree that the Licensed Materials contain trade secrets and other confidential information of TI its licensors.  You agree to use the Licensed Materials, or any derivatives thereof, solely within the scope of the licenses set forth herein, to maintain the Licensed Materials, or any derivatives thereof, in strict confidence, to use at least the same procedures and degree of care that you use to prevent disclosure of your own confidential information of like importance but in no instance less than reasonable care, and to prevent disclosure of the Licensed Materials, or any derivatives thereof, to any third party, except as may be necessary and required in connection with your rights and obligations hereunder.  You agree to obtain executed confidentiality agreements with your employees and contractors having access to the Licensed Materials, or any derivatives thereof, and to diligently take steps to enforce such agreements in this respect.  TI agrees that industry standard employment agreements used in the normal course of your business shall satisfy the requirements of this section. TI may disclose your contact information to TI's licensors.
 *
 *  6.	Warranties and Limitations.  THE LICENSED MATERIALS ARE PROVIDED "AS IS".  FURTHERMORE, YOU ACKNOWLEDGE AND AGREE THAT THE LICENSED MATERIALS HAVE NOT BEEN TESTED OR CERTIFIED BY ANY GOVERNMENT AGENCY OR INDUSTRY REGULATORY ORGANIZATION OR ANY OTHER THIRD PARTY ORGANIZATION.  YOU AGREE THAT PRIOR TO USING, INCORPORATING OR DISTRIBUTING THE LICENSED MATERIALS, OR ANY DERIVATIVES THEREOF, IN OR WITH ANY COMMERCIAL PRODUCT THAT YOU WILL THOROUGHLY TEST THE PRODUCT AND THE FUNCTIONALITY OF THE LICENSED MATERIALS, OR ANY DERIVATIVES THEREOF, IN OR WITH THAT PRODUCT AND BE SOLELY RESPONSIBLE FOR ANY PROBLEMS OR FAILURES.
 *
 *  TI AND ITS LICENSORS MAKE NO WARRANTY OR REPRESENTATION, EITHER EXPRESS, IMPLIED OR STATUTORY, REGARDING THE LICENSED MATERIALS, INCLUDING BUT NOT LIMITED TO, ANY IMPLIED WARRANTIES OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE OR NON-INFRINGEMENT OF ANY THIRD PARTY PATENTS, COPYRIGHTS, TRADE SECRETS OR OTHER INTELLECTUAL PROPERTY RIGHTS.  YOU AGREE TO USE YOUR INDEPENDENT JUDGMENT IN DEVELOPING YOUR PRODUCTS.  NOTHING CONTAINED IN THIS AGREEMENT WILL BE CONSTRUED AS A WARRANTY OR REPRESENTATION BY TI TO MAINTAIN PRODUCTION OF ANY TI SEMICONDUCTOR DEVICE OR OTHER HARDWARE OR SOFTWARE WITH WHICH THE LICENSED MATERIALS, OR ANY DERIVATIVES THEREOF, MAY BE USED.
 *
 *  IN NO EVENT SHALL TI OR ITS LICENSORS, BE LIABLE FOR ANY SPECIAL, INDIRECT, INCIDENTAL, PUNITIVE OR CONSEQUENTIAL DAMAGES, HOWEVER CAUSED, ON ANY THEORY OF LIABILITY, IN CONNECTION WITH OR ARISING OUT OF THIS AGREEMENT OR THE USE OF THE LICENSED MATERIALS, OR ANY DERIVATIVES THEREOF, REGARDLESS OF WHETHER TI HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.  EXCLUDED DAMAGES INCLUDE, BUT ARE NOT LIMITED TO, COST OF REMOVAL OR REINSTALLATION, OUTSIDE COMPUTER TIME, LABOR COSTS, LOSS OF DATA, LOSS OF GOODWILL, LOSS OF PROFITS, LOSS OF SAVINGS, OR LOSS OF USE OR INTERRUPTION OF BUSINESS.  IN NO EVENT WILL TI'S OR ITS LICENSORS' AGGREGATE LIABILITY UNDER THIS AGREEMENT OR ARISING OUT OF YOUR USE OF THE LICENSED MATERIALS, OR ANY DERIVATIVES THEREOF, EXCEED THE GREATER OF FIVE HUNDRED U.S. DOLLARS (US$500) OR THE FEES PAID TO TI BY YOU FOR THE LICENSED MATERIALS UNDER THIS AGREEMENT.
 *
 *  	Because some jurisdictions do not allow the exclusion or limitation of incidental or consequential damages or limitation on how long an implied warranty lasts, the above limitations or exclusions may not apply to you.
 *
 *  7.	Indemnification Disclaimer.  YOU ACKNOWLEDGE AND AGREE THAT TI SHALL NOT BE LIABLE FOR AND SHALL NOT DEFEND OR INDEMNIFY YOU AGAINST ANY THIRD PARTY INFRINGEMENT CLAIM THAT RELATES TO OR IS BASED ON YOUR MANUFACTURE, USE, OR DISTRIBUTION OF THE LICENSED MATERIALS, OR ANY DERIVATIVES THEREOF, OR YOUR MANUFACTURE, USE, OFFER FOR SALE, SALE, IMPORTATION OR DISTRIBUTION OF YOUR PRODUCTS THAT INCLUDE OR INCORPORATE THE LICENSED MATERIALS, OR ANY DERIVATIVES THEREOF,.
 *
 *  8.	No Technical Support.  TI and its licensors are under no obligation to install, maintain or support the Licensed Materials, or any derivatives thereof.
 *
 *  9.	Notices.  All notices to TI hereunder shall be delivered to Texas Instruments Incorporated, 12500 TI Boulevard, Mail Station 8638, Dallas, Texas 75243, Attention: Contracts Manager, with a copy to Texas Instruments Incorporated, 13588 North Central Expressway, MS 3999, Dallas, TX 75243, 	Attention: Law Department - ASP.  All notices shall be deemed served when received by TI.
 *
 *  10.	Export Control.  You hereby acknowledge that the Licensed Materials are subject to export control under the U.S. Commerce Department's Export Administration Regulations ("EAR").  You further hereby acknowledge and agree that unless prior authorization is obtained from the U.S. Commerce Department, neither you nor your customers will export, re-export, or release, directly or indirectly, any technology, software, or software source code (as defined in Part 772 of the EAR), received from TI, or export, directly or indirectly, any direct product of such technology, software, or software source code (as defined in Part 734 of the EAR), to any destination or country to which the export, re-export, or release of the technology, software, or software source code, or direct product is prohibited by the EAR.  You agree that none of the Licensed Materials may be downloaded or otherwise exported or reexported (i) into (or to a national or resident of) Cuba, Iran, North Korea, Sudan and Syria or any other country the U.S. has embargoed goods; or (ii) to anyone on the U.S. Treasury Department's List of Specially Designated Nationals or the U.S. Commerce Department's Denied Persons List or Entity List.  You represent and warrant that you are not located in, under the control of, or a national or resident of any such country or on any such list and you will not use or transfer the Licensed Materials, or any derivatives thereof, for use in any sensitive nuclear, chemical or biological weapons, or missile technology end-uses unless authorized by the U.S. Government by regulation or specific license or for a military end-use in, or by any military entity of Albania, Armenia, Azerbaijan, Belarus, Cambodia, China, Georgia, Iraq, Kazakhstan, Kyrgyzstan, Laos, Libya, Macau, Moldova, Mongolia, Russia, Tajikistan, Turkmenistan, Ukraine, Uzbekistan, and Vietnam. Any software export classification made by TI shall be for TI's internal use only and shall not be construed as a representation or warranty regarding the proper export classification for such software or whether an export license or other documentation is required for the exportation of such software.
 *
 *  11.	Governing Law and Severability; Waiver.  This Agreement will be governed by and interpreted in accordance with the laws of the State of Texas, without reference to conflict of laws principles.  If for any reason a court of competent jurisdiction finds any provision of the Agreement to be unenforceable, that provision will be enforced to the maximum extent possible to effectuate the intent of the parties, and the remainder of the Agreement shall continue in full force and effect.  This Agreement shall not be governed by the United Nations Convention on Contracts for the International Sale of Goods, or by the Uniform Computer Information Transactions Act (UCITA).  The parties agree that non-exclusive jurisdiction for any dispute arising out of or relating to this Agreement lies within the courts located in the State of Texas.  Notwithstanding the foregoing, any judgment may be enforced in any United States or foreign court, and either party may seek injunctive relief in any United States or foreign court.  Failure by TI to enforce any provision of this Agreement shall not be deemed a waiver of future enforcement of that or any other provision in this Agreement or any other agreement that may be in place between the parties.
 *
 *  12.	PRC Provisions.  If you are located in the People's Republic of China ("PRC") or if the Licensed Materials, or any derivatives thereof, will be sent to the PRC, the following provisions shall apply and shall supersede any other provisions in this Agreement concerning the same subject matter:
 *
 *  	a.	Registration Requirements.  You shall be solely responsible for performing all acts and obtaining all approvals that may be required in connection with this Agreement by the government of the PRC, including but not limited to registering pursuant to, and otherwise complying with, the PRC Measures on the Administration of Software Products, Management Regulations on Technology Import-Export, and Technology Import and Export Contract Registration Management Rules.  Upon receipt of such approvals from the government authorities, you shall forward evidence of all such approvals to TI for its records.  In the event that you fail to obtain any such approval or registration, you shall be solely responsible for any and all losses, damages or costs resulting therefrom, and shall indemnify TI for all such losses, damages or costs.
 *
 *  b.	Governing Language.  This Agreement is written and executed in the English language.  If a translation of this Agreement is required for any purpose, including but not limited to registration of the Agreement pursuant to any governmental laws, regulations or rules, you shall be solely responsible for creating such translation.  Any translation of this Agreement into a language other than English is intended solely in order to comply with such laws or for reference purposes, and the English language version shall be authoritative and controlling.
 *
 *  c.	Export Control.
 *
 *  i.	Diversions of Technology.  You hereby agree that unless prior authorization is obtained from the U.S. Department of Commerce, neither you nor your subsidiaries or affiliates shall knowingly export, re-export, or release, directly or indirectly, any technology, software, or software source code (as defined in Part 772 of the Export Administration Regulations of the U.S. Department of Commerce ("EAR")), received from TI or any of its affiliated companies, or export, directly or indirectly, any direct product of such technology, software, or software source code (as defined in Part 734 of the EAR), to any destination or country to which the export, re-export, or release of the technology, software, software source code, or direct product is prohibited by the EAR.
 *
 *  ii.	Assurance of Compliance.  You understand and acknowledge that products, technology (regardless of the form in which it is provided), software or software source code, received from TI or any of its affiliates under this Agreement may be under export control of the United States or other countries.  You shall comply with the United States and other applicable non-U.S. laws and regulations governing the export, re-export and release of any products, technology, software, or software source code received under this Agreement from TI or its affiliates.  You shall not undertake any action that is prohibited by the EAR.  Without limiting the generality of the foregoing, you specifically agree that you shall not transfer or release products, technology, software, or software source code of TI or its affiliates to, or for use by, military end users or for use in military, missile, nuclear, biological, or chemical weapons end uses.
 *
 *  iii.  Licenses.  Each party shall secure at its own expense, such licenses and export and import documents as are necessary for each respective party to fulfill its obligations under this Agreement.  If such licenses or government approvals cannot be obtained, TI may terminate this Agreement, or shall otherwise be excused from the performance of any obligations it may have under this Agreement for which the licenses or government approvals are required.
 *
 *  13.	Entire Agreement.  This is the entire Agreement between you and TI and this Agreement supersedes any prior agreement between the parties related to the subject matter of this Agreement.  Notwithstanding the foregoing, any signed and effective software license agreement relating to the subject matter hereof and stating expressly that such agreement shall control regardless of any subsequent click-wrap, shrink-wrap or web-wrap, shall supersede the terms of this Agreement.  No amendment or modification of this Agreement will be effective unless in writing and signed by a duly authorized representative of TI.  You hereby warrant and represent that you have obtained all authorizations and other applicable consents required empowering you to enter into this Agreement.
 *
 * --/COPYRIGHT--*/
//  @file Rekam1.c
//  @brief this file contains all the required functions to send and receive
//  data using the UART module.

//  @author Leo Estevez - Texas Instruments, Inc
//  @date June 2013
//  @version 1.0 Initial version
//  @note Built with CCS5.3

#include "msp430g2553.h"
#include "HAL_Setup.h"
#include "BlueRadios_BLE.h"
#include "stdlib.h"
#include "string.h"

unsigned int Time = 0;
unsigned int Rate = 0;
int sleeptimer=0;
int pulsecounter=0;
#define     LED1                  BIT0
#define     LED2                  BIT6
#define     SERVO1                  BIT7
#define     LED_DIR               P1DIR
#define     LED_OUT               P1OUT
#define		SERVO_OUT			  P2OUT
#define     SERVO_DIR             P2DIR
#define     SERVO2                BIT5
#define     SERVO3                BIT4
#define     SERVO4                BIT3

#define     BUTTON                BIT3
#define     BUTTON_OUT            P1OUT
#define     BUTTON_DIR            P1DIR
#define     BUTTON_IN             P1IN
#define     BUTTON_IE             P1IE
#define     BUTTON_IES            P1IES
#define     BUTTON_IFG            P1IFG
#define     BUTTON_REN            P1REN

#define     TIMER_PWM_MODE        0
#define     TIMER_PWM_PERIOD      2000
#define     TIMER_PWM_OFFSET      20
#define     ADC_CHANNELS     2  //We will sample x channels
#define		TCP		0
#define		UDP		1

unsigned int samples[ADC_CHANNELS];
unsigned char timerMode = TIMER_PWM_MODE;
unsigned int capture = 0;
extern unsigned char LineBuffer[20];
int noflash;

int executor=1;
int a2dbuffersize=1;
int buffer6[1] = {1};
int sleepcounter=0;
int period=100; //100;
unsigned int quiet = 0;
unsigned int event = 0;
//int a2dbuffer1[1];
//int a2dbuffer2[1];
//int a2dbuffer3[1];
//int a2dbuffer4[1];
int a2dbuffer[6];
int bufferindex=0;
int a2devent1=0;
char pulse[12]={0};
int pulsecount=0;
int a2dperiod=1;
int a2dcounter=0;
int learn=0;
int lastsleepcounter;
// flash settings char pinmux[27] = {0, 1, 6, 3, 4, 6, 6, 13, 8, 9, 2, 2, 2, 2, 2, 15, 13, 13, 2, 2, 12, 12, 10, 17, 14, 20};
char pinmux[21] = {0, 1, 2, 3, 4, 5, 6, 6, 8, 9, 2, 2, 2, 2, 2, 15, 13, 13, 2, 2, 12};
int *Flash = (int*) 0xFA00;
int *Flash2 = (int*) 0xF600;
int *Flash3 = (int*) 0xF800;
//int *Flash4 = (int*) 0xFC00;
int *Flashwrite = (int*) 0xFC00;
//char SerialFlash = (char) 0x00;
char* SFlash=(char*) 0xF600;
//int threshold=0;
unsigned int flashpage=0;
int sockport=80;
char socktype[3]="TCP";
char sockip[15]="192.168.1.1";


void init_flash();

#define ENABLE_SPI_FLASH   P2OUT &= ~BIT2
#define DISABLE_SPI_FLASH  P2OUT |= BIT2
#define WRITE_ENABLE 		0x06
#define READ_STATUS_REG1	0X05
#define W25Q_INS_BLOCK_ERASE  0xd8
#define PAGE_PROGRAM 		0X02
#define READ_DATA    		0X03

/* reverse:  reverse string s in place */
 void reverse(char s[])
 {
     int i, j;
     char c;

     for (i = 0, j = strlen(s)-1; i<j; i++, j--) {
         c = s[i];
         s[i] = s[j];
         s[j] = c;
     }
 }

/* itoa:  convert n to characters in s */

 void itoa(int n, char s[])
 {
     int i, sign;

     if ((sign = n) < 0)  /* record sign */
     n = -n;          /* make n positive */
     i = 0;
     do {       /* generate digits in reverse order */
         s[i++] = n % 10 + '0';   /* get next digit */
     } while ((n /= 10) > 0);     /* delete it */
     if (sign < 0)
         s[i++] = '-';
     s[i] = '\0';
     reverse(s);
 }

void PUT(int *n, int *m, int *p, int *q) {
	n[0]=m[0];
	if(q[0]==9){
		pulsecounter=m[0];
	}
}

void PUTP(int *n, int *m, int *p, int *q) {
    char tx_string[7];

	if(pinmux[q[0]]==2){
		period=m[0];
		TA0CCR0 = period*32;
	}else if(pinmux[q[0]]==6){
		a2dperiod=m[0];
	}else if(pinmux[q[0]]==15){
		flashpage=m[0];
	}else if(pinmux[q[0]]==3){
		sockport=m[0];
		putnUART("putp 3 ",7);
		itoa(m[0], tx_string);
		putnUART(tx_string, strlen(tx_string));
    	putnUART("\n\r",2);
	}
}

void PUTADD(int *n, int *m, int *p, int *q) {
	n[0]=abs(n[0]+m[0]);
}

void GET(int *n, int *m, int *p, int *q) {
    char tx_string[7];
//    char tx_string2[7];
//    int j;
    int ii;



    if(pinmux[m[0]]==4){
					//Update Signal Strength
					putnUART("+++\r\n", 5);
					putnUART("+++\r\n", 5);
					capture=1;
					_delay_cycles(1000000);
					putnUART("ATRSSI?,0\r\n",11);
					_delay_cycles(8000000);
					for(ii=0;ii<7;ii++){
						tx_string[ii]=' ';
					}
					for(ii=0;ii<4;ii++){
						tx_string[ii]=LineBuffer[ii];
					}
					capture=0;
					putnUART("ATMD\r\n",6);
					_delay_cycles(1000000);
//					putnUART("ATMD\r\n",6);
					if(atoi(tx_string)!=0){
						n[0]=atoi(tx_string);
					}
			    	putnUART("\n\r",2);
					itoa(n[0], tx_string);
					putnUART(tx_string, strlen(tx_string));
			    	putnUART("\n\r",2);
    }else if(m[0]==23){
					//Update Signal Strength
/*					putnUART("+++\r\n", 5);
					capture=1;
					putnUART("ATRSSI?,2\r\n",11);
					_delay_cycles(2000000);
					for(ii=0;ii<7;ii++){
						tx_string[ii]=' ';
					}
					for(ii=0;ii<3;ii++){
						tx_string[ii]=LineBuffer[ii];
					}
					if(atoi(tx_string)!=0){
						n[0]=atoi(tx_string);
					}
					putnUART("ATRSSI?,0\r\n",11);
					_delay_cycles(2000000);
					for(ii=0;ii<7;ii++){
						tx_string[ii]=' ';
					}
					for(ii=0;ii<3;ii++){
						tx_string[ii]=LineBuffer[ii];
					}
					putnUART("ATRSSI?,3\r\n",11);
					_delay_cycles(2000000);
					for(ii=0;ii<7;ii++){
						tx_string2[ii]=' ';
					}
					for(ii=0;ii<3;ii++){
						tx_string2[ii]=LineBuffer[ii];
					}
					capture=0;
					putnUART("ATMD,1\r\n",8);
			    	putnUART(tx_string, strlen(tx_string));
			    	putnUART("\n\r",2);
			    	putnUART(tx_string2, strlen(tx_string2));
			    	putnUART("\n\r",2);
					itoa(n[0], tx_string);
					putnUART(tx_string, strlen(tx_string));
			    	putnUART("\n\r",2);*/
     }else if(m[0]==24){
/*					capture=1;
					putnUART("+++\r\n", 5);
					_delay_cycles(2000000);
					putnUART("ATMD,2\r\n",8);
					_delay_cycles(16000000);
					for(ii=0;ii<7;ii++){
						tx_string[ii]=LineBuffer[ii+6];
					}
					n[0]=atoi(tx_string);
					capture=0;
					putnUART("+++\r\n", 5);
					_delay_cycles(2000000);
					putnUART("ATMD,1\r\n",8);
					putnUART("\n\r",2);
					putnUART(tx_string, strlen(tx_string));
					putnUART("\n\r",2);
					itoa(n[0], tx_string);
					putnUART(tx_string, strlen(tx_string));
					putnUART("\n\r",2); */
    }else{
//    	    putnUART("\n\rput ",6);
//			itoa(m[0], tx_string);
//			putnUART(tx_string, strlen(tx_string));
//			putnUART(" ",1);
			itoa(n[0], tx_string);
			putnUART(tx_string, strlen(tx_string));
    		putnUART("\n",1);
    }
}

void ENDIF(int *n, int *m, int *p, int *q) {
//	n[0]=p[0];
	n[0]=1000;
}

void IFEQ(int *n, int *m, int *p, int *q) {
	if(n[0]==m[0]){
		if(p[0]==1000){
			p[0]=0;
		}else{
			p[0]=p[0]+1;
		}
	}
}
void IFGT(int *n, int *m, int *p, int *q) {
	if(n[0]>m[0]){
		if(p[0]==1000){
			p[0]=0;
		}else{
			p[0]=p[0]+1;
		}
	}
}

void IFLT(int *n, int *m, int *p, int *q) {
	if(n[0]<m[0]){
		if(p[0]==1000){
			p[0]=0;
		}else{
			p[0]=p[0]+1;
		}
	}
}

//Need to define IFAND and IFOR

void MAC(int *n, int *m, int *p, int *q) {
//	p[0]=0;
//	int ii;
//	for(ii=0;ii<10;ii++){
		p[0]=p[0]+(buffer6[0]*q[0])/m[0];
//	}
//	p[0]=p[0]/m[0];
}

void SLEEP(int *n, int *m, int *p, int *q) {
	sleepcounter = 0;
//	sleeptimer=m[0];
	while(sleepcounter<m[0]){
		sleeptimer++;
	}
}

void init_Seg(int *Flash_ptr){

	  FCTL1 = FWKEY + ERASE;                    // Set Erase bit
	  FCTL3 = FWKEY;                            // Clear Lock bit
	  *Flash_ptr = 0;                          // Dummy write to erase Flash segment D
	  FCTL3 = FWKEY + LOCK;                     // Set LOCK bit
}

void write_Seg(int* value, int *Flash_ptr)
{
  unsigned int i;

  FCTL3 = FWKEY;
  FCTL1 = FWKEY + WRT;                      // Set WRT bit for write operation
  for (i=0; i<12; i++)
  {
    *Flash_ptr++ = value[i];                   // Write value to flash
  }
  FCTL1 = FWKEY;                            // Clear WRT bit
  FCTL3 = FWKEY + LOCK;                     // Set LOCK bit
}

void TRANSFER(){
/*	unsigned char j;
	int ii;

    char FlashStatus_1 = 0xff;
if(!noflash){
    SFlash=(char*) 0xF600;
	for(j=0;j<6;j++){
	  	ENABLE_SPI_FLASH;
		UCB0TXBUF = WRITE_ENABLE;       //1st byte is the command byte to setup WRITE operation
		while ( (UCB0STAT & UCBUSY) );
		DISABLE_SPI_FLASH;

		ENABLE_SPI_FLASH;
		UCB0TXBUF = PAGE_PROGRAM;       //1st byte is the command byte to setup WRITE operation
		while ( (UCB0STAT & UCBUSY) );
		UCB0TXBUF = ((flashpage>>8) & 0x00FF);       //1st byte address
		while ( (UCB0STAT & UCBUSY) );
		UCB0TXBUF = j+(flashpage & 0x00FF);       //2nd byte address
		while ( (UCB0STAT & UCBUSY) );
		UCB0TXBUF = 0x00;       //3rd byte address
		while ( (UCB0STAT & UCBUSY) );
	//Write Flash
		for(ii=0;ii<256;ii++){
		UCB0TXBUF = *SFlash++;       //0xFA00 dump to Serial
		while ( (UCB0STAT & UCBUSY) );
		}
		DISABLE_SPI_FLASH;
		  FlashStatus_1 = 0xff;
		  //wait here until the flash programming is finished
		  while ((FlashStatus_1 & 0x01) == 0x01){
			  ENABLE_SPI_FLASH;
			  UCB0TXBUF = READ_STATUS_REG1;       //1st byte is the command byte to setup READ_STATUS operation
				while ( (UCB0STAT & UCBUSY) );
				UCB0TXBUF = 0x88;                //send a dummy byte to generate receiving clock
				while ( (UCB0STAT & UCBUSY) );   //wait until a byte has been received
				FlashStatus_1 = UCB0RXBUF;
			  DISABLE_SPI_FLASH;
		  }
	}
	flashpage=flashpage+6;
}
	init_Seg((int*)0xF600);
	init_Seg((int*)0xF800);
	init_Seg((int*)0xFA00);
*/
}

void WRITE() {
		Flash=(int*)0xFA00;
		Flash2=(int*)0xF600;
		Flash3=(int*)0xF800;
	    a2devent1=0;
}

#define CHIP_ERASE    	0X60

void UNWRITE(){

if(!noflash){
		ENABLE_SPI_FLASH;
		UCB0TXBUF = WRITE_ENABLE;       //1st byte is the command byte to setup WRITE operation
		while ( (UCB0STAT & UCBUSY) );
		DISABLE_SPI_FLASH;

	  /////////////////////////////////////
	  	ENABLE_SPI_FLASH;
		UCB0TXBUF = W25Q_INS_BLOCK_ERASE;       //1st byte is the command byte to setup WRITE operation
//	  	UCB0TXBUF = CHIP_ERASE;
	  	while ( (UCB0STAT & UCBUSY) );
		UCB0TXBUF = ((flashpage>>8) & 0x00FF);       //1st byte is the command byte to setup WRITE operation
		while ( (UCB0STAT & UCBUSY) );
		UCB0TXBUF = 0x00;       //1st byte is the command byte to setup WRITE operation
		while ( (UCB0STAT & UCBUSY) );
		UCB0TXBUF = 0x00;       //1st byte is the command byte to setup WRITE operation
		while ( (UCB0STAT & UCBUSY) );
	    DISABLE_SPI_FLASH;

	  //////////// read and check status REG1 ////////////////
	    char FlashStatus_1 = 0xff;

	  //wait here until the segment erasing is finished

	  while ((FlashStatus_1 & 0x01) == 0x01){
		  ENABLE_SPI_FLASH;
		  UCB0TXBUF = READ_STATUS_REG1;       //1st byte is the command byte to setup WRITE operation
		  while ( (UCB0STAT & UCBUSY) );
//		  send_byte_SPI_poll(READ_STATUS_REG1);
//		  FlashStatus_1 = receive_byte_SPI_poll();
			UCB0TXBUF = 0x88;                //send a dummy byte to generate receiving clock
			while ( (UCB0STAT & UCBUSY) );   //wait until a byte has been received
			FlashStatus_1 = UCB0RXBUF;
		  DISABLE_SPI_FLASH;
	  }
	    flashpage = flashpage + 256;
	    SFlash=(char*) 0xF600;
}
		init_Seg((int*)0xF600);
		init_Seg((int*)0xF800);
		init_Seg((int*)0xFA00);

//		init_Seg((int*)0xFC00);
}

void MOVE(int *n, int *m, int *p, int *q) {
    	char tx_string[12];
    	char tx_string2[7];
    	unsigned int j;
    	int *Flash_ptr;
    	char byte[2];
    	int ii;

        char FlashStatus_1 = 0xff;

    	if(q[0]==23){
/*			putnUART("+++\r\n", 5);
			putnUART("+++\r\n", 5);
        	putnUART("ATMD,0\r\n",8);
        	_delay_cycles(1000000);
			putnUART("\n\r",2);
			putnUART("put ",4);
			itoa(m[0], tx_string);
			putnUART(tx_string, strlen(tx_string));
			itoa(n[0], tx_string);
			putnUART(" ",1);
			putnUART(tx_string, strlen(tx_string));
			putnUART("\n",1);
			_delay_cycles(1000000);
			putnUART("+++\r\n", 5);
			putnUART("+++\r\n", 5);
        	putnUART("ATMD,2\r\n",8);
        	_delay_cycles(1000000);
			putnUART("\n\r",2);
			putnUART("put ",4);
			itoa(m[0], tx_string);
			putnUART(tx_string, strlen(tx_string));
			itoa(n[0], tx_string);
			putnUART(" ",1);
			putnUART(tx_string, strlen(tx_string));
			putnUART("\n",1);
			_delay_cycles(1000000);
			putnUART("+++\r\n", 5);
			putnUART("+++\r\n", 5);
        	putnUART("ATMD,1\r\n",8);
		}else if(q[0]==24){
			putnUART("+++\r\n", 5);
			putnUART("+++\r\n", 5);
        	putnUART("ATMD,2\r\n",8);
        	_delay_cycles(800000);
			putnUART("\n\r",2);
			putnUART("put ",4);
			itoa(m[0], tx_string);
			putnUART(tx_string, strlen(tx_string));
			itoa(n[0], tx_string);
			putnUART(" ",1);
			putnUART(tx_string, strlen(tx_string));
			putnUART("\n",1);
			_delay_cycles(800000);
			putnUART("+++\r\n", 5);
			putnUART("+++\r\n", 5);
        	putnUART("ATMD,1\r\n",8);*/
		}else if(q[0]==15){
			if(m[0]==6 || m[0]==5 || m[0]==2){
		    	if(!noflash){
		    		if(m[0]==6){
		    			SFlash=(char*) 0xF800;
		    		}else if(m[0]==5){
		    			SFlash=(char*) 0xF600;
		    		}else{
		    			SFlash=(char*) 0xFA00;
		    		}
		    		for(j=0;j<2;j++){
		    		  	ENABLE_SPI_FLASH;
		    			UCB0TXBUF = WRITE_ENABLE;       //1st byte is the command byte to setup WRITE operation
		    			while ( (UCB0STAT & UCBUSY) );
		    			DISABLE_SPI_FLASH;

		    			ENABLE_SPI_FLASH;
		    			UCB0TXBUF = PAGE_PROGRAM;       //1st byte is the command byte to setup WRITE operation
		    			while ( (UCB0STAT & UCBUSY) );
		    			UCB0TXBUF = ((flashpage>>8) & 0x00FF);       //1st byte address
		    			while ( (UCB0STAT & UCBUSY) );
		    			UCB0TXBUF = j+(flashpage & 0x00FF);       //2nd byte address
		    			while ( (UCB0STAT & UCBUSY) );
		    			UCB0TXBUF = 0x00;       //3rd byte address
		    			while ( (UCB0STAT & UCBUSY) );
		    		//Write Flash
		    			for(ii=0;ii<256;ii++){
		    			UCB0TXBUF = *SFlash++;       //0xFA00 dump to Serial
		    			while ( (UCB0STAT & UCBUSY) );
		    			}
		    			DISABLE_SPI_FLASH;
		    			  FlashStatus_1 = 0xff;
		    			  //wait here until the flash programming is finished
		    			  while ((FlashStatus_1 & 0x01) == 0x01){
		    				  ENABLE_SPI_FLASH;
		    				  UCB0TXBUF = READ_STATUS_REG1;       //1st byte is the command byte to setup READ_STATUS operation
		    					while ( (UCB0STAT & UCBUSY) );
		    					UCB0TXBUF = 0x88;                //send a dummy byte to generate receiving clock
		    					while ( (UCB0STAT & UCBUSY) );   //wait until a byte has been received
		    					FlashStatus_1 = UCB0RXBUF;
		    				  DISABLE_SPI_FLASH;
		    			  }
		    		}
		    		flashpage=flashpage+2;
		    	}
		    		init_Seg((int*)0xF600);
//		    		init_Seg((int*)0xF800);
//		    		init_Seg((int*)0xFA00);
			}
		}else if(q[0]==25 || q[0]==3 || q[0]==4){
			//read flash
			if(m[0]==5){
		    	putnUART("\n\rput 5",7);
		    	putnUART("\n\r",2);
		    	Flash_ptr= (int*)0xF600;
		    	for(j=0;j<256;j++){
					itoa(*Flash_ptr++, tx_string);
					putnUART(tx_string, strlen(tx_string));
					putnUART("\r\n",2);
		    	}
			}else if(m[0]==15){
				ENABLE_SPI_FLASH;
				UCB0TXBUF = READ_DATA;       //1st byte is the command byte to setup READ operation
				while ( (UCB0STAT & UCBUSY) );
				UCB0TXBUF = ((flashpage>>8) & 0x00FF);       //1st byte address
				while ( (UCB0STAT & UCBUSY) );
				UCB0TXBUF = (flashpage & 0x00FF);       //2nd byte address
				while ( (UCB0STAT & UCBUSY) );
				UCB0TXBUF = 0x00;       //3rd byte address
				while ( (UCB0STAT & UCBUSY) );
				putnUART("put 15", 6);
				putnUART("\n\r", 2);
				Flash_ptr=(int*) byte;
				for(j=0;j<128;j++){
					UCB0TXBUF = 0x88;                //send a dummy byte to generate receiving clock
					while ( (UCB0STAT & UCBUSY) );   //wait until a byte has been received
					byte[0] = UCB0RXBUF;
					UCB0TXBUF = 0x88;                //send a dummy byte to generate receiving clock
					while ( (UCB0STAT & UCBUSY) );   //wait until a byte has been received
					byte[1] = UCB0RXBUF;
					itoa(*Flash_ptr, tx_string);
					putnUART(tx_string, strlen(tx_string));
					putnUART("\r\n",2);
				}
				DISABLE_SPI_FLASH;
				flashpage=flashpage+1;
			}else if(m[0]==6){
//		    	putnUART("\n\rput 6",7);
//		    	putnUART("\n\r",2);
		    	Flash_ptr= (int*)0xF800;
		    	for(j=0;j<256;j++){
					itoa(*Flash_ptr++, tx_string);
					putnUART(tx_string, strlen(tx_string));
					putnUART("\n",1);
		    	}
			}else if(m[0]==2){
//		    	putnUART("\n\rput 2",7);
//		    	putnUART("\n\r",2);
		    	Flash_ptr= (int*)0xFA00;
		    	for(j=0;j<256;j++){
					itoa(*Flash_ptr++, tx_string);
					putnUART(tx_string, strlen(tx_string));
					putnUART("\n",1);
		    	}
			}else if(m[0]==7){
//		    	putnUART("\n\rput 7",7);
//		    	putnUART("\n\r",2);
		    	Flash_ptr= (int*)0xFA00;
		    	for(j=0;j<256;j++){
					itoa(*Flash_ptr++, tx_string);
					putnUART(tx_string, strlen(tx_string));
					putnUART("\n",1);
		    	}
			}else{
				itoa(m[0], tx_string2);
				strcpy(tx_string, "put ");
				strcat(tx_string, tx_string2);
				itoa(n[0], tx_string2);
				strcat(tx_string, " ");
				strcat(tx_string, tx_string2);
				putnUART(tx_string, strlen(tx_string));
			}
//			putnUART("\n\r",2);
		}else{
			p[0]=n[0];
		}
}

void MOVEJ(int *n, int *m, int *p, int *q) {
	char tx_string[12];
	unsigned int j;
	int *Flash_ptr;
	int ii;

	if(q[0]==3 || q[0]==4){
		if(m[0]==6){
//			putnUART("\n\r['Time', 'Pin 6'],",20);
			Flash_ptr= (int*)0xF800;
			*Flash_ptr++;
			for(ii=0;ii<16;ii++){
				for(j=0;j<16;j++){
					if(!((j==15)&&(ii==15))){
						putnUART("\r\n[",3);
						itoa(((ii*16)+j), tx_string);
						putnUART(tx_string, strlen(tx_string));
						putnUART(",",1);
						itoa(*Flash_ptr++, tx_string);
						putnUART(tx_string, strlen(tx_string));
						putnUART("],",2);
					}
				}
				_delay_cycles(800000);
			}
		}
	}
}

void InitializeButton(void)                 // Configure Push Button
{
  BUTTON_DIR &= ~BUTTON;
  BUTTON_OUT |= BUTTON;
  BUTTON_REN |= BUTTON;
  BUTTON_IES |= BUTTON;
  BUTTON_IFG &= ~BUTTON;
  BUTTON_IE |= BUTTON;
}

void ConfigureAdc(void) {
// flash settings ADC10CTL1 = INCH_4 + ADC10DIV_0 + CONSEQ_3 + SHS_0;   //Multi-channel repeated conversion starting from channel 5
ADC10CTL1 = INCH_5 + ADC10DIV_0 + CONSEQ_3 + SHS_0;
ADC10CTL0 = SREF_0 + ADC10SHT_2 + MSC + ADC10ON + ADC10IE;
// flash settings ADC10AE0 = BIT4 + BIT3 + BIT0;
ADC10AE0 = BIT4 + BIT5;
ADC10DTC1 = ADC_CHANNELS;
}

void ConfigureTimerPwm(void)
{
  TA0CCR0 = period*32;                              //
  TA0CTL = TASSEL_2 + MC_1;                  // TACLK = SMCLK, Up mode.
  TA0CCTL0 = 0x10;
}

void OK(void){
	if(!quiet){
	putnUART("\n\rOK\n", 5);}
}

#define statements 20

void main(void) {

    int ii;
    int kk;
    char buff1[2];
    char buff2[7];
    char buff[20];
    char pin_string[4];
    int buffer6size=0;
    unsigned int numberofstatements=1;
    int tempvalue[1];
    int divisor=1;
    unsigned int statementnumber=1;
    unsigned int statementnumb;
    int symbol[21] = {0,0,0,0,0,0,0,0,0,0,0,0,90,0,0,0,0,0,0,0,0};
    char tx_string[7];
    int state[statements];
    void (*functionPtrArray[statements])( int*, int*, int*, int* );
    unsigned int symbolindex[statements][2];
    int value[statements][1];



    symbol[0]=1000;
    symbol[1]=1000;
//    symbol[12]=1;


//    P1SEL |= BIT5;

//    LED_DIR |= BIT0;//  + LED2;// + BIT4 + BIT5 + BIT7;
//    LED_OUT &= ~(BIT0);//  + LED2);// + BIT4 + BIT5 + BIT7);


  WDTCTL = WDTPW + WDTHOLD;                 // Stop WDT
  HAL_Clock_Setup();
  __bis_SR_register(GIE);

//  init_flash();
  noflash=1;
  if(noflash){
	  P1SEL    =  BIT1 + BIT2 + BIT4 + BIT5;
	  P1SEL2   =  BIT1 + BIT2 + BIT5;

	  P2DIR |=  BIT2 + BIT3 + BIT4 + BIT5 + BIT6 + BIT7;
	  P2OUT &= ~(BIT2 + BIT3 + BIT4 + BIT5 + BIT6 + BIT7);
	  P2OUT = 0;                                // All P2.x reset
	  P2SEL &= ~(BIT6 + BIT7);
	  P2SEL2 &= ~(BIT6 + BIT7);
  	LED_DIR |= BIT0 + BIT6 + BIT7;
  	LED_OUT &= ~(BIT0 + BIT6 + BIT7);
  	pinmux[14]=2;
  	pinmux[15]=2;
  	pinmux[5]=5;
  }else{
	    P2DIR |=  BIT3 + BIT4 + BIT5;// + BIT6 + BIT7;
	    P2OUT &= ~(BIT3 + BIT4 + BIT5 + BIT6 + BIT7);
  }
//  UNWRITE();
//  HAL_Port_Setup();
  InitUART();

  putnUART("+++\r\n", 5);
	capture=1;
	  putnUART("AT\r\n", 4);
	_delay_cycles(1000000);
	putnUART("ATMD\r\n", 6);
	capture=0;
	if(LineBuffer[0]!='O'){
		    UCA0BR0 = 130;     // defines baudrate CSR/USB
		    UCA0BR1 = 6;  // defines baudrate CSR/USB
		    UCA0MCTL =  UCBRF_0 + UCBRS_6; //CSR/USB
	}

//	putnUART("ATMD\r\n", 6);
	//  putnUART("ATSP,2,0,0\r\n", 12);


	  FCTL2 = FWKEY + FSSEL0 + FN5;             // MCLK/3 for Flash Timing Generator
if(noflash){
	  InitializeButton();
}
	  ConfigureTimerPwm();
	  ConfigureAdc();

  Flashwrite=(int*)0xFC00;
	  for(ii=0;ii<statements;ii++){
		  state[ii] = *Flashwrite++;
		  symbolindex[ii][0] = *Flashwrite++;
		  symbolindex[ii][1] = *Flashwrite++;
		  value[ii][0] = *Flashwrite++;
		  value[ii][0] = *Flashwrite++;
		  functionPtrArray[ii] = (void*) *Flashwrite++;
			itoa(state[ii], tx_string);
			putnUART("\n\r",2);
			putnUART(tx_string, strlen(tx_string));
			putnUART("\n\r",2);
	  }

	numberofstatements = *Flashwrite++;



	itoa(numberofstatements, tx_string);
	putnUART("\n\r",2);
	putnUART(tx_string, strlen(tx_string));
	putnUART("\n\r",2);
	if(state[1]!=1000){
		numberofstatements=1;
	}

//Interpreter - this translates a number of single line statements into an array of symbols, values, and function codes that can
//be quickly executed. Additional lines for a given state may be received and interpreted and will supersede any previous lines.
// Symbol with index 0 is reserved for STATE, Symbols 1-20 are reserved for relevant pins(as PIO or ADC)
// This will become the Rx Service Handler - whenever a command line is received, it will either be executed or stored
// depending on whether the executor is running (executor running = execute, executor stopped = store)

//    putnUART("+++\r\n", 5);
//    putnUART("ATSP,2,0,0\r\n", 12);
//    putnUART("ATMD\r\n", 6);

while(1){

	__bis_SR_register(LPM0_bits + GIE);     //       // Enter LPM0, interrupts enabled

	  //Events
	if(pinmux[5]==5){
	  symbol[5]=event;
	}

	  //Simple ms timer
	  symbol[8]++;
	  if(symbol[8]>32000){
		  symbol[8]=0;
	  }
      symbol[9]=pulsecounter;
      symbol[6]=a2dbuffer[2];
      symbol[7]=a2dbuffer[0];

		//PWM Output
	    pulse[0]=symbol[2];
	    pulse[1]=symbol[12];
	    pulse[2]=symbol[13];
	    pulse[3]=symbol[14];
	    pulse[4]=symbol[15];
	    pulse[5]=symbol[18];
	    pulse[6]=symbol[19];
	    pulse[7]=symbol[6];
	    pulse[8]=symbol[7];
	    pulse[9]=symbol[10];
	    pulse[10]=symbol[11];


/*	    if(threshold==1){
	    	symbol[14]=101;
	    }*/

		 //Executor - this uses the arrays of interpreted statements to execute C functions for a given state
		 //The executor will sleep until an event is triggered (Rx, new acquisition, change in pin state, etc.)
		 	if(executor&a2devent1){
		 		for(statementnumb=1;statementnumb<numberofstatements;statementnumb++){
					a2devent1=0;
					//Events & Input
					if(pinmux[5]==5){
					  symbol[5]=event;
					}
					ii=0;
				    pulse[0]=symbol[2];
				    pulse[1]=symbol[12];
				    pulse[2]=symbol[13];
				    pulse[3]=symbol[14];
				    pulse[4]=symbol[15];
				    pulse[5]=symbol[18];
				    pulse[6]=symbol[19];
				    pulse[7]=symbol[6];
				    pulse[8]=symbol[7];
				    pulse[9]=symbol[10];
				    pulse[10]=symbol[11];
			 		ii=0;

		 			if((state[statementnumb]==symbol[0])||state[statementnumb]==1000){
									(*functionPtrArray[statementnumb])(&symbol[symbolindex[statementnumb][0]], &value[statementnumb][0], &symbol[symbolindex[statementnumb][1]], &value[statementnumb][1]);

									//PWM Output
						if(symbolindex[statementnumb][0]==5){
							event=0;
						}
		 			}
		 			if(noflash){
		 				symbol[7]=a2dbuffer[0];
		 				symbol[6]=a2dbuffer[2];
		 			}else{
						for(kk=2;kk<20;kk++){
							if(pinmux[kk]==6){
								symbol[kk]=a2dbuffer[ii];
								ii++;
							}
						}
		 			}

		 		}

		 	}

//BLE Interpreter

	if(bUARTDataReceived_event){
		bUARTDataReceived_event=0;
		for(ii=0;ii<20;ii++){
			buff[ii]=LineBuffer[ii];
			LineBuffer[ii]=' ';
		}

		if(!strncmp(buff,"do",2)){
			learn=0;
			executor=1;
			symbol[0]=1000;
			OK();
		}

		if(!strncmp(buff,"movej",5)){
			OK();
			for(ii=0;ii<3;ii++){
				buff1[ii]=buff[ii+6];
			}
			for(ii=0;ii<6;ii++){
				buff2[ii]=buff[ii+8];
			}
			value[statementnumber][0]=atoi(buff1);
			value[statementnumber][1]=atoi(buff2);
			symbolindex[statementnumber][0]=atoi(buff1);
			symbolindex[statementnumber][1]=atoi(buff2);
	    	if(executor){
					MOVEJ(&symbol[symbolindex[statementnumber][0]], &value[statementnumber][0], &symbol[symbolindex[statementnumber][1]], &value[statementnumber][1]);
	/*    	}else{
		    		state[statementnumber]=symbol[0];
		    		functionPtrArray[statementnumber] = MOVEJ;
		    		statementnumber++;
		    		numberofstatements++;*/
	    	}
		}

	if(!strncmp(buff,"move ",5)){
		OK();
		for(ii=0;ii<3;ii++){
			buff1[ii]=buff[ii+5];
		}
		for(ii=0;ii<6;ii++){
			buff2[ii]=buff[ii+7];
		}
		value[statementnumber][0]=atoi(buff1);
		value[statementnumber][1]=atoi(buff2);
		symbolindex[statementnumber][0]=atoi(buff1);
		symbolindex[statementnumber][1]=atoi(buff2);
    	if(executor){
				MOVE(&symbol[symbolindex[statementnumber][0]], &value[statementnumber][0], &symbol[symbolindex[statementnumber][1]], &value[statementnumber][1]);
    	}else{
	    		state[statementnumber]=symbol[0];
	    		functionPtrArray[statementnumber] = MOVE;
	    		statementnumber++;
	    		numberofstatements++;
    	}
	}



    if(!strncmp(buff,"endif",5)){
    	OK();
    	if(executor){
    		ENDIF(&symbol[0], 0, &symbol[1], 0);
    		state[statementnumber]=1000;
    	}else{
//    		state[statementnumber]=symbol[0];
    		state[statementnumber]=1000;
			symbolindex[statementnumber][0] = 0;
			symbolindex[statementnumber][1] = 1;
			symbol[0]=symbol[1];
    		functionPtrArray[statementnumber] = ENDIF;
    		statementnumber++;
    		numberofstatements++;
    	}
    }

    if(!strncmp(buff,"learn",5)){
    	OK();
    	learn=1;
       	executor=0;
       	sleepcounter=0;
       	lastsleepcounter=0;
    }

/*    if(!strncmp(buff,"stop",4)){
    	OK();
       	executor=0;
        ii=0;
		for(kk=2;kk<20;kk++){
			if(pinmux[kk]==2){
				symbol[kk]=0;
				pulse[ii]=symbol[kk];
				ii++;
			}
		}
		putnUART("+++\r\n", 5);
		putnUART("+++\r\n", 5);
		_delay_cycles(1000000);
		putnUART("ATDH,0\r\n", 8);
		putnUART("ATDH,2\r\n", 8);
		_delay_cycles(1000000);
		putnUART("ATMD,1\r\n", 8);
    }
*/
    if(!strncmp(buff,"sleep",5)){
		for(ii=0;ii<6;ii++){
			buff1[ii]=buff[ii+6];
		}
/*    	for(ii=0;ii<6;ii++){
			buff2[ii]=buff[ii+8];
		}*/
		tempvalue[0]=atoi(buff1);
		if(executor){
			SLEEP(&symbol[0], &tempvalue[0], &symbol[1], 0);
	   	}else{
	    		state[statementnumber]=symbol[0];
	    		value[statementnumber][0]=tempvalue[0];
				symbolindex[statementnumber][0] = atoi(buff1);
				symbolindex[statementnumber][1] = atoi(buff1);
	    		functionPtrArray[statementnumber] = SLEEP;
	    		statementnumber++;
	    		numberofstatements++;
	    	}
    	OK();
    }

    if(!strncmp(buff,"mac",3)){
    	OK();
		for(ii=0;ii<3;ii++){
			buff1[ii]=buff[ii+3];}
/*		for(ii=0;ii<6;ii++){
			buff2[ii]=buff[ii+5];} */
		if(executor){
//			symbol[15]=a2dbuffer1[0];// pin 15
				symbol[6]=a2dbuffer[0];// pin 6
				symbol[7]=a2dbuffer[1];// pin 7
			MAC(&symbol[6], &divisor, &symbol[20], &symbol[atoi(buff1)]);
			a2devent1=0;
/*			if(atoi(buff1)==6){
				MAC(&symbol[6], &divisor, &symbol[21], &a2dbuffer2[0]);
				a2devent1=0;
			}else if(atoi(buff1)==7){
				MAC(&symbol[6], &divisor, &symbol[21], &a2dbuffer1[0]);
				a2devent1=0;
			}*/
    	}else{
	   		state[statementnumber]=symbol[0];
			symbolindex[statementnumber][0] = 6;
			symbolindex[statementnumb][1] = 20;
			value[statementnumber][0] = divisor;
    		functionPtrArray[statementnumber] = MAC;
    		statementnumber++;
    		numberofstatements++;
    	}
    }

    if(!strncmp(buff,"quiet",5)){
    	quiet=1;
    }

    if(!strncmp(buff,"write",5)){
		for(ii=0;ii<3;ii++){
			buff1[ii]=buff[ii+5];}
		if(executor){
			if(atoi(buff1)==0){
				init_Seg((int*)0xFC00);
				Flashwrite=(int*)0xFC00;
				  FCTL3 = FWKEY;
				  FCTL1 = FWKEY + WRT;                      // Set WRT bit for write operation
				  for(ii=0;ii<statements;ii++){
					  *Flashwrite++ = state[ii];
					  *Flashwrite++ = symbolindex[ii][0];
					  *Flashwrite++ = symbolindex[ii][1];
					  *Flashwrite++ = value[ii][0];
					  *Flashwrite++ = value[ii][0];
					  *Flashwrite++ = (int) functionPtrArray[ii];
				  }
				  *Flashwrite++ = numberofstatements;
				  FCTL1 = FWKEY;                            // Clear WRT bit
				  FCTL3 = FWKEY + LOCK;                     // Set LOCK bit
			}else{
				WRITE();
			}
		}else{
    		state[statementnumber]=symbol[0];
//    		value[statementnumber][0]=tempvalue[0];
//			symbolindex[statementnumber][0] = atoi(buff1);
//			symbolindex[statementnumber][1] = atoi(buff1);
    		functionPtrArray[statementnumber] = WRITE;
    		statementnumber++;
    		numberofstatements++;
		}
		  OK();
    }

    if(!strncmp(buff,"erase",5)){
		if(executor){
			UNWRITE();
		}else{
    		state[statementnumber]=symbol[0];
//    		value[statementnumber][0]=tempvalue[0];
//			symbolindex[statementnumber][0] = atoi(buff1);
//			symbolindex[statementnumber][1] = atoi(buff1);
    		functionPtrArray[statementnumber] = UNWRITE;
    		statementnumber++;
    		numberofstatements++;
		}
		  OK();
    }

    if(!strncmp(buff,"read",4)){
    	OK();
    	executor=0;
    	statementnumber=1;
    	numberofstatements=1;
    }

    if(!strncmp(buff,"? ",2)){
		for(ii=0;ii<3;ii++){
			buff1[ii]=buff[ii+2];
		}
		putnUART("\n",1);
		switch(pinmux[atoi(buff1)]){
			case 0:
				putnUART(" CURRENT STATE\r", 15);
				break;
			case 1:
				putnUART(" PREVIOUS STATE-VCC\r", 20);
			break;
			case 2:
				putnUART(" PULSED OUTPUT (p)eriod\r", 24);
			break;
			case 3:
				putnUART(" SOCKET/UART (i)p (p)ort (t)ype\r", 32);
			break;
			case 4:
				putnUART(" BLUETOOTH/UART (m)ac\r", 22);
			break;
			case 5:
				putnUART(" INPUT EVENT(BUTTON)\r", 21);
				break;
			case 6:
				putnUART(" ANALOG INPUT (p)eriod (j)avascript\r", 36);
			break;
			case 7:
				putnUART(" ANALOG INPUT (p)eriod\r", 23);
			break;
			case 8:
				putnUART(" LOOP COUNTER\r", 15);
			break;
			case 9:
				putnUART(" PULSE COUNTER\r", 15);
			break;
			case 10:
				putnUART(" MAC BUFFER\r", 12);
			break;
			case 11:
				putnUART(" MESSAGE\r", 9);
			break;
			case 12:
				putnUART(" MAC OUTPUT (d)ivisor\r", 13);
			break;
			case 13:
				putnUART(" SYMBOL\r", 8);
			break;
			case 14:
				putnUART(" SENSOR\r", 8);
			break;
			case 15:
				putnUART(" FLASH (p)age\r", 14);
			break;
			case 16:
				putnUART(" HOST\r", 6);
			break;
			case 17:
				putnUART(" SWARM\r", 7);
			break;
			case 18:
				putnUART(" ZIGBEE SWARM\r", 14);
			break;
			case 19:
				putnUART(" NO CONNECT\r", 12);
			break;
			case 20:
				putnUART(" HOST\r", 6);
			break;
		}
		putnUART("\n",1);
    }

    if(!strncmp(buff,"?",1)){
    	for(kk=0;kk<21;kk++){
    		_delay_cycles(1000000);
    		putnUART("\nPIN ",4);
    		itoa(kk, pin_string);
    		putnUART(pin_string, 2);
    		switch(pinmux[kk]){
				case 0:
					putnUART(" CURRENT STATE\r", 15);
					break;
				case 1:
					putnUART(" PREVIOUS STATE-VCC\r", 20);
				break;
				case 2:
					putnUART(" PULSED OUTPUT (p)eriod\r", 24);
				break;
				case 3:
					putnUART(" SOCKET/UART (i)p (p)ort (t)ype\r", 32);
				break;
				case 4:
					putnUART(" BLUETOOTH/UART (m)ac\r", 22);
				break;
				case 5:
					putnUART(" INPUT EVENT(BUTTON)\r", 21);
					break;
				case 6:
					putnUART(" ANALOG INPUT (p)eriod (j)avascript\r", 36);
				break;
				case 7:
					putnUART(" ANALOG INPUT (p)eriod\r", 23);
				break;
				case 8:
					putnUART(" LOOP COUNTER\r", 15);
				break;
				case 9:
					putnUART(" PULSE COUNTER\r", 15);
				break;
				case 10:
					putnUART(" MAC BUFFER\r", 12);
				break;
				case 11:
					putnUART(" MESSAGE\r", 9);
				break;
				case 12:
					putnUART(" MAC OUTPUT (d)ivisor\r", 22);
				break;
				case 13:
					putnUART(" SYMBOL\r", 8);
				break;
				case 14:
					putnUART(" SENSOR\r", 8);
				break;
				case 15:
					putnUART(" FLASH (p)age\r", 14);
				break;
				case 16:
					putnUART(" HOST\r", 6);
				break;
				case 17:
					putnUART(" SWARM\r", 7);
				break;
				case 18:
					putnUART(" ZIGBEE SWARM\r", 14);
				break;
				case 19:
					putnUART(" NO CONNECT\r", 12);
				break;
				case 20:
					putnUART(" HOST\r", 6);
				break;
    		}
    	}
    	putnUART("\nJ1.1 = PIN1\r", 13);
    	putnUART("\nJ2.1 = PIN20\r", 14);
    	putnUART("\nmodes: read learn do quiet sleep\n\roperators: get put ifg/l/e endif mac move\r\n", 78);
    }

    if(!strncmp(buff,"getp",4)){
		for(ii=0;ii<3;ii++){
			buff1[ii]=buff[ii+5];
		}
		putnUART("\n\r", 2);
		putnUART("putp ", 5);
		if(pinmux[atoi(buff1)]==2){
			putnUART("2 ", 2);
			itoa(period,buff2);
			putnUART(buff2, strlen(buff2));
			putnUART("\n\r", 2);
		}
		if(pinmux[atoi(buff1)]==6){
			putnUART("6 ", 2);
			itoa(a2dperiod,buff2);
			putnUART(buff2, strlen(buff2));
			putnUART("\n\r", 2);
		}
		if(pinmux[atoi(buff1)]==15){
			putnUART("15 ", 3);
			itoa(flashpage,buff2);
			putnUART(buff2, strlen(buff2));
			putnUART("\n\r", 2);
		}
		if(pinmux[atoi(buff1)]==3){
			putnUART("3 ", 2);
			itoa(sockport,buff2);
			putnUART(buff2, strlen(buff2));
			putnUART("\n\r", 2);
		}
    }

    if(!strncmp(buff,"geti",4)){
		for(ii=0;ii<3;ii++){
			buff1[ii]=buff[ii+5];
		}
		putnUART("\n\r", 2);
		putnUART("puti ", 5);
		if(pinmux[atoi(buff1)]==3){
			putnUART("3 ", 2);
			putnUART(sockip,15);
			putnUART("\n\r", 2);
		}
    }

    if(!strncmp(buff,"gett",4)){
		for(ii=0;ii<3;ii++){
			buff1[ii]=buff[ii+5];
		}
		putnUART("\n\r", 2);
		putnUART("putt ", 5);
		if(pinmux[atoi(buff1)]==3){
			putnUART("3 ", 2);
			putnUART(socktype,3);
			putnUART("\n\r", 2);
		}
    }

    if(!strncmp(buff,"getd",4)){
		for(ii=0;ii<3;ii++){
			buff1[ii]=buff[ii+5];
		}
		putnUART("\n\r", 2);
		putnUART("putd ", 5);
		if(pinmux[atoi(buff1)]==12){
			putnUART("2 ", 2);
			itoa(divisor,buff2);
			putnUART(buff2, strlen(buff2));
			putnUART("\n\r", 2);
		}
    }

    if(!strncmp(buff,"get ",4)){

		for(ii=0;ii<3;ii++){
			buff1[ii]=buff[ii+3];
		}
		for(ii=0;ii<6;ii++){
			buff2[ii]=buff[ii+5];
		}
		tempvalue[0]=atoi(buff1);
		if(executor){

				GET(&symbol[tempvalue[0]], &tempvalue[0], &symbol[0], &symbol[0]);
				a2devent1=0;
//			}
			if(atoi(buff1)==5){
				event=0;
			}
		}else{
			functionPtrArray[statementnumber] = GET;
			state[statementnumber]=symbol[0];
			symbolindex[statementnumber][0] = tempvalue[0];
			symbolindex[statementnumber][0] = tempvalue[0];
			value[statementnumber][0] = tempvalue[0];
			value[statementnumber][1] = tempvalue[0];
			statementnumber++;
			numberofstatements++;
			OK();
		}

    }

    if(!strncmp(buff,"putp",4)){
    	OK();
		for(ii=0;ii<3;ii++){
			buff1[ii]=buff[ii+5];
		}
		for(ii=0;ii<7;ii++){
			buff2[ii]=buff[ii+7];
		}
		tempvalue[0]=atoi(buff2);
		state[statementnumber]=symbol[0];
		symbolindex[statementnumber][0] = atoi(buff1);
		symbolindex[statementnumber][1] = atoi(buff1);
		value[statementnumber][0] = atoi(buff2);
		value[statementnumber][1]=atoi(buff1);
		if(executor){
				PUTP(&symbol[symbolindex[statementnumber][0]],&value[statementnumber][0],&symbol[symbolindex[statementnumber][1]],&value[statementnumber][1]);
		}else{
    		functionPtrArray[statementnumber] = PUTP;
    		statementnumber++;
    		numberofstatements++;
		}
    }

    if(!strncmp(buff,"putt",4)){
    	OK();
		for(ii=0;ii<3;ii++){
			buff1[ii]=buff[ii+5];
		}
		for(ii=0;ii<7;ii++){
			buff2[ii]=buff[ii+7];
		}
		if(pinmux[atoi(buff1)]==3){
			for(ii=0;ii<3;ii++){
				socktype[ii]=buff2[ii];
			}
		}
    }

    if(!strncmp(buff,"puti",4)){
    	OK();
		for(ii=0;ii<3;ii++){
			buff1[ii]=buff[ii+5];
		}
		for(ii=0;ii<15;ii++){
			buff2[ii]=buff[ii+7];
		}
		if(pinmux[atoi(buff1)]==3){
			for(ii=0;ii<15;ii++){
				sockip[ii]=buff2[ii];
			}
		}
    }

    if(!strncmp(buff,"putd",4)){
    	OK();
		for(ii=0;ii<3;ii++){
			buff1[ii]=buff[ii+5];
		}
		for(ii=0;ii<7;ii++){
			buff2[ii]=buff[ii+7];
		}
		tempvalue[0]=atoi(buff2);
		if(pinmux[atoi(buff1)]==12){
			divisor=tempvalue[0];
		}
    }

//See if this statement is setting the value of a symbol for execution and load this setting for execution within the current state.
    if(!strncmp(buff,"put ",4)){
    	OK();
		for(ii=0;ii<3;ii++){
			buff1[ii]=buff[ii+4];
		}
		for(ii=0;ii<7;ii++){
			buff2[ii]=buff[ii+6];
		}
		tempvalue[0]=atoi(buff2);
		state[statementnumber]=symbol[0];
		symbolindex[statementnumber][0] = atoi(buff1);
		symbolindex[statementnumber][1] = atoi(buff1);
		value[statementnumber][0] = atoi(buff2);
		value[statementnumber][1]=atoi(buff1);
		if(executor){
/*			if(atoi(buff1)==11){
				for(ii=0;ii<10;ii++){
					message[ii]=buff[ii+6];
				} */
			if(pinmux[atoi(buff1)]==17){
				for(ii=0;ii<6;ii++){
					buff2[ii]=buff2[ii+1];
				}
				putnUART("+++\r\n", 5);
				putnUART("+++\r\n", 5);
				putnUART("ATDMLE,ECFE7E",13);
				putnUART(buff2,6);
				putnUART(",0\r\n", 4);
            	_delay_cycles(2000000);
				putnUART("+++\r\n", 5);
				putnUART("+++\r\n", 5);
            	putnUART("ATMD,1\r\n",8);
			}else if(pinmux[atoi(buff1)]==10){
				buffer6size=buffer6size+1;
				for(ii=buffer6size;ii>-1;ii--){
					buffer6[ii+1]=buffer6[ii];
				}
				buffer6[0]=tempvalue[0];
            }else if(pinmux[atoi(buff1)]==19){
            	pinmux[atoi(buff1)]=20;
			}else{
				if(buff2[0]=='+'){
					PUTADD(&symbol[symbolindex[statementnumber][0]],&value[statementnumber][0],&symbol[symbolindex[statementnumber][1]],&value[statementnumber][1]);
				}else if(buff2[0]=='-'){
					PUTADD(&symbol[symbolindex[statementnumber][0]],&value[statementnumber][0],&symbol[symbolindex[statementnumber][1]],&value[statementnumber][1]);
				}else{
					PUT(&symbol[symbolindex[statementnumber][0]],&value[statementnumber][0],&symbol[symbolindex[statementnumber][1]],&value[statementnumber][1]);
				}
			}
		}else{
			if(learn){
	    		state[statementnumber]=symbol[0];
	    		value[statementnumber][0]=sleepcounter-lastsleepcounter;
				symbolindex[statementnumber][0] = atoi(buff1);
				symbolindex[statementnumber][1] = atoi(buff2);
	    		functionPtrArray[statementnumber] = SLEEP;
	    		statementnumber++;
	    		numberofstatements++;
	    		lastsleepcounter=sleepcounter;
				if(buff2[0]=='+'){
					PUTADD(&symbol[atoi(buff1)], &tempvalue[0], &symbol[0], &symbol[0]);
				}else if(buff2[0]=='-'){
					PUTADD(&symbol[atoi(buff1)], &tempvalue[0], &symbol[0], &symbol[0]);
				}else{
				    PUT(&symbol[atoi(buff1)], &tempvalue[0], &symbol[0], &symbol[0]);
				}
			}
			if(buff2[0]=='+'){
				functionPtrArray[statementnumber] = PUTADD;
			}else if(buff2[0]=='-'){
				functionPtrArray[statementnumber] = PUTADD;
			}else{
				functionPtrArray[statementnumber] = PUT;
			}
			statementnumber++;
			numberofstatements++;
		}
    }

//See if this statement is a condition(=,>,<) and load this condition for execution within the current state.

    if(!strncmp(buff,"if",2)){
    	OK();
		for(ii=0;ii<3;ii++){
			buff1[ii]=buff[ii+4];
		}
		for(ii=0;ii<6;ii++){
			buff2[ii]=buff[ii+6];
		}
		if(executor){
			tempvalue[0]=atoi(buff2);
			if(!strncmp(buff,"ife",3)){
				IFEQ(&symbol[atoi(buff1)], &tempvalue[0], &symbol[atoi(buff1)], &symbol[0]);
			}
			if(!strncmp(buff,"ifg",3)){
				IFGT(&symbol[atoi(buff1)], &tempvalue[0], &symbol[atoi(buff1)], &symbol[0]);
			}
			if(!strncmp(buff,"ifl",3)){
				IFLT(&symbol[atoi(buff1)], &tempvalue[0], &symbol[atoi(buff1)], &symbol[0]);
			}
		}else{
			state[statementnumber]=symbol[0];
// Set Execution state to 0 or 1
				if(symbol[0]>10){
					symbol[1]=1000;
					symbol[0]=0;
				}else{
					symbol[1]=1000;
					symbol[0]=1;
				}
			value[statementnumber][0]=atoi(buff2);
			symbolindex[statementnumber][1] = 0;
			symbolindex[statementnumber][0] = atoi(buff1);
			if(!strncmp(buff,"ife",3)){
				functionPtrArray[statementnumber] = IFEQ;
			}
			if(!strncmp(buff,"ifg",3)){
				functionPtrArray[statementnumber] = IFGT;
			}
			if(!strncmp(buff,"ifl",3)){
				functionPtrArray[statementnumber] = IFLT;
			}
			statementnumber++;
			numberofstatements++;
		}
    }
	}

}}

#pragma vector=TIMER0_A0_VECTOR
__interrupt void Timer0_A0(void)
{
	char *bytes;
	int ii;
	unsigned char j;
    char FlashStatus_1 = 0xff;

  //ADC Conversion
    ADC10CTL0 |= ENC + ADC10SC;             // Sampling and conversion start
//    __bis_SR_register(CPUOFF + GIE);
	pulsecount++;

	//non flash setting
		if(pulsecount<pulse[0]){
			LED_OUT |= LED1;
		}else{
			LED_OUT &= ~LED1;
		}
	//non flash setting
		if(pulsecount<pulse[3] && noflash){
			LED_OUT |= LED2;
		}else{
			LED_OUT &= ~LED2;
		}
		if(pulsecount<pulse[1]){
			SERVO_OUT |= BIT4;
		}else{
			SERVO_OUT &= ~BIT4;
		}
		if(pulsecount<pulse[2]){
			SERVO_OUT |= BIT5;
		}else{
			SERVO_OUT &= ~BIT5;
		}
		if(pulsecount<pulse[4] && noflash){
			LED_OUT |= BIT7;
		}else{
			LED_OUT &= ~BIT7;
		}
		if(pulsecount<pulse[5]){
			SERVO_OUT |= BIT7;
		}else{
			SERVO_OUT &= ~BIT7;
		}
		if(pulsecount<pulse[6]){
			SERVO_OUT |= BIT6;
		}else{
			SERVO_OUT &= ~BIT6;
		}
/*		if(pulsecount>pulse[7]){
			LED_OUT |= BIT4;
		}else{
			LED_OUT &= ~BIT4;
		}
		if(pulsecount>pulse[8]){
			LED_OUT |= BIT5;
		}else{
			LED_OUT &= ~BIT5;
		}*/
		if(pulsecount<pulse[9] && noflash){
			SERVO_OUT |= BIT2;
		}else{
			SERVO_OUT &= ~BIT2;
		}
		if(pulsecount<pulse[10]){
			SERVO_OUT |= BIT3;
		}else{
			SERVO_OUT &= ~BIT3;
		}
	 if(pulsecount>100){
		 pulsecount=0;
		 sleepcounter++;
			pulsecounter++;
			if(pulsecounter>32000){
				pulsecounter=0;
			}
	 }



  a2dcounter++;
  if(a2dcounter>=a2dperiod){
	  a2dcounter=0;
		 if(!a2devent1){

		  ADC10CTL0 &= ~ENC;//Multi-channel
		  while (ADC10CTL1 & BUSY);//Multi-channel
		  ADC10SA = (unsigned int)samples;//Multi-channel

// flash setting		  a2dbuffer[0]=samples[4]; // pin2
// flash setting		  a2dbuffer[1]=samples[1]; // pin5
// flash setting		  a2dbuffer[2]=samples[0]; // pin6
//		 a2dbuffer[1]=samples[2]; // pin5
		 a2dbuffer[2]=samples[1]; // pin6
         a2dbuffer[0]=samples[0]; //pin7


		if(Flash<(int*)0xFBFF){
				  FCTL3 = FWKEY;
				  FCTL1 = FWKEY + WRT;                      // Set WRT bit for write operation
				  *Flash3++ = a2dbuffer[2];
				  *Flash2++ = a2dbuffer[1];
				  *Flash++ = a2dbuffer[0];                   // Write value to flash
				  FCTL1 = FWKEY;                            // Clear WRT bit
				  FCTL3 = FWKEY + LOCK;                     // Set LOCK bit
		}else{
				 a2devent1=1;
	    }
   		 bufferindex= bufferindex+1;
		 if(bufferindex>=a2dbuffersize){
			 bufferindex=0;
		 }
	 }
	   }
  _BIC_SR_IRQ(LPM0_bits);   // Exit LPM0; exit low power mode 0
}

//Push Button ISR
#pragma vector=PORT1_VECTOR
__interrupt void PORT1_ISR(void)
{
  BUTTON_IFG = 0;
  BUTTON_IE &= ~BUTTON;
  WDTCTL = WDT_ADLY_250;
  IFG1 &= ~WDTIFG;
  IE1 |= WDTIE;
	 __delay_cycles(100000);
  BUTTON_IE |= BUTTON;
  event = 1;
}

// ADC10 interrupt service routine
#pragma vector=ADC10_VECTOR
__interrupt void ADC10_ISR (void) {
//	__bic_SR_register_on_exit(CPUOFF);        // Return to active mode }
}



// Watchdog Timer interrupt service routine
#pragma vector=WDT_VECTOR
__interrupt void watchdog_timer(void)
{
  P2OUT ^= BIT2;
  Time += 2;  // add 2 ms to the timer counter
  if(Time >= 1000)
  {
      Rate = Byte_Counter;
      Byte_Counter = 0;
      Time = 0;
  }
}
