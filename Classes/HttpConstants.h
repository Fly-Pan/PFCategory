//
//  AppConstants.h
//  CardMaster
//
//  Created by Lyner on 13-7-9.
//  Copyright (c) 2013年 GL. All rights reserved.
//
 
#import <Foundation/Foundation.h>

#define Session_Key @""


/************************************* 测试环境 ********************************************/


//#define MQTT_IP @"testmqtt.typark.net"
//#define MQTT_Port 61613
//#define PIC_URL @"http://testm.typark.net"
//#define BASE_URL @"http://testapi.typark.net"
//
//
//#define k_WeChat_AppID @"wxf2cbc8b880a2012b"
//#define k_WeChat_AppSecret @"5652c358c478e3ee4bd9938e02b5a9f7"
//#define k_Parnter @"2088911678955478"
//#define k_Seller @"njqywhcm@126.com"
//#define k_Private_Key @"MIICdwIBADANBgkqhkiG9w0BAQEFAASCAmEwggJdAgEAAoGBAKlJ9tcQRoHH3Y2faFSMt/GLaA2uoEegAjQ1XdKgAm42gBajH4FOvzTe4PuuW8nBr1D8bZ/JlvICNVFKsomzbG6Mu+fWazKTXtznZIIDf0HCy5rhcdWr+59sVDZ9+fitiSB6tqJQh5iGXgMorB+karN6MlFGkpddRWJ2Uc32WW6/AgMBAAECgYBjKQQBbXMfSecosZr3C4YjYjkM6qDP05X25tuSKE/EJwBYQiyOHYY6feLjCXqSb3U1xuaflgFouIpql4qExihYlNpQDG4L/pksgeuortFxShfjId1ru8ejIJMpLhOywzwizpapr3y/f+hMNkG4BMjvRngxwVmk/rVPFIbaSGZFgQJBANi/YIBD44GFFOPWOBglEc13cb5e2Ri/Rfcq33XdCtsR6rNSOYLm8Z4+hSI6mHH6ySOGGyreweJkTPEjp/Xq9c8CQQDH8lwGU/XB7LMo+s/dXERrz684dr2PjwybBlSmPI9YrMlafrxclt53ZVOfHkl0UWzqq02LlNk9I05hDKcPciQRAkBUlvPpexVKEg8iEBOaULVO8+O/QTMG9ncuzFujmx3Ge4qWa2uoi8sWUB4TSrz+FrrzEz59D6ypVy20Go9NaWJ/AkEAuISw6CYTZiNKM0dDDMVZXyUKTtFFnnYk6+ursr2wi+To7NqIeenA4+5efTk2EGIUYXw009tJn2I1sto6UcbEAQJBAMcujxwDlpGlSLmPinp+hjxPwE+OLpEcSoxFrq90NQh6nc8QRMyuuWsSJ12N4D/DkbnXpXzP+4mynIjnnMXgHYA="

/******************************************************************************************/



/************************************* 上线环境 ********************************************/
//#define MQTT_IP @"mqtt.typark.net"
//#define MQTT_Port 61613
//#define PIC_URL @"http://m.typark.net"
//#define BASE_URL @"http://api.typark.net"
//
//#define k_WeChat_AppID @"wxf2cbc8b880a2012b"
//#define k_WeChat_AppSecret @"5652c358c478e3ee4bd9938e02b5a9f7"
//#define k_Parnter @"2088911678955478"
//#define k_Seller @"njqywhcm@126.com"
//#define k_Private_Key @"MIICdwIBADANBgkqhkiG9w0BAQEFAASCAmEwggJdAgEAAoGBAKlJ9tcQRoHH3Y2faFSMt/GLaA2uoEegAjQ1XdKgAm42gBajH4FOvzTe4PuuW8nBr1D8bZ/JlvICNVFKsomzbG6Mu+fWazKTXtznZIIDf0HCy5rhcdWr+59sVDZ9+fitiSB6tqJQh5iGXgMorB+karN6MlFGkpddRWJ2Uc32WW6/AgMBAAECgYBjKQQBbXMfSecosZr3C4YjYjkM6qDP05X25tuSKE/EJwBYQiyOHYY6feLjCXqSb3U1xuaflgFouIpql4qExihYlNpQDG4L/pksgeuortFxShfjId1ru8ejIJMpLhOywzwizpapr3y/f+hMNkG4BMjvRngxwVmk/rVPFIbaSGZFgQJBANi/YIBD44GFFOPWOBglEc13cb5e2Ri/Rfcq33XdCtsR6rNSOYLm8Z4+hSI6mHH6ySOGGyreweJkTPEjp/Xq9c8CQQDH8lwGU/XB7LMo+s/dXERrz684dr2PjwybBlSmPI9YrMlafrxclt53ZVOfHkl0UWzqq02LlNk9I05hDKcPciQRAkBUlvPpexVKEg8iEBOaULVO8+O/QTMG9ncuzFujmx3Ge4qWa2uoi8sWUB4TSrz+FrrzEz59D6ypVy20Go9NaWJ/AkEAuISw6CYTZiNKM0dDDMVZXyUKTtFFnnYk6+ursr2wi+To7NqIeenA4+5efTk2EGIUYXw009tJn2I1sto6UcbEAQJBAMcujxwDlpGlSLmPinp+hjxPwE+OLpEcSoxFrq90NQh6nc8QRMyuuWsSJ12N4D/DkbnXpXzP+4mynIjnnMXgHYA="



/******************************************************************************************/



/************************************* 仿真环境 ********************************************/
#define MQTT_IP @"simmqtt.typark.net"
#define MQTT_Port 61613
#define PIC_URL @"http://simm.typark.com.cn"
#define BASE_URL @"http://simapi.typark.com.cn"

#define k_WeChat_AppID @"wxf2cbc8b880a2012b"
#define k_WeChat_AppSecret @"5652c358c478e3ee4bd9938e02b5a9f7"
#define k_Parnter @"2088911678955478"
#define k_Seller @"njqywhcm@126.com"
#define k_Private_Key @"MIICdwIBADANBgkqhkiG9w0BAQEFAASCAmEwggJdAgEAAoGBAKlJ9tcQRoHH3Y2faFSMt/GLaA2uoEegAjQ1XdKgAm42gBajH4FOvzTe4PuuW8nBr1D8bZ/JlvICNVFKsomzbG6Mu+fWazKTXtznZIIDf0HCy5rhcdWr+59sVDZ9+fitiSB6tqJQh5iGXgMorB+karN6MlFGkpddRWJ2Uc32WW6/AgMBAAECgYBjKQQBbXMfSecosZr3C4YjYjkM6qDP05X25tuSKE/EJwBYQiyOHYY6feLjCXqSb3U1xuaflgFouIpql4qExihYlNpQDG4L/pksgeuortFxShfjId1ru8ejIJMpLhOywzwizpapr3y/f+hMNkG4BMjvRngxwVmk/rVPFIbaSGZFgQJBANi/YIBD44GFFOPWOBglEc13cb5e2Ri/Rfcq33XdCtsR6rNSOYLm8Z4+hSI6mHH6ySOGGyreweJkTPEjp/Xq9c8CQQDH8lwGU/XB7LMo+s/dXERrz684dr2PjwybBlSmPI9YrMlafrxclt53ZVOfHkl0UWzqq02LlNk9I05hDKcPciQRAkBUlvPpexVKEg8iEBOaULVO8+O/QTMG9ncuzFujmx3Ge4qWa2uoi8sWUB4TSrz+FrrzEz59D6ypVy20Go9NaWJ/AkEAuISw6CYTZiNKM0dDDMVZXyUKTtFFnnYk6+ursr2wi+To7NqIeenA4+5efTk2EGIUYXw009tJn2I1sto6UcbEAQJBAMcujxwDlpGlSLmPinp+hjxPwE+OLpEcSoxFrq90NQh6nc8QRMyuuWsSJ12N4D/DkbnXpXzP+4mynIjnnMXgHYA="

//#define k_Parnter @"2088621238298430"
//#define k_Seller @"tyzyinfo@163.com"
//#define k_Private_Key @"MIIEugIBADANBgkqhkiG9w0BAQEFAASCBKQwggSgAgEAAoIBAQCLMAY4mpfBMc1A4qAIYou6TygWlAUQ6oqL0NKQW4euRZlp4dcbZrdmHbLzfTmRXBbym7llpR7RL4e2VVQzcQKnXFcgtohrx9+vWuC5hfsrJ+NhCiD7wetHv5jo0wKJ8uUfvKC7p7EvNCugt4Ex038GC7DF/L9GBshb/IaKerlrGAWoJhs8OvjILaqcp0sG6iu/crLfEA3154AjhJe81R0stp6+IbHOTnWP3/8PGS5A7rMr9B+cInv5vqqQ9bz0Tq9UoG+ddbBT3g5rywOm77vjUYfJuzFXlWBwPEoYn4fqpEtVdLCe8sDHy9VwoBYYYPWKKu1HOpxV3sdXRPytK70pAgMBAAECggEAbL2jTpuwjdYbtmKXhpV+9pqbBjC0WIf0n9EQgImR0hw8BBXV2WmBRP1U7pfZ3u+kWfxBduDu150bmN7HPr0+xoQE6eDRaesonbYRNcAv/4JVSV4BcM8Kwu40R0l7hUzHpujWZmVXrzpCD3juLYA/j/iYLcYNpWbtJ7h9YDkLHVfqSSfmWfuDd37XjnVxnZCxRSetv05E0/5RalanI5/u73goqx+Oso1Nr8TF5vXfo1o7b6NLuk3YBhgA6aZzL/5cYfPDzeuC2p6vzEfdoyw5lJHjNMlVpQZiZNquatP/gFeOcOAYg+wJPClStI1WwT4iWkdwf/XYRUWyleCCDT2vUQKBgQDMZQnl5WPiPDk7ptYIfVzCQv6EbGtM6ItOMHTI3SztdZ4h5i+vt4CyihXhQLaIrkeKW4JbcVNdolVEXaU8mLDb+zJaV2rf0eaFccKgcOGz8m5YXqH+4blTIYAUcXSs0D8bDCkj5cCpGNOUFk8E/wOCT2Afl8608XZVkXL5BUs0VQKBgQCuVFqaxx+ozw1NfUefSltp8mgjHPXNRpAzueR8jxK8i6LTA/QPG7f53b41U7qWSXrkL6yDZ84U94nX8zBbmzuGjyxYeU9GNvh/eh83rosLeM/8mdmNG1igoOSplUuxjqXQPbPhdjBxFzrcEgXaCtDdaRejWBTcAwj41Qyy0EhZhQKBgHyoOssthieal0VcUTlIS+Rmu5fEEAUN5rg/MVq4GgiRLWp7WyYOAr3hHcsNjsX5lMQ7X1up2DBJKzvQ6U/1yBfCMkmK+zGacL9+TDdR4TXAa7AVtzMeM8sRqW3ObFxhfbtfRVARddkrvQ6aNINVjKxTAMsD6RvOEF/Ln5VktyMpAn99TCPTG0umCSuGhoTz+H27qH8wvZ/t6sm6Y+HVpP/ShIqDIFRKh6Gz9azAp210l1u8podX60QzzbdFf4VCUlB2ZnF5JbfUv63b8ep+GvXVSQA0jl/PC9inmvy+5o+BDwYepjqj0k7++bNUeZ+7GAsHGIHk5WoYuBW6w2ZdH1bhAoGAfjRMqxk9LVOQrlodCsTiN3qVSAFtf3KgZKWP2HD2TKA0Yce9+v0Oqxr1Sfkz1kuXt7o56220EvenxE39baWfU58KkFo8j8fgMWToGsuRdR9InBVjlnakeqIAftXvSfPNul/t7h6xBQugzx7KkiBUf6Bv26z/ACeAf11dp/qOD/g="

/******************************************************************************************/


#define Nearby_Parking          @"/api/app/park/qParkingArea"                   //搜索停车场
#define Parking_Detail          @"/api/app/park/fParkingSeat"                   //停车场详情
#define Parking_SState          @"/api/app/park/fParkSeatState"                 //停车位状态
#define Parking_ReserveById     @"/api/app/record/reserveById"                  //查看停车位是否为当前账户预留车位
#define Parking_STime           @"/api/app/order/fReserveTime"                 //停车位可预约时间
//#define Parking_STime           @"/api/app/record/fReserveTime"                 //停车位可预约时间
//record 改成order

#define Parking_SPrice          @"/api/app/order/fReserveCost"                  //预约费用
//#define Parking_SPrice          @"/api/app/park/fReserveCost2"                  //预约费用

//park/fReserveCost2改成order/fReserveCost

#define Parking_Check           @"/api/app/park/checkSeat"                      //检测停车位状态费用
#define Charging_Str            @"/api/app/park/fChargingStrategy"              //收费策略
#define Content_Url             @"/api/app/content/qContents"                   //Content
#define Content_Html            @"/app/content/fContentHtmlById.do?id="         //获取详情
#define Charging_Html           @"/app/content/fChargeHtmlById.do?"            //获取收费策略详情

#define Key_Words               @"/api/app/park/qKeyWords"                      //获取关键字搜索
#define Svg_DownLoad            @"/api/app/version/downFile"                    //SVG下载
#define Bill_BestCark           @"/api/app/card/fBestCard"                      //推荐卡片优惠
#define WX_Pay                  @"/api/app/record/weixinPayUnifiedorder"        //微信支付
#define Resevel_Bill            @"/api/app/record/cmtReserveTran"               //发送订单信息
#define Cancle_Bill             @"/api/app/record/cmtCancelReserveTran"         //取消订单
#define Pay_NotifyURL           @"/api/app/record/fAlipayResult"                //支付宝订单回掉
#define Loging_Net              @"/api/app/customer/token"                      //快速登录
#define LoginOut_Net            @"/api/app/customer/loginOut"                   //退出登录
#define Parking_Info            @"/api/app/fParkingSeat"                        //停车场信息
#define Parking_Recorde         @"/api/app/record/qRecord"                      //交易信息


#define Parking_ResevelTran     @"/api/app/order/cmtReserveTranNew"             //确认预留订单
#define Parking_TakingCarTran   @"/api/app/order/cmtTakingCarTranNew"           //确认停车订单
#define Parking_CardTran        @"/api/app/order/cmtRenewCardTranNew"           //确认包月卡充值定单
#define Parking_TranNoResult    @"/api/app/order/qRecordStateByTradeNo"                 //获取订单支付结果


#define Renew_Token             @"/api/app/customer/renewToken"                 //更新token
#define Send_SC                 @"/api/app/customer/sendSC"                     //发送验证码
#define Check_Park              @"/api/app/checkPark"                           //检测车位停车场
#define Lock_Open               @"/api/app/record/cmtTakeCarTran"               //激活解锁车位、打开车位
#define Lock_Open_Pay           @"/api/app/order/qRecordByCodeNew"                 //取车获取支付订单
//#define Lock_Open_Pay           @"/api/app/record/recordByCode"                 //取车获取支付订单

//record/recordByCode改成order/qRecordByCodeNew


#define Lock_Open_CmtPayTran    @"/api/app/record/cmtPayTran"                   //取车接口
#define Get_LockSys             @"/api/app/getLockSymbol"                       //获取地锁编号
#define Get_CardRecords         @"/api/app/card/qCardRecords"                   //获取缴费记录
#define Get_QContents           @"/api/app/content/qContents"                   //获取广告、发现等
#define Get_Cards               @"/api/app/card/qCards"                         //卡券记录
#define Get_BestCards           @"/api/app/card/fBestCard"                      //最优卡券
#define Get_QCardRecords        @"/api/app/card/qCardRecords"                   //月卡续费记录
#define Change_NickName         @"/api/app/customer/cmtNickName"                //设置昵称
#define Change_CustomerPhoto    @"/api/app/customer/cmtUserPhoto"               //设置头像
#define Pay_CmtRenewCard        @"/api/app/card/cmtRenewCard"                   //包月卡续费
#define Get_FReCord             @"/api/app/record/fRecord"                      //获取交易记录
#define Cancel_Reserve          @"/api/app/record/cmtCancelReserveTran"         //取消预留
#define Parking_CmtPaymentTran  @"/api/app/record/cmtPaymentTran"               //支付未支付订单
#define Check_UploadVersion     @"/api/app/version/uploadVersion"               //检查更新版本

#define PARKING_LOT_TYPE        @"1"        //停车场
#define PARKING_SEAT_TYPE       @"2"        //停车位

#define HTTP_CONECT(x,y) [NSString stringWithFormat:@"%@%@",x,y]

#define  KEY_USERNAME_PASSWORD @"com.company.app.usernamepassword"
#define  KEY_USERNAME @"com.company.app.username"
#define  KEY_PASSWORD @"com.company.app.password"
