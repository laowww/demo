#include "pinyin.h"

#define g_length_lastNameTable 554
#define g_length_multiToneWordTable 708
#define g_length_hanziTables 411


/*
0. 姓氏特殊读音(包括：特殊、非特殊、复姓读音)
1. 可以自己添加
3. 来源于各种网络数据的整合
*/
lastNameTableS lastNameTable[g_length_lastNameTable] =
{
    { QString::fromLocal8Bit("赵") , QString::fromLocal8Bit("zhao") },
    { QString::fromLocal8Bit("钱") , QString::fromLocal8Bit("qian") },
    { QString::fromLocal8Bit("孙") , QString::fromLocal8Bit("sun") },
    { QString::fromLocal8Bit("李") , QString::fromLocal8Bit("li") },
    { QString::fromLocal8Bit("周") , QString::fromLocal8Bit("zhou") },
    { QString::fromLocal8Bit("吴") , QString::fromLocal8Bit("wu") },
    { QString::fromLocal8Bit("郑") , QString::fromLocal8Bit("zheng") },
    { QString::fromLocal8Bit("王") , QString::fromLocal8Bit("wang") },
    { QString::fromLocal8Bit("冯") , QString::fromLocal8Bit("feng") },
    { QString::fromLocal8Bit("陈") , QString::fromLocal8Bit("chen") },
    { QString::fromLocal8Bit("褚") , QString::fromLocal8Bit("chu") },
    { QString::fromLocal8Bit("卫") , QString::fromLocal8Bit("wei") },
    { QString::fromLocal8Bit("蒋") , QString::fromLocal8Bit("jiang") },
    { QString::fromLocal8Bit("沈") , QString::fromLocal8Bit("shen") },
    { QString::fromLocal8Bit("韩") , QString::fromLocal8Bit("han") },
    { QString::fromLocal8Bit("杨") , QString::fromLocal8Bit("yang") },
    { QString::fromLocal8Bit("朱") , QString::fromLocal8Bit("zhu") },
    { QString::fromLocal8Bit("秦") , QString::fromLocal8Bit("qin") },
    { QString::fromLocal8Bit("尤") , QString::fromLocal8Bit("you") },
    { QString::fromLocal8Bit("许") , QString::fromLocal8Bit("xu") },
    { QString::fromLocal8Bit("何") , QString::fromLocal8Bit("he") },
    { QString::fromLocal8Bit("吕") , QString::fromLocal8Bit("lv") },
    { QString::fromLocal8Bit("施") , QString::fromLocal8Bit("shi") },
    { QString::fromLocal8Bit("张") , QString::fromLocal8Bit("zhang") },
    { QString::fromLocal8Bit("孔") , QString::fromLocal8Bit("kong") },
    { QString::fromLocal8Bit("曹") , QString::fromLocal8Bit("cao") },
    { QString::fromLocal8Bit("严") , QString::fromLocal8Bit("yan") },
    { QString::fromLocal8Bit("华") , QString::fromLocal8Bit("hua") },
    { QString::fromLocal8Bit("金") , QString::fromLocal8Bit("jin") },
    { QString::fromLocal8Bit("魏") , QString::fromLocal8Bit("wei") },
    { QString::fromLocal8Bit("陶") , QString::fromLocal8Bit("tao") },
    { QString::fromLocal8Bit("姜") , QString::fromLocal8Bit("jiang") },
    { QString::fromLocal8Bit("戚") , QString::fromLocal8Bit("qi") },
    { QString::fromLocal8Bit("谢") , QString::fromLocal8Bit("xie") },
    { QString::fromLocal8Bit("邹") , QString::fromLocal8Bit("zou") },
    { QString::fromLocal8Bit("喻") , QString::fromLocal8Bit("yu") },
    { QString::fromLocal8Bit("柏") , QString::fromLocal8Bit("bai") },
    { QString::fromLocal8Bit("水") , QString::fromLocal8Bit("shui") },
    { QString::fromLocal8Bit("窦") , QString::fromLocal8Bit("dou") },
    { QString::fromLocal8Bit("章") , QString::fromLocal8Bit("zhang") },
    { QString::fromLocal8Bit("云") , QString::fromLocal8Bit("yun") },
    { QString::fromLocal8Bit("苏") , QString::fromLocal8Bit("su") },
    { QString::fromLocal8Bit("潘") , QString::fromLocal8Bit("pan") },
    { QString::fromLocal8Bit("葛") , QString::fromLocal8Bit("ge") },
    { QString::fromLocal8Bit("奚") , QString::fromLocal8Bit("xi") },
    { QString::fromLocal8Bit("范") , QString::fromLocal8Bit("fan") },
    { QString::fromLocal8Bit("彭") , QString::fromLocal8Bit("peng") },
    { QString::fromLocal8Bit("郎") , QString::fromLocal8Bit("lang") },
    { QString::fromLocal8Bit("鲁") , QString::fromLocal8Bit("lu") },
    { QString::fromLocal8Bit("韦") , QString::fromLocal8Bit("wei") },
    { QString::fromLocal8Bit("昌") , QString::fromLocal8Bit("chang") },
    { QString::fromLocal8Bit("马") , QString::fromLocal8Bit("ma") },
    { QString::fromLocal8Bit("苗") , QString::fromLocal8Bit("miao") },
    { QString::fromLocal8Bit("凤") , QString::fromLocal8Bit("feng") },
    { QString::fromLocal8Bit("花") , QString::fromLocal8Bit("hua") },
    { QString::fromLocal8Bit("方") , QString::fromLocal8Bit("fang") },
    { QString::fromLocal8Bit("俞") , QString::fromLocal8Bit("yu") },
    { QString::fromLocal8Bit("任") , QString::fromLocal8Bit("ren") },
    { QString::fromLocal8Bit("袁") , QString::fromLocal8Bit("yuan") },
    { QString::fromLocal8Bit("柳") , QString::fromLocal8Bit("liu") },
    { QString::fromLocal8Bit("酆") , QString::fromLocal8Bit("feng") },
    { QString::fromLocal8Bit("鲍") , QString::fromLocal8Bit("bao") },
    { QString::fromLocal8Bit("史") , QString::fromLocal8Bit("shi") },
    { QString::fromLocal8Bit("唐") , QString::fromLocal8Bit("tang") },
    { QString::fromLocal8Bit("费") , QString::fromLocal8Bit("fei") },
    { QString::fromLocal8Bit("廉") , QString::fromLocal8Bit("lian") },
    { QString::fromLocal8Bit("岑") , QString::fromLocal8Bit("cen") },
    { QString::fromLocal8Bit("薛") , QString::fromLocal8Bit("xue") },
    { QString::fromLocal8Bit("雷") , QString::fromLocal8Bit("lei") },
    { QString::fromLocal8Bit("贺") , QString::fromLocal8Bit("he") },
    { QString::fromLocal8Bit("倪") , QString::fromLocal8Bit("ni") },
    { QString::fromLocal8Bit("汤") , QString::fromLocal8Bit("tang") },
    { QString::fromLocal8Bit("滕") , QString::fromLocal8Bit("teng") },
    { QString::fromLocal8Bit("殷") , QString::fromLocal8Bit("yin") },
    { QString::fromLocal8Bit("罗") , QString::fromLocal8Bit("luo") },
    { QString::fromLocal8Bit("毕") , QString::fromLocal8Bit("bi") },
    { QString::fromLocal8Bit("郝") , QString::fromLocal8Bit("hao") },
    { QString::fromLocal8Bit("邬") , QString::fromLocal8Bit("wu") },
    { QString::fromLocal8Bit("安") , QString::fromLocal8Bit("an") },
    { QString::fromLocal8Bit("常") , QString::fromLocal8Bit("chang") },
    { QString::fromLocal8Bit("乐") , QString::fromLocal8Bit("yue") },
    { QString::fromLocal8Bit("于") , QString::fromLocal8Bit("yu") },
    { QString::fromLocal8Bit("时") , QString::fromLocal8Bit("shi") },
    { QString::fromLocal8Bit("傅") , QString::fromLocal8Bit("fu") },
    { QString::fromLocal8Bit("皮") , QString::fromLocal8Bit("pi") },
    { QString::fromLocal8Bit("卞") , QString::fromLocal8Bit("bian") },
    { QString::fromLocal8Bit("齐") , QString::fromLocal8Bit("qi") },
    { QString::fromLocal8Bit("康") , QString::fromLocal8Bit("kang") },
    { QString::fromLocal8Bit("伍") , QString::fromLocal8Bit("wu") },
    { QString::fromLocal8Bit("余") , QString::fromLocal8Bit("yu") },
    { QString::fromLocal8Bit("元") , QString::fromLocal8Bit("yuan") },
    { QString::fromLocal8Bit("卜") , QString::fromLocal8Bit("bu") },
    { QString::fromLocal8Bit("顾") , QString::fromLocal8Bit("gu") },
    { QString::fromLocal8Bit("孟") , QString::fromLocal8Bit("meng") },
    { QString::fromLocal8Bit("平") , QString::fromLocal8Bit("ping") },
    { QString::fromLocal8Bit("黄") , QString::fromLocal8Bit("huang") },
    { QString::fromLocal8Bit("和") , QString::fromLocal8Bit("he") },
    { QString::fromLocal8Bit("穆") , QString::fromLocal8Bit("mu") },
    { QString::fromLocal8Bit("萧") , QString::fromLocal8Bit("xiao") },
    { QString::fromLocal8Bit("尹") , QString::fromLocal8Bit("yin") },
    { QString::fromLocal8Bit("姚") , QString::fromLocal8Bit("yao") },
    { QString::fromLocal8Bit("邵") , QString::fromLocal8Bit("shao") },
    { QString::fromLocal8Bit("湛") , QString::fromLocal8Bit("zhan") },
    { QString::fromLocal8Bit("汪") , QString::fromLocal8Bit("wang") },
    { QString::fromLocal8Bit("祁") , QString::fromLocal8Bit("qi") },
    { QString::fromLocal8Bit("毛") , QString::fromLocal8Bit("mao") },
    { QString::fromLocal8Bit("禹") , QString::fromLocal8Bit("yu") },
    { QString::fromLocal8Bit("狄") , QString::fromLocal8Bit("di") },
    { QString::fromLocal8Bit("米") , QString::fromLocal8Bit("mi") },
    { QString::fromLocal8Bit("贝") , QString::fromLocal8Bit("bei") },
    { QString::fromLocal8Bit("明") , QString::fromLocal8Bit("ming") },
    { QString::fromLocal8Bit("臧") , QString::fromLocal8Bit("zang") },
    { QString::fromLocal8Bit("计") , QString::fromLocal8Bit("ji") },
    { QString::fromLocal8Bit("伏") , QString::fromLocal8Bit("fu") },
    { QString::fromLocal8Bit("成") , QString::fromLocal8Bit("cheng") },
    { QString::fromLocal8Bit("戴") , QString::fromLocal8Bit("dai") },
    { QString::fromLocal8Bit("谈") , QString::fromLocal8Bit("tan") },
    { QString::fromLocal8Bit("宋") , QString::fromLocal8Bit("song") },
    { QString::fromLocal8Bit("茅") , QString::fromLocal8Bit("mao") },
    { QString::fromLocal8Bit("庞") , QString::fromLocal8Bit("pang") },
    { QString::fromLocal8Bit("熊") , QString::fromLocal8Bit("xiong") },
    { QString::fromLocal8Bit("纪") , QString::fromLocal8Bit("ji") },
    { QString::fromLocal8Bit("舒") , QString::fromLocal8Bit("shu") },
    { QString::fromLocal8Bit("屈") , QString::fromLocal8Bit("qu") },
    { QString::fromLocal8Bit("项") , QString::fromLocal8Bit("xiang") },
    { QString::fromLocal8Bit("祝") , QString::fromLocal8Bit("zhu") },
    { QString::fromLocal8Bit("董") , QString::fromLocal8Bit("dong") },
    { QString::fromLocal8Bit("梁") , QString::fromLocal8Bit("liang") },
    { QString::fromLocal8Bit("杜") , QString::fromLocal8Bit("du") },
    { QString::fromLocal8Bit("阮") , QString::fromLocal8Bit("ruan") },
    { QString::fromLocal8Bit("蓝") , QString::fromLocal8Bit("lan") },
    { QString::fromLocal8Bit("闵") , QString::fromLocal8Bit("min") },
    { QString::fromLocal8Bit("席") , QString::fromLocal8Bit("xi") },
    { QString::fromLocal8Bit("季") , QString::fromLocal8Bit("ji") },
    { QString::fromLocal8Bit("麻") , QString::fromLocal8Bit("ma") },
    { QString::fromLocal8Bit("强") , QString::fromLocal8Bit("qiang") },
    { QString::fromLocal8Bit("贾") , QString::fromLocal8Bit("jia") },
    { QString::fromLocal8Bit("路") , QString::fromLocal8Bit("lu") },
    { QString::fromLocal8Bit("娄") , QString::fromLocal8Bit("lou") },
    { QString::fromLocal8Bit("危") , QString::fromLocal8Bit("wei") },
    { QString::fromLocal8Bit("江") , QString::fromLocal8Bit("jiang") },
    { QString::fromLocal8Bit("童") , QString::fromLocal8Bit("tong") },
    { QString::fromLocal8Bit("颜") , QString::fromLocal8Bit("yan") },
    { QString::fromLocal8Bit("郭") , QString::fromLocal8Bit("guo") },
    { QString::fromLocal8Bit("梅") , QString::fromLocal8Bit("mei") },
    { QString::fromLocal8Bit("盛") , QString::fromLocal8Bit("sheng") },
    { QString::fromLocal8Bit("林") , QString::fromLocal8Bit("lin") },
    { QString::fromLocal8Bit("刁") , QString::fromLocal8Bit("diao") },
    { QString::fromLocal8Bit("钟") , QString::fromLocal8Bit("zhong") },
    { QString::fromLocal8Bit("徐") , QString::fromLocal8Bit("xu") },
    { QString::fromLocal8Bit("邱") , QString::fromLocal8Bit("qiu") },
    { QString::fromLocal8Bit("骆") , QString::fromLocal8Bit("luo") },
    { QString::fromLocal8Bit("高") , QString::fromLocal8Bit("gao") },
    { QString::fromLocal8Bit("夏") , QString::fromLocal8Bit("xia") },
    { QString::fromLocal8Bit("蔡") , QString::fromLocal8Bit("cai") },
    { QString::fromLocal8Bit("田") , QString::fromLocal8Bit("tian") },
    { QString::fromLocal8Bit("樊") , QString::fromLocal8Bit("fan") },
    { QString::fromLocal8Bit("胡") , QString::fromLocal8Bit("hu") },
    { QString::fromLocal8Bit("凌") , QString::fromLocal8Bit("ling") },
    { QString::fromLocal8Bit("霍") , QString::fromLocal8Bit("huo") },
    { QString::fromLocal8Bit("虞") , QString::fromLocal8Bit("yu") },
    { QString::fromLocal8Bit("万") , QString::fromLocal8Bit("wan") },
    { QString::fromLocal8Bit("支") , QString::fromLocal8Bit("zhi") },
    { QString::fromLocal8Bit("柯") , QString::fromLocal8Bit("ke") },
    { QString::fromLocal8Bit("昝") , QString::fromLocal8Bit("zan") },
    { QString::fromLocal8Bit("管") , QString::fromLocal8Bit("guan") },
    { QString::fromLocal8Bit("卢") , QString::fromLocal8Bit("lu") },
    { QString::fromLocal8Bit("莫") , QString::fromLocal8Bit("mo") },
    { QString::fromLocal8Bit("经") , QString::fromLocal8Bit("jing") },
    { QString::fromLocal8Bit("房") , QString::fromLocal8Bit("fang") },
    { QString::fromLocal8Bit("裘") , QString::fromLocal8Bit("qiu") },
    { QString::fromLocal8Bit("缪") , QString::fromLocal8Bit("miao") },
    { QString::fromLocal8Bit("干") , QString::fromLocal8Bit("gan") },
    { QString::fromLocal8Bit("解") , QString::fromLocal8Bit("xie") },
    { QString::fromLocal8Bit("应") , QString::fromLocal8Bit("ying") },
    { QString::fromLocal8Bit("宗") , QString::fromLocal8Bit("zong") },
    { QString::fromLocal8Bit("丁") , QString::fromLocal8Bit("ding") },
    { QString::fromLocal8Bit("宣") , QString::fromLocal8Bit("xuan") },
    { QString::fromLocal8Bit("贲") , QString::fromLocal8Bit("ben") },
    { QString::fromLocal8Bit("邓") , QString::fromLocal8Bit("deng") },
    { QString::fromLocal8Bit("郁") , QString::fromLocal8Bit("yu") },
    { QString::fromLocal8Bit("单") , QString::fromLocal8Bit("shan") },
    { QString::fromLocal8Bit("杭") , QString::fromLocal8Bit("hang") },
    { QString::fromLocal8Bit("洪") , QString::fromLocal8Bit("hong") },
    { QString::fromLocal8Bit("包") , QString::fromLocal8Bit("bao") },
    { QString::fromLocal8Bit("诸") , QString::fromLocal8Bit("zhu") },
    { QString::fromLocal8Bit("左") , QString::fromLocal8Bit("zuo") },
    { QString::fromLocal8Bit("石") , QString::fromLocal8Bit("shi") },
    { QString::fromLocal8Bit("崔") , QString::fromLocal8Bit("cui") },
    { QString::fromLocal8Bit("吉") , QString::fromLocal8Bit("ji") },
    { QString::fromLocal8Bit("钮") , QString::fromLocal8Bit("niu") },
    { QString::fromLocal8Bit("龚") , QString::fromLocal8Bit("gong") },
    { QString::fromLocal8Bit("程") , QString::fromLocal8Bit("cheng") },
    { QString::fromLocal8Bit("嵇") , QString::fromLocal8Bit("ji") },
    { QString::fromLocal8Bit("邢") , QString::fromLocal8Bit("xing") },
    { QString::fromLocal8Bit("滑") , QString::fromLocal8Bit("hua") },
    { QString::fromLocal8Bit("裴") , QString::fromLocal8Bit("pei") },
    { QString::fromLocal8Bit("陆") , QString::fromLocal8Bit("lu") },
    { QString::fromLocal8Bit("荣") , QString::fromLocal8Bit("rong") },
    { QString::fromLocal8Bit("翁") , QString::fromLocal8Bit("weng") },
    { QString::fromLocal8Bit("荀") , QString::fromLocal8Bit("xun") },
    { QString::fromLocal8Bit("羊") , QString::fromLocal8Bit("yang") },
    { QString::fromLocal8Bit("於") , QString::fromLocal8Bit("yu") },
    { QString::fromLocal8Bit("惠") , QString::fromLocal8Bit("hui") },
    { QString::fromLocal8Bit("甄") , QString::fromLocal8Bit("zhen") },
    { QString::fromLocal8Bit("曲") , QString::fromLocal8Bit("qu") },
    { QString::fromLocal8Bit("家") , QString::fromLocal8Bit("jia") },
    { QString::fromLocal8Bit("封") , QString::fromLocal8Bit("feng") },
    { QString::fromLocal8Bit("芮") , QString::fromLocal8Bit("rui") },
    { QString::fromLocal8Bit("羿") , QString::fromLocal8Bit("yi") },
    { QString::fromLocal8Bit("储") , QString::fromLocal8Bit("chu") },
    { QString::fromLocal8Bit("靳") , QString::fromLocal8Bit("jin") },
    { QString::fromLocal8Bit("汲") , QString::fromLocal8Bit("ji") },
    { QString::fromLocal8Bit("邴") , QString::fromLocal8Bit("bing") },
    { QString::fromLocal8Bit("糜") , QString::fromLocal8Bit("mi") },
    { QString::fromLocal8Bit("松") , QString::fromLocal8Bit("song") },
    { QString::fromLocal8Bit("井") , QString::fromLocal8Bit("jing") },
    { QString::fromLocal8Bit("段") , QString::fromLocal8Bit("duan") },
    { QString::fromLocal8Bit("富") , QString::fromLocal8Bit("fu") },
    { QString::fromLocal8Bit("巫") , QString::fromLocal8Bit("wu") },
    { QString::fromLocal8Bit("乌") , QString::fromLocal8Bit("wu") },
    { QString::fromLocal8Bit("焦") , QString::fromLocal8Bit("jiao") },
    { QString::fromLocal8Bit("巴") , QString::fromLocal8Bit("ba") },
    { QString::fromLocal8Bit("弓") , QString::fromLocal8Bit("gong") },
    { QString::fromLocal8Bit("牧") , QString::fromLocal8Bit("mu") },
    { QString::fromLocal8Bit("隗") , QString::fromLocal8Bit("kui") },
    { QString::fromLocal8Bit("山") , QString::fromLocal8Bit("shan") },
    { QString::fromLocal8Bit("谷") , QString::fromLocal8Bit("gu") },
    { QString::fromLocal8Bit("车") , QString::fromLocal8Bit("che") },
    { QString::fromLocal8Bit("侯") , QString::fromLocal8Bit("hou") },
    { QString::fromLocal8Bit("宓") , QString::fromLocal8Bit("mi") },
    { QString::fromLocal8Bit("蓬") , QString::fromLocal8Bit("peng") },
    { QString::fromLocal8Bit("全") , QString::fromLocal8Bit("quan") },
    { QString::fromLocal8Bit("郗") , QString::fromLocal8Bit("xi") },
    { QString::fromLocal8Bit("班") , QString::fromLocal8Bit("ban") },
    { QString::fromLocal8Bit("仰") , QString::fromLocal8Bit("yang") },
    { QString::fromLocal8Bit("秋") , QString::fromLocal8Bit("qiu") },
    { QString::fromLocal8Bit("仲") , QString::fromLocal8Bit("zhong") },
    { QString::fromLocal8Bit("伊") , QString::fromLocal8Bit("yi") },
    { QString::fromLocal8Bit("宫") , QString::fromLocal8Bit("gong") },
    { QString::fromLocal8Bit("宁") , QString::fromLocal8Bit("ning") },
    { QString::fromLocal8Bit("仇") , QString::fromLocal8Bit("qiu") },
    { QString::fromLocal8Bit("栾") , QString::fromLocal8Bit("luan") },
    { QString::fromLocal8Bit("暴") , QString::fromLocal8Bit("bao") },
    { QString::fromLocal8Bit("甘") , QString::fromLocal8Bit("gan") },
    { QString::fromLocal8Bit("钭") , QString::fromLocal8Bit("tou") },
    { QString::fromLocal8Bit("厉") , QString::fromLocal8Bit("li") },
    { QString::fromLocal8Bit("戎") , QString::fromLocal8Bit("rong") },
    { QString::fromLocal8Bit("祖") , QString::fromLocal8Bit("zu") },
    { QString::fromLocal8Bit("武") , QString::fromLocal8Bit("wu") },
    { QString::fromLocal8Bit("符") , QString::fromLocal8Bit("fu") },
    { QString::fromLocal8Bit("刘") , QString::fromLocal8Bit("liu") },
    { QString::fromLocal8Bit("景") , QString::fromLocal8Bit("jing") },
    { QString::fromLocal8Bit("詹") , QString::fromLocal8Bit("zhan") },
    { QString::fromLocal8Bit("束") , QString::fromLocal8Bit("shu") },
    { QString::fromLocal8Bit("龙") , QString::fromLocal8Bit("long") },
    { QString::fromLocal8Bit("叶") , QString::fromLocal8Bit("ye") },
    { QString::fromLocal8Bit("幸") , QString::fromLocal8Bit("xing") },
    { QString::fromLocal8Bit("司") , QString::fromLocal8Bit("si") },
    { QString::fromLocal8Bit("韶") , QString::fromLocal8Bit("shao") },
    { QString::fromLocal8Bit("郜") , QString::fromLocal8Bit("gao") },
    { QString::fromLocal8Bit("黎") , QString::fromLocal8Bit("li") },
    { QString::fromLocal8Bit("蓟") , QString::fromLocal8Bit("ji") },
    { QString::fromLocal8Bit("薄") , QString::fromLocal8Bit("bo") },
    { QString::fromLocal8Bit("印") , QString::fromLocal8Bit("yin") },
    { QString::fromLocal8Bit("宿") , QString::fromLocal8Bit("su") },
    { QString::fromLocal8Bit("白") , QString::fromLocal8Bit("bai") },
    { QString::fromLocal8Bit("怀") , QString::fromLocal8Bit("huai") },
    { QString::fromLocal8Bit("蒲") , QString::fromLocal8Bit("pu") },
    { QString::fromLocal8Bit("邰") , QString::fromLocal8Bit("tai") },
    { QString::fromLocal8Bit("从") , QString::fromLocal8Bit("cong") },
    { QString::fromLocal8Bit("鄂") , QString::fromLocal8Bit("e") },
    { QString::fromLocal8Bit("索") , QString::fromLocal8Bit("suo") },
    { QString::fromLocal8Bit("咸") , QString::fromLocal8Bit("xian") },
    { QString::fromLocal8Bit("籍") , QString::fromLocal8Bit("ji") },
    { QString::fromLocal8Bit("赖") , QString::fromLocal8Bit("lai") },
    { QString::fromLocal8Bit("卓") , QString::fromLocal8Bit("zhuo") },
    { QString::fromLocal8Bit("蔺") , QString::fromLocal8Bit("lin") },
    { QString::fromLocal8Bit("屠") , QString::fromLocal8Bit("tu") },
    { QString::fromLocal8Bit("蒙") , QString::fromLocal8Bit("meng") },
    { QString::fromLocal8Bit("池") , QString::fromLocal8Bit("chi") },
    { QString::fromLocal8Bit("乔") , QString::fromLocal8Bit("qiao") },
    { QString::fromLocal8Bit("阴") , QString::fromLocal8Bit("yin") },
    { QString::fromLocal8Bit("郁") , QString::fromLocal8Bit("yu") },
    { QString::fromLocal8Bit("胥") , QString::fromLocal8Bit("xu") },
    { QString::fromLocal8Bit("能") , QString::fromLocal8Bit("nai") },
    { QString::fromLocal8Bit("苍") , QString::fromLocal8Bit("cang") },
    { QString::fromLocal8Bit("双") , QString::fromLocal8Bit("shuang") },
    { QString::fromLocal8Bit("闻") , QString::fromLocal8Bit("wen") },
    { QString::fromLocal8Bit("莘") , QString::fromLocal8Bit("shen") },
    { QString::fromLocal8Bit("党") , QString::fromLocal8Bit("dang") },
    { QString::fromLocal8Bit("翟") , QString::fromLocal8Bit("zhai") },
    { QString::fromLocal8Bit("谭") , QString::fromLocal8Bit("tan") },
    { QString::fromLocal8Bit("贡") , QString::fromLocal8Bit("gong") },
    { QString::fromLocal8Bit("劳") , QString::fromLocal8Bit("lao") },
    { QString::fromLocal8Bit("逄") , QString::fromLocal8Bit("pang") },
    { QString::fromLocal8Bit("姬") , QString::fromLocal8Bit("ji") },
    { QString::fromLocal8Bit("申") , QString::fromLocal8Bit("shen") },
    { QString::fromLocal8Bit("扶") , QString::fromLocal8Bit("fu") },
    { QString::fromLocal8Bit("堵") , QString::fromLocal8Bit("du") },
    { QString::fromLocal8Bit("冉") , QString::fromLocal8Bit("ran") },
    { QString::fromLocal8Bit("宰") , QString::fromLocal8Bit("zai") },
    { QString::fromLocal8Bit("郦") , QString::fromLocal8Bit("li") },
    { QString::fromLocal8Bit("雍") , QString::fromLocal8Bit("yong") },
    { QString::fromLocal8Bit("郤") , QString::fromLocal8Bit("xi") },
    { QString::fromLocal8Bit("璩") , QString::fromLocal8Bit("qu") },
    { QString::fromLocal8Bit("桑") , QString::fromLocal8Bit("sang") },
    { QString::fromLocal8Bit("桂") , QString::fromLocal8Bit("gui") },
    { QString::fromLocal8Bit("濮") , QString::fromLocal8Bit("pu") },
    { QString::fromLocal8Bit("牛") , QString::fromLocal8Bit("niu") },
    { QString::fromLocal8Bit("寿") , QString::fromLocal8Bit("shou") },
    { QString::fromLocal8Bit("通") , QString::fromLocal8Bit("tong") },
    { QString::fromLocal8Bit("边") , QString::fromLocal8Bit("bian") },
    { QString::fromLocal8Bit("扈") , QString::fromLocal8Bit("hu") },
    { QString::fromLocal8Bit("燕") , QString::fromLocal8Bit("yan") },
    { QString::fromLocal8Bit("冀") , QString::fromLocal8Bit("ji") },
    { QString::fromLocal8Bit("郏") , QString::fromLocal8Bit("jia") },
    { QString::fromLocal8Bit("浦") , QString::fromLocal8Bit("pu") },
    { QString::fromLocal8Bit("尚") , QString::fromLocal8Bit("shang") },
    { QString::fromLocal8Bit("农") , QString::fromLocal8Bit("nong") },
    { QString::fromLocal8Bit("温") , QString::fromLocal8Bit("wen") },
    { QString::fromLocal8Bit("别") , QString::fromLocal8Bit("bie") },
    { QString::fromLocal8Bit("庄") , QString::fromLocal8Bit("zhuang") },
    { QString::fromLocal8Bit("晏") , QString::fromLocal8Bit("yan") },
    { QString::fromLocal8Bit("柴") , QString::fromLocal8Bit("chai") },
    { QString::fromLocal8Bit("瞿") , QString::fromLocal8Bit("qu") },
    { QString::fromLocal8Bit("阎") , QString::fromLocal8Bit("yan") },
    { QString::fromLocal8Bit("充") , QString::fromLocal8Bit("chong") },
    { QString::fromLocal8Bit("慕") , QString::fromLocal8Bit("mu") },
    { QString::fromLocal8Bit("连") , QString::fromLocal8Bit("lian") },
    { QString::fromLocal8Bit("茹") , QString::fromLocal8Bit("ru") },
    { QString::fromLocal8Bit("习") , QString::fromLocal8Bit("xi") },
    { QString::fromLocal8Bit("宦") , QString::fromLocal8Bit("huan") },
    { QString::fromLocal8Bit("艾") , QString::fromLocal8Bit("ai") },
    { QString::fromLocal8Bit("鱼") , QString::fromLocal8Bit("yu") },
    { QString::fromLocal8Bit("容") , QString::fromLocal8Bit("rong") },
    { QString::fromLocal8Bit("向") , QString::fromLocal8Bit("xiang") },
    { QString::fromLocal8Bit("古") , QString::fromLocal8Bit("gu") },
    { QString::fromLocal8Bit("易") , QString::fromLocal8Bit("yi") },
    { QString::fromLocal8Bit("慎") , QString::fromLocal8Bit("shen") },
    { QString::fromLocal8Bit("戈") , QString::fromLocal8Bit("ge") },
    { QString::fromLocal8Bit("廖") , QString::fromLocal8Bit("liao") },
    { QString::fromLocal8Bit("庾") , QString::fromLocal8Bit("yu") },
    { QString::fromLocal8Bit("终") , QString::fromLocal8Bit("zhong") },
    { QString::fromLocal8Bit("暨") , QString::fromLocal8Bit("ji") },
    { QString::fromLocal8Bit("居") , QString::fromLocal8Bit("ju") },
    { QString::fromLocal8Bit("衡") , QString::fromLocal8Bit("heng") },
    { QString::fromLocal8Bit("步") , QString::fromLocal8Bit("bu") },
    { QString::fromLocal8Bit("都") , QString::fromLocal8Bit("du") },
    { QString::fromLocal8Bit("耿") , QString::fromLocal8Bit("geng") },
    { QString::fromLocal8Bit("满") , QString::fromLocal8Bit("man") },
    { QString::fromLocal8Bit("弘") , QString::fromLocal8Bit("hong") },
    { QString::fromLocal8Bit("匡") , QString::fromLocal8Bit("kuang") },
    { QString::fromLocal8Bit("国") , QString::fromLocal8Bit("guo") },
    { QString::fromLocal8Bit("文") , QString::fromLocal8Bit("wen") },
    { QString::fromLocal8Bit("寇") , QString::fromLocal8Bit("kou") },
    { QString::fromLocal8Bit("广") , QString::fromLocal8Bit("guang") },
    { QString::fromLocal8Bit("禄") , QString::fromLocal8Bit("lu") },
    { QString::fromLocal8Bit("阙") , QString::fromLocal8Bit("que") },
    { QString::fromLocal8Bit("东") , QString::fromLocal8Bit("dong") },
    { QString::fromLocal8Bit("欧") , QString::fromLocal8Bit("ou") },
    { QString::fromLocal8Bit("殳") , QString::fromLocal8Bit("shu") },
    { QString::fromLocal8Bit("沃") , QString::fromLocal8Bit("wo") },
    { QString::fromLocal8Bit("利") , QString::fromLocal8Bit("li") },
    { QString::fromLocal8Bit("蔚") , QString::fromLocal8Bit("wei") },
    { QString::fromLocal8Bit("越") , QString::fromLocal8Bit("yue") },
    { QString::fromLocal8Bit("夔") , QString::fromLocal8Bit("kui") },
    { QString::fromLocal8Bit("隆") , QString::fromLocal8Bit("long") },
    { QString::fromLocal8Bit("师") , QString::fromLocal8Bit("shi") },
    { QString::fromLocal8Bit("巩") , QString::fromLocal8Bit("gong") },
    { QString::fromLocal8Bit("厍") , QString::fromLocal8Bit("she") },
    { QString::fromLocal8Bit("聂") , QString::fromLocal8Bit("nie") },
    { QString::fromLocal8Bit("晁") , QString::fromLocal8Bit("chao") },
    { QString::fromLocal8Bit("勾") , QString::fromLocal8Bit("gou") },
    { QString::fromLocal8Bit("句") , QString::fromLocal8Bit("gou") },
    { QString::fromLocal8Bit("敖") , QString::fromLocal8Bit("ao") },
    { QString::fromLocal8Bit("融") , QString::fromLocal8Bit("rong") },
    { QString::fromLocal8Bit("冷") , QString::fromLocal8Bit("leng") },
    { QString::fromLocal8Bit("訾") , QString::fromLocal8Bit("zi") },
    { QString::fromLocal8Bit("辛") , QString::fromLocal8Bit("xin") },
    { QString::fromLocal8Bit("阚") , QString::fromLocal8Bit("kan") },
    { QString::fromLocal8Bit("那") , QString::fromLocal8Bit("na") },
    { QString::fromLocal8Bit("简") , QString::fromLocal8Bit("jian") },
    { QString::fromLocal8Bit("饶") , QString::fromLocal8Bit("rao") },
    { QString::fromLocal8Bit("空") , QString::fromLocal8Bit("kong") },
    { QString::fromLocal8Bit("曾") , QString::fromLocal8Bit("zeng") },
    { QString::fromLocal8Bit("母") , QString::fromLocal8Bit("mu") },
    { QString::fromLocal8Bit("沙") , QString::fromLocal8Bit("sha") },
    { QString::fromLocal8Bit("乜") , QString::fromLocal8Bit("nie") },
    { QString::fromLocal8Bit("养") , QString::fromLocal8Bit("yang") },
    { QString::fromLocal8Bit("鞠") , QString::fromLocal8Bit("ju") },
    { QString::fromLocal8Bit("须") , QString::fromLocal8Bit("xu") },
    { QString::fromLocal8Bit("丰") , QString::fromLocal8Bit("feng") },
    { QString::fromLocal8Bit("巢") , QString::fromLocal8Bit("chao") },
    { QString::fromLocal8Bit("关") , QString::fromLocal8Bit("guan") },
    { QString::fromLocal8Bit("蒯") , QString::fromLocal8Bit("kuai") },
    { QString::fromLocal8Bit("相") , QString::fromLocal8Bit("xiang") },
    { QString::fromLocal8Bit("查") , QString::fromLocal8Bit("zha") },
    { QString::fromLocal8Bit("后") , QString::fromLocal8Bit("hou") },
    { QString::fromLocal8Bit("荆") , QString::fromLocal8Bit("jing") },
    { QString::fromLocal8Bit("红") , QString::fromLocal8Bit("hong") },
    { QString::fromLocal8Bit("游") , QString::fromLocal8Bit("you") },
    { QString::fromLocal8Bit("竺") , QString::fromLocal8Bit("zhu") },
    { QString::fromLocal8Bit("权") , QString::fromLocal8Bit("quan") },
    { QString::fromLocal8Bit("逯") , QString::fromLocal8Bit("lu") },
    { QString::fromLocal8Bit("盖") , QString::fromLocal8Bit("gai") },
    { QString::fromLocal8Bit("益") , QString::fromLocal8Bit("yi") },
    { QString::fromLocal8Bit("桓") , QString::fromLocal8Bit("huan") },
    { QString::fromLocal8Bit("公") , QString::fromLocal8Bit("gong") },
    { QString::fromLocal8Bit("万俟") , QString::fromLocal8Bit("moqi") },
    { QString::fromLocal8Bit("司马") , QString::fromLocal8Bit("sima") },
    { QString::fromLocal8Bit("上官") , QString::fromLocal8Bit("shangguan") },
    { QString::fromLocal8Bit("欧阳") , QString::fromLocal8Bit("ouyang") },
    { QString::fromLocal8Bit("夏侯") , QString::fromLocal8Bit("xiahou") },
    { QString::fromLocal8Bit("诸葛") , QString::fromLocal8Bit("zhuge") },
    { QString::fromLocal8Bit("闻人") , QString::fromLocal8Bit("wenren") },
    { QString::fromLocal8Bit("东方") , QString::fromLocal8Bit("dongfang") },
    { QString::fromLocal8Bit("赫连") , QString::fromLocal8Bit("helian") },
    { QString::fromLocal8Bit("皇甫") , QString::fromLocal8Bit("huangpu") },
    { QString::fromLocal8Bit("尉迟") , QString::fromLocal8Bit("yuchi") },
    { QString::fromLocal8Bit("公羊") , QString::fromLocal8Bit("gongyang") },
    { QString::fromLocal8Bit("澹台") , QString::fromLocal8Bit("tantai") },
    { QString::fromLocal8Bit("公冶") , QString::fromLocal8Bit("gongye") },
    { QString::fromLocal8Bit("宗政") , QString::fromLocal8Bit("zongzheng") },
    { QString::fromLocal8Bit("濮阳") , QString::fromLocal8Bit("puyang") },
    { QString::fromLocal8Bit("淳于") , QString::fromLocal8Bit("chunyu") },
    { QString::fromLocal8Bit("单于") , QString::fromLocal8Bit("chanyu") },
    { QString::fromLocal8Bit("太叔") , QString::fromLocal8Bit("taishu") },
    { QString::fromLocal8Bit("申屠") , QString::fromLocal8Bit("shentu") },
    { QString::fromLocal8Bit("公孙") , QString::fromLocal8Bit("gongsun") },
    { QString::fromLocal8Bit("仲孙") , QString::fromLocal8Bit("zhongsun") },
    { QString::fromLocal8Bit("轩辕") , QString::fromLocal8Bit("xuanyuan") },
    { QString::fromLocal8Bit("令狐") , QString::fromLocal8Bit("linghu") },
    { QString::fromLocal8Bit("钟离") , QString::fromLocal8Bit("zhongli") },
    { QString::fromLocal8Bit("宇文") , QString::fromLocal8Bit("yuwen") },
    { QString::fromLocal8Bit("长孙") , QString::fromLocal8Bit("zhangsun") },
    { QString::fromLocal8Bit("慕容") , QString::fromLocal8Bit("murong") },
    { QString::fromLocal8Bit("鲜于") , QString::fromLocal8Bit("xianyu") },
    { QString::fromLocal8Bit("闾丘") , QString::fromLocal8Bit("luqiu") },
    { QString::fromLocal8Bit("司徒") , QString::fromLocal8Bit("situ") },
    { QString::fromLocal8Bit("司空") , QString::fromLocal8Bit("sikong") },
    { QString::fromLocal8Bit("亓官") , QString::fromLocal8Bit("qiguan") },
    { QString::fromLocal8Bit("司寇") , QString::fromLocal8Bit("sikou") },
    { QString::fromLocal8Bit("仉督") , QString::fromLocal8Bit("zhangdu") },
    { QString::fromLocal8Bit("子车") , QString::fromLocal8Bit("ziju") },
    { QString::fromLocal8Bit("颛孙") , QString::fromLocal8Bit("zhuansun") },
    { QString::fromLocal8Bit("端木") , QString::fromLocal8Bit("duanmu") },
    { QString::fromLocal8Bit("巫马") , QString::fromLocal8Bit("wuma") },
    { QString::fromLocal8Bit("公西") , QString::fromLocal8Bit("gongxi") },
    { QString::fromLocal8Bit("漆雕") , QString::fromLocal8Bit("qidiao") },
    { QString::fromLocal8Bit("乐正") , QString::fromLocal8Bit("yuezheng") },
    { QString::fromLocal8Bit("壤驷") , QString::fromLocal8Bit("rangsi") },
    { QString::fromLocal8Bit("公良") , QString::fromLocal8Bit("gongliang") },
    { QString::fromLocal8Bit("拓跋") , QString::fromLocal8Bit("tuoba") },
    { QString::fromLocal8Bit("夹谷") , QString::fromLocal8Bit("jiagu") },
    { QString::fromLocal8Bit("宰父") , QString::fromLocal8Bit("zaifu") },
    { QString::fromLocal8Bit("榖梁") , QString::fromLocal8Bit("guliang") },
    { QString::fromLocal8Bit("晋") , QString::fromLocal8Bit("jin") },
    { QString::fromLocal8Bit("楚") , QString::fromLocal8Bit("chu") },
    { QString::fromLocal8Bit("闫") , QString::fromLocal8Bit("yan") },
    { QString::fromLocal8Bit("法") , QString::fromLocal8Bit("fa") },
    { QString::fromLocal8Bit("汝") , QString::fromLocal8Bit("ru") },
    { QString::fromLocal8Bit("鄢") , QString::fromLocal8Bit("yan") },
    { QString::fromLocal8Bit("涂") , QString::fromLocal8Bit("tu") },
    { QString::fromLocal8Bit("钦") , QString::fromLocal8Bit("qin") },
    { QString::fromLocal8Bit("段干") , QString::fromLocal8Bit("duangan") },
    { QString::fromLocal8Bit("百里") , QString::fromLocal8Bit("baili") },
    { QString::fromLocal8Bit("东郭") , QString::fromLocal8Bit("dongguo") },
    { QString::fromLocal8Bit("南门") , QString::fromLocal8Bit("nanmen") },
    { QString::fromLocal8Bit("呼延") , QString::fromLocal8Bit("huyan") },
    { QString::fromLocal8Bit("归") , QString::fromLocal8Bit("gui") },
    { QString::fromLocal8Bit("海") , QString::fromLocal8Bit("hai") },
    { QString::fromLocal8Bit("羊舌") , QString::fromLocal8Bit("yangshe") },
    { QString::fromLocal8Bit("微") , QString::fromLocal8Bit("wei") },
    { QString::fromLocal8Bit("生") , QString::fromLocal8Bit("sheng") },
    { QString::fromLocal8Bit("岳") , QString::fromLocal8Bit("yue") },
    { QString::fromLocal8Bit("帅") , QString::fromLocal8Bit("shuai") },
    { QString::fromLocal8Bit("缑") , QString::fromLocal8Bit("gou") },
    { QString::fromLocal8Bit("亢") , QString::fromLocal8Bit("kang") },
    { QString::fromLocal8Bit("况") , QString::fromLocal8Bit("kuang") },
    { QString::fromLocal8Bit("后") , QString::fromLocal8Bit("hou") },
    { QString::fromLocal8Bit("有") , QString::fromLocal8Bit("you") },
    { QString::fromLocal8Bit("琴") , QString::fromLocal8Bit("qin") },
    { QString::fromLocal8Bit("梁丘") , QString::fromLocal8Bit("liangqiu") },
    { QString::fromLocal8Bit("左丘") , QString::fromLocal8Bit("zuoqiu") },
    { QString::fromLocal8Bit("东门") , QString::fromLocal8Bit("dongmen") },
    { QString::fromLocal8Bit("西门") , QString::fromLocal8Bit("ximen") },
    { QString::fromLocal8Bit("商") , QString::fromLocal8Bit("shang") },
    { QString::fromLocal8Bit("牟") , QString::fromLocal8Bit("mou") },
    { QString::fromLocal8Bit("佘") , QString::fromLocal8Bit("she") },
    { QString::fromLocal8Bit("佴") , QString::fromLocal8Bit("nai") },
    { QString::fromLocal8Bit("伯") , QString::fromLocal8Bit("bo") },
    { QString::fromLocal8Bit("赏") , QString::fromLocal8Bit("shang") },
    { QString::fromLocal8Bit("南宫") , QString::fromLocal8Bit("nangong") },
    { QString::fromLocal8Bit("墨") , QString::fromLocal8Bit("mo") },
    { QString::fromLocal8Bit("哈") , QString::fromLocal8Bit("ha") },
    { QString::fromLocal8Bit("谯") , QString::fromLocal8Bit("qiao") },
    { QString::fromLocal8Bit("笪") , QString::fromLocal8Bit("da") },
    { QString::fromLocal8Bit("年") , QString::fromLocal8Bit("nian") },
    { QString::fromLocal8Bit("爱") , QString::fromLocal8Bit("ai") },
    { QString::fromLocal8Bit("阳") , QString::fromLocal8Bit("yang") },
    { QString::fromLocal8Bit("佟") , QString::fromLocal8Bit("tong") },
    { QString::fromLocal8Bit("第五") , QString::fromLocal8Bit("diwu") },
    { QString::fromLocal8Bit("言") , QString::fromLocal8Bit("yan") },
    { QString::fromLocal8Bit("福") , QString::fromLocal8Bit("fu") },
    { QString::fromLocal8Bit("黑") , QString::fromLocal8Bit("he") },
    { QString::fromLocal8Bit("区") , QString::fromLocal8Bit("ou") },
    { QString::fromLocal8Bit("朴") , QString::fromLocal8Bit("piao") },
    { QString::fromLocal8Bit("繁") , QString::fromLocal8Bit("po") },
    { QString::fromLocal8Bit("员") , QString::fromLocal8Bit("yun") },
    { QString::fromLocal8Bit("蕃") , QString::fromLocal8Bit("pi") },
    { QString::fromLocal8Bit("种") , QString::fromLocal8Bit("chong") },
    { QString::fromLocal8Bit("秘") , QString::fromLocal8Bit("bi") },
    { QString::fromLocal8Bit("谌") , QString::fromLocal8Bit("chen") },
    { QString::fromLocal8Bit("啜") , QString::fromLocal8Bit("chuai") },
    { QString::fromLocal8Bit("邸") , QString::fromLocal8Bit("di") },
    { QString::fromLocal8Bit("苻") , QString::fromLocal8Bit("fu") },
    { QString::fromLocal8Bit("甫") , QString::fromLocal8Bit("fu") },
    { QString::fromLocal8Bit("杲") , QString::fromLocal8Bit("gao") },
    { QString::fromLocal8Bit("艮") , QString::fromLocal8Bit("gen") },
    { QString::fromLocal8Bit("冠") , QString::fromLocal8Bit("guan") },
    { QString::fromLocal8Bit("妫") , QString::fromLocal8Bit("gui") },
    { QString::fromLocal8Bit("过") , QString::fromLocal8Bit("guo") },
    { QString::fromLocal8Bit("晟") , QString::fromLocal8Bit("cheng") },
    { QString::fromLocal8Bit("隽") , QString::fromLocal8Bit("juan") },
    { QString::fromLocal8Bit("逢") , QString::fromLocal8Bit("pang") },
    { QString::fromLocal8Bit("邳") , QString::fromLocal8Bit("pi") },
    { QString::fromLocal8Bit("莆") , QString::fromLocal8Bit("pu") },
    { QString::fromLocal8Bit("溥") , QString::fromLocal8Bit("pu") },
    { QString::fromLocal8Bit("亓") , QString::fromLocal8Bit("qi") },
    { QString::fromLocal8Bit("少") , QString::fromLocal8Bit("shao") },
    { QString::fromLocal8Bit("召") , QString::fromLocal8Bit("shao") },
    { QString::fromLocal8Bit("折") , QString::fromLocal8Bit("she") },
    { QString::fromLocal8Bit("彤") , QString::fromLocal8Bit("tong") },
    { QString::fromLocal8Bit("庹") , QString::fromLocal8Bit("tuo") },
    { QString::fromLocal8Bit("宛") , QString::fromLocal8Bit("wan") },
    { QString::fromLocal8Bit("尉") , QString::fromLocal8Bit("wei") },
    { QString::fromLocal8Bit("冼") , QString::fromLocal8Bit("xian") },
    { QString::fromLocal8Bit("洗") , QString::fromLocal8Bit("xian") },
    { QString::fromLocal8Bit("郇") , QString::fromLocal8Bit("xun") },
    { QString::fromLocal8Bit("幺") , QString::fromLocal8Bit("yao") },
    { QString::fromLocal8Bit("郧") , QString::fromLocal8Bit("yun") },
    { QString::fromLocal8Bit("恽") , QString::fromLocal8Bit("yun") },
    { QString::fromLocal8Bit("郓") , QString::fromLocal8Bit("yun") },
    { QString::fromLocal8Bit("羊角") , QString::fromLocal8Bit("yangjue") },
    { QString::fromLocal8Bit("妘") , QString::fromLocal8Bit("yun") },
    { QString::fromLocal8Bit("祭") , QString::fromLocal8Bit("zhai") },
    { QString::fromLocal8Bit("砦") , QString::fromLocal8Bit("zhai") },
    { QString::fromLocal8Bit("占") , QString::fromLocal8Bit("zhan") },
    { QString::fromLocal8Bit("仉") , QString::fromLocal8Bit("zhang") },
    { QString::fromLocal8Bit("中行") , QString::fromLocal8Bit("zhonghang") },
    { QString::fromLocal8Bit("禚") , QString::fromLocal8Bit("zhuo") },
    { QString::fromLocal8Bit("迮") , QString::fromLocal8Bit("ze") },
    { QString::fromLocal8Bit("覃") , QString::fromLocal8Bit("qin") },
};


/*
0. 多音字表
1. 后面的注释表示的是：这个字剩余的其他读音 （日、韩分别表示汉字是日语或韩语）
2. 来源于 hanziTables[]，（遍历的所有，没有遗漏）
3. 多音字选中读音规则：
   a. 选择常用读音 ：
        { QString::fromLocal8Bit("红") , QString::fromLocal8Bit("hong") },      // gong
        { QString::fromLocal8Bit("薄") , QString::fromLocal8Bit("bo") },        // bao
        { QString::fromLocal8Bit("拆") , QString::fromLocal8Bit("chai") },      // ca
   b. 选择根据拼音可以猜出汉字的读音。这种字大家知道是多音字，如果我输出'ju'你基本可以猜到汉字'句'，但是我输出'gou'你还能猜到汉字是'句'就...
        { QString::fromLocal8Bit("句") , QString::fromLocal8Bit("ju") },        // gou
        { QString::fromLocal8Bit("旁") , QString::fromLocal8Bit("pang") },      // bang
        { QString::fromLocal8Bit("给") , QString::fromLocal8Bit("gei") },       // ji
        { QString::fromLocal8Bit("艾") , QString::fromLocal8Bit("ai") },        // yi
        { QString::fromLocal8Bit("大") , QString::fromLocal8Bit("da") },        // dai
        { QString::fromLocal8Bit("炮") , QString::fromLocal8Bit("pao") },       // bao
   c. 选中非姓氏读音
        { QString::fromLocal8Bit("仇") , QString::fromLocal8Bit("chou") },      // qiu ，仇：作姓氏时读qiú
        { QString::fromLocal8Bit("解") , QString::fromLocal8Bit("jie") },       // xie ，解：作姓氏时读xiè
        { QString::fromLocal8Bit("曾") , QString::fromLocal8Bit("ceng") },      // zeng，曾：作姓氏时读zēng
   d. 选中姓名中比较可能出现的字,下面的例子可能恰好符合其他的规则，但是在我手动筛选多音字时确实考虑到这方面的情况，因为有些多音字的其中一些读音代表的意义明显不可能被当名字来使用，因为筛选时没记录，下面的例子可能不贴切
        { QString::fromLocal8Bit("盛") , QString::fromLocal8Bit("sheng") },     // cheng ， 茂盛（maoSheng），盛饭(chengFan)
        { QString::fromLocal8Bit("石") , QString::fromLocal8Bit("shi") },       // dan    ， 潘石屹
        { QString::fromLocal8Bit("矜") , QString::fromLocal8Bit("jin") },       // qin guan
        { QString::fromLocal8Bit("强") , QString::fromLocal8Bit("qiang") },     // jiang , 坚强（qiang），倔强（jiang）
   e. 需要上下文联系的，这种字没法了，只能查表，这里的输出原则遵循（abcd）
        { QString::fromLocal8Bit("屏") , QString::fromLocal8Bit("ping") },      // bing ， 屏幕、屏弃
        { QString::fromLocal8Bit("卜") , QString::fromLocal8Bit("bu") },        // bo ，   占卜、萝卜
*/
multiToneWordTableS multiToneWordTable[g_length_multiToneWordTable] =
{
    { QString::fromLocal8Bit("厑") , QString::fromLocal8Bit("e") },         // si a
    { QString::fromLocal8Bit("吖") , QString::fromLocal8Bit("ya") },        // a
    { QString::fromLocal8Bit("阿") , QString::fromLocal8Bit("a") },         // e
    { QString::fromLocal8Bit("呵") , QString::fromLocal8Bit("he") },        // ha ke a
    { QString::fromLocal8Bit("腌") , QString::fromLocal8Bit("yan") },       // a
    { QString::fromLocal8Bit("嗄") , QString::fromLocal8Bit("sha") },       // a
    { QString::fromLocal8Bit("閊") , QString::fromLocal8Bit("ci") },        // ka lu ai
    { QString::fromLocal8Bit("魞") , QString::fromLocal8Bit("li") },        // ai
    { QString::fromLocal8Bit("鱛") , QString::fromLocal8Bit("ai") },        // suo
    { QString::fromLocal8Bit("娭") , QString::fromLocal8Bit("xi") },        // ai
    { QString::fromLocal8Bit("佁") , QString::fromLocal8Bit("yi") },        // ai
    { QString::fromLocal8Bit("欸") , QString::fromLocal8Bit("ei") },        // ai
    { QString::fromLocal8Bit("艾") , QString::fromLocal8Bit("ai") },        // yi
    { QString::fromLocal8Bit("嗌") , QString::fromLocal8Bit("yi") },        // ai
    { QString::fromLocal8Bit("噫") , QString::fromLocal8Bit("yi") },        // ai
    { QString::fromLocal8Bit("餲") , QString::fromLocal8Bit("ai") },        // he
    { QString::fromLocal8Bit("厂") , QString::fromLocal8Bit("chang") },     // an
    { QString::fromLocal8Bit("广") , QString::fromLocal8Bit("guang") },     // an
    { QString::fromLocal8Bit("晻") , QString::fromLocal8Bit("yan") },       // an
    { QString::fromLocal8Bit("犴") , QString::fromLocal8Bit("han") },       // an
    { QString::fromLocal8Bit("胺") , QString::fromLocal8Bit("an") },        // e
    { QString::fromLocal8Bit("肮") , QString::fromLocal8Bit("ang") },       // hang
    { QString::fromLocal8Bit("卬") , QString::fromLocal8Bit("yang") },      // ang
    { QString::fromLocal8Bit("仰") , QString::fromLocal8Bit("yang") },      // ang
    { QString::fromLocal8Bit("凹") , QString::fromLocal8Bit("ao") },        // wa
    { QString::fromLocal8Bit("嚣") , QString::fromLocal8Bit("xiao") },      // ao
    { QString::fromLocal8Bit("夭") , QString::fromLocal8Bit("ao") },        // yao
    { QString::fromLocal8Bit("拗") , QString::fromLocal8Bit("ao") },        // niu
    { QString::fromLocal8Bit("鎺") , QString::fromLocal8Bit("ha") },        // ba
    { QString::fromLocal8Bit("鯐") , QString::fromLocal8Bit("li") },        // si xi ba
    { QString::fromLocal8Bit("叭") , QString::fromLocal8Bit("ba") },        // pa
    { QString::fromLocal8Bit("鎺") , QString::fromLocal8Bit("ba") },        // pa
    { QString::fromLocal8Bit("伯") , QString::fromLocal8Bit("bo") },        // bai  ba
    { QString::fromLocal8Bit("杷") , QString::fromLocal8Bit("pa") },        // ba
    { QString::fromLocal8Bit("叭") , QString::fromLocal8Bit("ba") },        // pa
    { QString::fromLocal8Bit("耙") , QString::fromLocal8Bit("pa") },        // ba
    { QString::fromLocal8Bit("瓸") , QString::fromLocal8Bit("bai") },       // wa
    { QString::fromLocal8Bit("兡") , QString::fromLocal8Bit("bai") },       // ke
    { QString::fromLocal8Bit("陌") , QString::fromLocal8Bit("mo") },        // bai
    { QString::fromLocal8Bit("柏") , QString::fromLocal8Bit("bai") },       // bo
    { QString::fromLocal8Bit("伴") , QString::fromLocal8Bit("ban") },       // pan
    { QString::fromLocal8Bit("拌") , QString::fromLocal8Bit("ban") },       // pan
    { QString::fromLocal8Bit("坢") , QString::fromLocal8Bit("pan") },       // ban
    { QString::fromLocal8Bit("柈") , QString::fromLocal8Bit("pan") },       // ban
    { QString::fromLocal8Bit("膀") , QString::fromLocal8Bit("bang") },      // pang
    { QString::fromLocal8Bit("旁") , QString::fromLocal8Bit("pang") },      // bang
    { QString::fromLocal8Bit("蚌") , QString::fromLocal8Bit("bang") },      // beng
    { QString::fromLocal8Bit("棓") , QString::fromLocal8Bit("bang") },      // bei
    { QString::fromLocal8Bit("搒") , QString::fromLocal8Bit("bang") },      // peng
    { QString::fromLocal8Bit("磅") , QString::fromLocal8Bit("bang") },      // pang
    { QString::fromLocal8Bit("炮") , QString::fromLocal8Bit("pao") },       // bao
    { QString::fromLocal8Bit("枹") , QString::fromLocal8Bit("bao") },       // fu
    { QString::fromLocal8Bit("薄") , QString::fromLocal8Bit("bo") },        // bao
    { QString::fromLocal8Bit("堡") , QString::fromLocal8Bit("bao") },       // bu pu
    { QString::fromLocal8Bit("刨") , QString::fromLocal8Bit("pao") },       // bao
    { QString::fromLocal8Bit("袌") , QString::fromLocal8Bit("pao") },       // bao
    { QString::fromLocal8Bit("暴") , QString::fromLocal8Bit("bao") },       // pu
    { QString::fromLocal8Bit("瀑") , QString::fromLocal8Bit("pu") },        // bao
    { QString::fromLocal8Bit("曝") , QString::fromLocal8Bit("bao") },       // pu
    { QString::fromLocal8Bit("陂") , QString::fromLocal8Bit("bei") },       // pi po
    { QString::fromLocal8Bit("椑") , QString::fromLocal8Bit("bei") },       // pi
    { QString::fromLocal8Bit("孛") , QString::fromLocal8Bit("bei") },       // bo
    { QString::fromLocal8Bit("被") , QString::fromLocal8Bit("bei") },       // pi
    { QString::fromLocal8Bit("贲") , QString::fromLocal8Bit("ben") },       // bi
    { QString::fromLocal8Bit("夯") , QString::fromLocal8Bit("hang") },      // ben
    { QString::fromLocal8Bit("萙") , QString::fromLocal8Bit("ta") },        // ku lai bi
    { QString::fromLocal8Bit("蛯") , QString::fromLocal8Bit("bi") },        // e
    { QString::fromLocal8Bit("鎞") , QString::fromLocal8Bit("bi") },        // pi
    { QString::fromLocal8Bit("吡") , QString::fromLocal8Bit("pi") },        // bi
    { QString::fromLocal8Bit("箄") , QString::fromLocal8Bit("pai") },       // bi
    { QString::fromLocal8Bit("芘") , QString::fromLocal8Bit("bi") },        // pi
    { QString::fromLocal8Bit("泌") , QString::fromLocal8Bit("mi") },        // bi
    { QString::fromLocal8Bit("秘") , QString::fromLocal8Bit("mi") },        // bi
    { QString::fromLocal8Bit("裨") , QString::fromLocal8Bit("bi") },        // pi
    { QString::fromLocal8Bit("辟") , QString::fromLocal8Bit("pi") },        // bi
    { QString::fromLocal8Bit("睥") , QString::fromLocal8Bit("pi") },        // bi
    { QString::fromLocal8Bit("扁") , QString::fromLocal8Bit("bian") },      // pian
    { QString::fromLocal8Bit("褊") , QString::fromLocal8Bit("bian") },      // pian
    { QString::fromLocal8Bit("便") , QString::fromLocal8Bit("bian") },      // pian
    { QString::fromLocal8Bit("缏") , QString::fromLocal8Bit("bian") },      // pian
    { QString::fromLocal8Bit("杓") , QString::fromLocal8Bit("shao") },      // biao
    { QString::fromLocal8Bit("骠") , QString::fromLocal8Bit("biao") },      // piao
    { QString::fromLocal8Bit("麃") , QString::fromLocal8Bit("pao") },       // biao
    { QString::fromLocal8Bit("玢") , QString::fromLocal8Bit("fen") },       // bin
    { QString::fromLocal8Bit("槟") , QString::fromLocal8Bit("bing") },      // bin
    { QString::fromLocal8Bit("屏") , QString::fromLocal8Bit("ping") },      // bing
    { QString::fromLocal8Bit("绠") , QString::fromLocal8Bit("geng") },      // bing
    { QString::fromLocal8Bit("卜") , QString::fromLocal8Bit("bu") },        // bo
    { QString::fromLocal8Bit("畓") , QString::fromLocal8Bit("da") },        // bo
    { QString::fromLocal8Bit("泊") , QString::fromLocal8Bit("po") },        // bo
    { QString::fromLocal8Bit("魄") , QString::fromLocal8Bit("po") },        // tuo bo
    { QString::fromLocal8Bit("埔") , QString::fromLocal8Bit("pu") },        // bu
    { QString::fromLocal8Bit("拆") , QString::fromLocal8Bit("chai") },      // ca
    { QString::fromLocal8Bit("嚓") , QString::fromLocal8Bit("ca") },        // cha
    { QString::fromLocal8Bit("偲") , QString::fromLocal8Bit("si") },        // cai
    { QString::fromLocal8Bit("参") , QString::fromLocal8Bit("can") },       // cen san shen
    { QString::fromLocal8Bit("篸") , QString::fromLocal8Bit("can") },       // zan
    { QString::fromLocal8Bit("掺") , QString::fromLocal8Bit("chan") },      // shan can
    { QString::fromLocal8Bit("孱") , QString::fromLocal8Bit("chan") },      // can
    { QString::fromLocal8Bit("臧") , QString::fromLocal8Bit("zang") },      // cang
    { QString::fromLocal8Bit("藏") , QString::fromLocal8Bit("cang") },      // zang
    { QString::fromLocal8Bit("猠") , QString::fromLocal8Bit("o") },         // ce
    { QString::fromLocal8Bit("硛") , QString::fromLocal8Bit("ce") },        // ke o
    { QString::fromLocal8Bit("侧") , QString::fromLocal8Bit("ce") },        // ze zhai
    { QString::fromLocal8Bit("筴") , QString::fromLocal8Bit("ce") },        // jia
    { QString::fromLocal8Bit("噌") , QString::fromLocal8Bit("cheng") },     // ceng
    { QString::fromLocal8Bit("曾") , QString::fromLocal8Bit("ceng") },      // zeng
    { QString::fromLocal8Bit("差") , QString::fromLocal8Bit("cha") },       // chai ci
    { QString::fromLocal8Bit("喳") , QString::fromLocal8Bit("zha") },       // cha
    { QString::fromLocal8Bit("查") , QString::fromLocal8Bit("cha") },       // zha
    { QString::fromLocal8Bit("猹") , QString::fromLocal8Bit("cha") },       // zha
    { QString::fromLocal8Bit("楂") , QString::fromLocal8Bit("zha") },       // cha
    { QString::fromLocal8Bit("槎") , QString::fromLocal8Bit("cha") },       // zha
    { QString::fromLocal8Bit("刹") , QString::fromLocal8Bit("sha") },       // cha
    { QString::fromLocal8Bit("咤") , QString::fromLocal8Bit("zha") },       // cha
    { QString::fromLocal8Bit("柴") , QString::fromLocal8Bit("chai") },      // zhai
    { QString::fromLocal8Bit("茝") , QString::fromLocal8Bit("chai") },      // zhi
    { QString::fromLocal8Bit("瘥") , QString::fromLocal8Bit("cuo") },       // chai
    { QString::fromLocal8Bit("单") , QString::fromLocal8Bit("dan") },       // shan chan
    { QString::fromLocal8Bit("禅") , QString::fromLocal8Bit("chan") },      // shan
    { QString::fromLocal8Bit("长") , QString::fromLocal8Bit("chang") },     // zhang
    { QString::fromLocal8Bit("倘") , QString::fromLocal8Bit("tang") },      // chang
    { QString::fromLocal8Bit("惝") , QString::fromLocal8Bit("chang") },     // tang
    { QString::fromLocal8Bit("绰") , QString::fromLocal8Bit("chuo") },      // chao
    { QString::fromLocal8Bit("焯") , QString::fromLocal8Bit("chao") },      // zhuo
    { QString::fromLocal8Bit("剿") , QString::fromLocal8Bit("chao") },      // jiao
    { QString::fromLocal8Bit("朝") , QString::fromLocal8Bit("chao") },      // zhao
    { QString::fromLocal8Bit("鼌") , QString::fromLocal8Bit("zhao") },      // chao
    { QString::fromLocal8Bit("嘲") , QString::fromLocal8Bit("chao") },      // zhao
    { QString::fromLocal8Bit("车") , QString::fromLocal8Bit("che") },       // ju
    { QString::fromLocal8Bit("尺") , QString::fromLocal8Bit("chi") },       // che
    { QString::fromLocal8Bit("嗔") , QString::fromLocal8Bit("chen") },      // tian
    { QString::fromLocal8Bit("称") , QString::fromLocal8Bit("cheng") },     // chen
    { QString::fromLocal8Bit("铛") , QString::fromLocal8Bit("dang") },      // cheng
    { QString::fromLocal8Bit("樘") , QString::fromLocal8Bit("tang") },      // cheng
    { QString::fromLocal8Bit("乘") , QString::fromLocal8Bit("cheng") },     // sheng
    { QString::fromLocal8Bit("盛") , QString::fromLocal8Bit("sheng") },     // cheng
    { QString::fromLocal8Bit("澄") , QString::fromLocal8Bit("cheng") },     // deng
    { QString::fromLocal8Bit("坻") , QString::fromLocal8Bit("di") },        // chi
    { QString::fromLocal8Bit("瘈") , QString::fromLocal8Bit("zhi") },       // chi
    { QString::fromLocal8Bit("涌") , QString::fromLocal8Bit("yong") },      // chong
    { QString::fromLocal8Bit("虫") , QString::fromLocal8Bit("chong") },     // hui
    { QString::fromLocal8Bit("种") , QString::fromLocal8Bit("zhong") },     // chong
    { QString::fromLocal8Bit("重") , QString::fromLocal8Bit("zhong") },     // chong
    { QString::fromLocal8Bit("仇") , QString::fromLocal8Bit("chou") },      // qiu
    { QString::fromLocal8Bit("帱") , QString::fromLocal8Bit("chou") },      // dao
    { QString::fromLocal8Bit("杻") , QString::fromLocal8Bit("niu") },       // chou
    { QString::fromLocal8Bit("臭") , QString::fromLocal8Bit("chou") },      // xiu
    { QString::fromLocal8Bit("助") , QString::fromLocal8Bit("zhu") },       // chu
    { QString::fromLocal8Bit("褚") , QString::fromLocal8Bit("zhu") },       // chuzhe
    { QString::fromLocal8Bit("畜") , QString::fromLocal8Bit("chu") },       // xu
    { QString::fromLocal8Bit("俶") , QString::fromLocal8Bit("chu") },       // ti
    { QString::fromLocal8Bit("滀") , QString::fromLocal8Bit("chu") },       // xu
    { QString::fromLocal8Bit("欻") , QString::fromLocal8Bit("xu") },        // chua
    { QString::fromLocal8Bit("啜") , QString::fromLocal8Bit("chuo") },      // chuai
    { QString::fromLocal8Bit("传") , QString::fromLocal8Bit("chuan") },     // zhuan
    { QString::fromLocal8Bit("串") , QString::fromLocal8Bit("chuan") },     // guan
    { QString::fromLocal8Bit("幢") , QString::fromLocal8Bit("zhuang") },    // chuang
    { QString::fromLocal8Bit("椎") , QString::fromLocal8Bit("zhui") },      // chui
    { QString::fromLocal8Bit("錞") , QString::fromLocal8Bit("dchun") },     // ui
    { QString::fromLocal8Bit("婼") , QString::fromLocal8Bit("ruo") },       // chuo
    { QString::fromLocal8Bit("茈") , QString::fromLocal8Bit("zi") },        // ci
    { QString::fromLocal8Bit("兹") , QString::fromLocal8Bit("zi") },        // ci
    { QString::fromLocal8Bit("伺") , QString::fromLocal8Bit("si") },        // ci
    { QString::fromLocal8Bit("枞") , QString::fromLocal8Bit("cong") },      // zong
    { QString::fromLocal8Bit("楤") , QString::fromLocal8Bit("song") },      // cong
    { QString::fromLocal8Bit("卒") , QString::fromLocal8Bit("zu") },        // cu
    { QString::fromLocal8Bit("趣") , QString::fromLocal8Bit("qu") },        // cu
    { QString::fromLocal8Bit("菆") , QString::fromLocal8Bit("zou") },       // cuan
    { QString::fromLocal8Bit("攒") , QString::fromLocal8Bit("zan") },       // cuan
    { QString::fromLocal8Bit("粹") , QString::fromLocal8Bit("cui") },       // sui
    { QString::fromLocal8Bit("蹲") , QString::fromLocal8Bit("dun") },       // cun
    { QString::fromLocal8Bit("酂") , QString::fromLocal8Bit("zan") },       // cuo
    { QString::fromLocal8Bit("鶎") , QString::fromLocal8Bit("ku") },        // ta yi da
    { QString::fromLocal8Bit("嗒") , QString::fromLocal8Bit("da") },        // ta
    { QString::fromLocal8Bit("沓") , QString::fromLocal8Bit("ta") },        // da
    { QString::fromLocal8Bit("惮") , QString::fromLocal8Bit("dan") },       // da
    { QString::fromLocal8Bit("大") , QString::fromLocal8Bit("da") },        // dai
    { QString::fromLocal8Bit("汏") , QString::fromLocal8Bit("tai") },       // da
    { QString::fromLocal8Bit("呔") , QString::fromLocal8Bit("dai") },       // tai
    { QString::fromLocal8Bit("骀") , QString::fromLocal8Bit("dai") },       // tai
    { QString::fromLocal8Bit("掸") , QString::fromLocal8Bit("dan") },       // shan
    { QString::fromLocal8Bit("黵") , QString::fromLocal8Bit("dan") },       // zhan
    { QString::fromLocal8Bit("石") , QString::fromLocal8Bit("shi") },       // dan
    { QString::fromLocal8Bit("弹") , QString::fromLocal8Bit("tan") },       // dan
    { QString::fromLocal8Bit("澹") , QString::fromLocal8Bit("dan") },       // tan
    { QString::fromLocal8Bit("乭") , QString::fromLocal8Bit("dao") },       // ri
    { QString::fromLocal8Bit("叨") , QString::fromLocal8Bit("dao") },       // tao
    { QString::fromLocal8Bit("焘") , QString::fromLocal8Bit("dao") },       // tao
    { QString::fromLocal8Bit("的") , QString::fromLocal8Bit("de") },        // di
    { QString::fromLocal8Bit("地") , QString::fromLocal8Bit("di") },        // de
    { QString::fromLocal8Bit("底") , QString::fromLocal8Bit("di") },        // de
    { QString::fromLocal8Bit("得") , QString::fromLocal8Bit("de") },        // dei
    { QString::fromLocal8Bit("嘚") , QString::fromLocal8Bit("de") },        // dei
    { QString::fromLocal8Bit("嚸") , QString::fromLocal8Bit("di") },        // mi
    { QString::fromLocal8Bit("提") , QString::fromLocal8Bit("ti") },        // di
    { QString::fromLocal8Bit("翟") , QString::fromLocal8Bit("di") },        // zhai
    { QString::fromLocal8Bit("蹢") , QString::fromLocal8Bit("di") },        // zhi
    { QString::fromLocal8Bit("杕") , QString::fromLocal8Bit("di") },        // duo
    { QString::fromLocal8Bit("揥") , QString::fromLocal8Bit("ti") },        // di
    { QString::fromLocal8Bit("阽") , QString::fromLocal8Bit("dian") },      // yan
    { QString::fromLocal8Bit("佃") , QString::fromLocal8Bit("dian") },      // tian
    { QString::fromLocal8Bit("钿") , QString::fromLocal8Bit("dian") },      // tian
    { QString::fromLocal8Bit("鸟") , QString::fromLocal8Bit("niao") },      // diao
    { QString::fromLocal8Bit("调") , QString::fromLocal8Bit("tiao") },      // zhou diao
    { QString::fromLocal8Bit("铫") , QString::fromLocal8Bit("diao") },      // yao
    { QString::fromLocal8Bit("咥") , QString::fromLocal8Bit("die") },       // xi
    { QString::fromLocal8Bit("昳") , QString::fromLocal8Bit("die") },       // yi
    { QString::fromLocal8Bit("喋") , QString::fromLocal8Bit("die") },       // zha
    { QString::fromLocal8Bit("揲") , QString::fromLocal8Bit("die") },       // she
    { QString::fromLocal8Bit("螲") , QString::fromLocal8Bit("zhi") },       // die
    { QString::fromLocal8Bit("丁") , QString::fromLocal8Bit("ding") },      // zheng
    { QString::fromLocal8Bit("町") , QString::fromLocal8Bit("ding") },      // ting
    { QString::fromLocal8Bit("铤") , QString::fromLocal8Bit("ting") },      // ding
    { QString::fromLocal8Bit("侗") , QString::fromLocal8Bit("tong") },      // dong
    { QString::fromLocal8Bit("垌") , QString::fromLocal8Bit("dong") },      // tong
    { QString::fromLocal8Bit("恫") , QString::fromLocal8Bit("dong") },      // tong
    { QString::fromLocal8Bit("峒") , QString::fromLocal8Bit("tong") },      // dong
    { QString::fromLocal8Bit("都") , QString::fromLocal8Bit("dou") },       // du
    { QString::fromLocal8Bit("读") , QString::fromLocal8Bit("du") },        // dou
    { QString::fromLocal8Bit("渎") , QString::fromLocal8Bit("du") },        // dou
    { QString::fromLocal8Bit("叾") , QString::fromLocal8Bit("du") },        // ge
    { QString::fromLocal8Bit("阇") , QString::fromLocal8Bit("du") },        // she
    { QString::fromLocal8Bit("度") , QString::fromLocal8Bit("duo") },       // du
    { QString::fromLocal8Bit("斁") , QString::fromLocal8Bit("yi") },        // du
    { QString::fromLocal8Bit("敦") , QString::fromLocal8Bit("dun") },       // dui
    { QString::fromLocal8Bit("镦") , QString::fromLocal8Bit("dui") },       // dun
    { QString::fromLocal8Bit("沌") , QString::fromLocal8Bit("dun") },       // zhuan
    { QString::fromLocal8Bit("囤") , QString::fromLocal8Bit("tun") },       // dun
    { QString::fromLocal8Bit("楯") , QString::fromLocal8Bit("dun") },       // shun
    { QString::fromLocal8Bit("鯲") , QString::fromLocal8Bit("wu") },        // ya duo ji
    { QString::fromLocal8Bit("驮") , QString::fromLocal8Bit("tuo") },       // duo
    { QString::fromLocal8Bit("堕") , QString::fromLocal8Bit("duo") },       // hui
    { QString::fromLocal8Bit("仒") , QString::fromLocal8Bit("o") },         // e
    { QString::fromLocal8Bit("旕") , QString::fromLocal8Bit("o") },         // si e
    { QString::fromLocal8Bit("襨") , QString::fromLocal8Bit("e") },         // ta
    { QString::fromLocal8Bit("欕") , QString::fromLocal8Bit("mi") },        // e
    { QString::fromLocal8Bit("恶") , QString::fromLocal8Bit("e") },         // wu
    { QString::fromLocal8Bit("哦") , QString::fromLocal8Bit("o") },         // e
    { QString::fromLocal8Bit("蛾") , QString::fromLocal8Bit("e") },         // yi
    { QString::fromLocal8Bit("阏") , QString::fromLocal8Bit("e") },         // yan
    { QString::fromLocal8Bit("椧") , QString::fromLocal8Bit("mi") },        // eng
    { QString::fromLocal8Bit("臑") , QString::fromLocal8Bit("nao") },       // er
    { QString::fromLocal8Bit("佴") , QString::fromLocal8Bit("er") },        // nai
    { QString::fromLocal8Bit("发") , QString::fromLocal8Bit("fa") },        // fei
    { QString::fromLocal8Bit("酦") , QString::fromLocal8Bit("fa") },        // po
    { QString::fromLocal8Bit("番") , QString::fromLocal8Bit("fan") },       // pan
    { QString::fromLocal8Bit("袢") , QString::fromLocal8Bit("pan") },       // fan
    { QString::fromLocal8Bit("繁") , QString::fromLocal8Bit("fan") },       // po
    { QString::fromLocal8Bit("仿") , QString::fromLocal8Bit("fang") },      // pang
    { QString::fromLocal8Bit("彷") , QString::fromLocal8Bit("pang") },      // fang
    { QString::fromLocal8Bit("芾") , QString::fromLocal8Bit("fu") },        // fei
    { QString::fromLocal8Bit("怫") , QString::fromLocal8Bit("fu") },        // fei
    { QString::fromLocal8Bit("濆") , QString::fromLocal8Bit("fen") },       // pen
    { QString::fromLocal8Bit("冯") , QString::fromLocal8Bit("feng") },      // ping
    { QString::fromLocal8Bit("佛") , QString::fromLocal8Bit("fo") },        // fu
    { QString::fromLocal8Bit("否") , QString::fromLocal8Bit("fou") },       // pi
    { QString::fromLocal8Bit("莩") , QString::fromLocal8Bit("fu") },        // piao
    { QString::fromLocal8Bit("俛") , QString::fromLocal8Bit("mian") },      // fu
    { QString::fromLocal8Bit("脯") , QString::fromLocal8Bit("pu") },        // fu
    { QString::fromLocal8Bit("乫") , QString::fromLocal8Bit("ga") },        // ri
    { QString::fromLocal8Bit("凩") , QString::fromLocal8Bit("xi") },        // la  ga
    { QString::fromLocal8Bit("軈") , QString::fromLocal8Bit("ya") },        // ga
    { QString::fromLocal8Bit("夹") , QString::fromLocal8Bit("jia") },       // ga
    { QString::fromLocal8Bit("伽") , QString::fromLocal8Bit("ga") },        // jia qie
    { QString::fromLocal8Bit("呷") , QString::fromLocal8Bit("xia") },       // ga
    { QString::fromLocal8Bit("咖") , QString::fromLocal8Bit("ka") },        // ga
    { QString::fromLocal8Bit("轧") , QString::fromLocal8Bit("zha") },       // ya  ga
    { QString::fromLocal8Bit("芥") , QString::fromLocal8Bit("jie") },       // gai
    { QString::fromLocal8Bit("盖") , QString::fromLocal8Bit("gai") },       // ge
    { QString::fromLocal8Bit("奸") , QString::fromLocal8Bit("jian") },      // gan
    { QString::fromLocal8Bit("感") , QString::fromLocal8Bit("gan") },       // han
    { QString::fromLocal8Bit("赣") , QString::fromLocal8Bit("gan") },       // gong
    { QString::fromLocal8Bit("扛") , QString::fromLocal8Bit("kang") },      // gang
    { QString::fromLocal8Bit("戆") , QString::fromLocal8Bit("gang") },      // zhuang
    { QString::fromLocal8Bit("皋") , QString::fromLocal8Bit("gao") },       // hao
    { QString::fromLocal8Bit("羙") , QString::fromLocal8Bit("mei") },       // gao
    { QString::fromLocal8Bit("镐") , QString::fromLocal8Bit("gao") },       // hao
    { QString::fromLocal8Bit("乬") , QString::fromLocal8Bit("ge") },        // ri
    { QString::fromLocal8Bit("巪") , QString::fromLocal8Bit("xi") },        // ge
    { QString::fromLocal8Bit("唟") , QString::fromLocal8Bit("ge") },        // xi
    { QString::fromLocal8Bit("仡") , QString::fromLocal8Bit("yi") },        // ge
    { QString::fromLocal8Bit("纥") , QString::fromLocal8Bit("ge") },        // he
    { QString::fromLocal8Bit("咯") , QString::fromLocal8Bit("ge") },        // ka luo
    { QString::fromLocal8Bit("革") , QString::fromLocal8Bit("ge") },        // ji
    { QString::fromLocal8Bit("鬲") , QString::fromLocal8Bit("ge") },        // li
    { QString::fromLocal8Bit("蛤") , QString::fromLocal8Bit("ge") },        // ha
    { QString::fromLocal8Bit("合") , QString::fromLocal8Bit("he") },        // ge
    { QString::fromLocal8Bit("硌") , QString::fromLocal8Bit("luo") },       // ge
    { QString::fromLocal8Bit("给") , QString::fromLocal8Bit("gei") },       // ji
    { QString::fromLocal8Bit("哏") , QString::fromLocal8Bit("gen") },       // hen
    { QString::fromLocal8Bit("红") , QString::fromLocal8Bit("hong") },      // gong
    { QString::fromLocal8Bit("唝") , QString::fromLocal8Bit("gong") },      // hong
    { QString::fromLocal8Bit("句") , QString::fromLocal8Bit("ju") },        // gou
    { QString::fromLocal8Bit("枸") , QString::fromLocal8Bit("gou") },       // ju
    { QString::fromLocal8Bit("呱") , QString::fromLocal8Bit("gua") },       // gu
    { QString::fromLocal8Bit("家") , QString::fromLocal8Bit("jia") },       // gu
    { QString::fromLocal8Bit("鹘") , QString::fromLocal8Bit("gu") },        // hu
    { QString::fromLocal8Bit("汩") , QString::fromLocal8Bit("gu") },        // yu
    { QString::fromLocal8Bit("谷") , QString::fromLocal8Bit("gu") },        // yu
    { QString::fromLocal8Bit("苦") , QString::fromLocal8Bit("ku") },        // gu
    { QString::fromLocal8Bit("贾") , QString::fromLocal8Bit("jia") },       // gu
    { QString::fromLocal8Bit("鹄") , QString::fromLocal8Bit("gu") },        // he hu
    { QString::fromLocal8Bit("嘏") , QString::fromLocal8Bit("gu") },        // jia
    { QString::fromLocal8Bit("雇") , QString::fromLocal8Bit("gu") },        // hu
    { QString::fromLocal8Bit("栝") , QString::fromLocal8Bit("gua") },       // kuo
    { QString::fromLocal8Bit("纶") , QString::fromLocal8Bit("lun") },       // guan
    { QString::fromLocal8Bit("矜") , QString::fromLocal8Bit("jin") },       // qin guan
    { QString::fromLocal8Bit("莞") , QString::fromLocal8Bit("guan") },      // wan
    { QString::fromLocal8Bit("归") , QString::fromLocal8Bit("gui") },       // kui
    { QString::fromLocal8Bit("龟") , QString::fromLocal8Bit("gui") },       // jun qiu
    { QString::fromLocal8Bit("廆") , QString::fromLocal8Bit("gui") },       // hui wei
    { QString::fromLocal8Bit("鲑") , QString::fromLocal8Bit("gui") },       // hua xie
    { QString::fromLocal8Bit("氿") , QString::fromLocal8Bit("jiu") },       // gui
    { QString::fromLocal8Bit("炅") , QString::fromLocal8Bit("jiong") },     // gui
    { QString::fromLocal8Bit("炔") , QString::fromLocal8Bit("que") },       // gui
    { QString::fromLocal8Bit("柜") , QString::fromLocal8Bit("gui") },       // ju
    { QString::fromLocal8Bit("桧") , QString::fromLocal8Bit("hui") },       // gui
    { QString::fromLocal8Bit("鳜") , QString::fromLocal8Bit("gui") },       // jue
    { QString::fromLocal8Bit("涡") , QString::fromLocal8Bit("wo") },        // guo
    { QString::fromLocal8Bit("乤") , QString::fromLocal8Bit("ha") },        // ri
    { QString::fromLocal8Bit("扖") , QString::fromLocal8Bit("ru") },        // me  ha
    { QString::fromLocal8Bit("溌") , QString::fromLocal8Bit("tu") },        // ha
    { QString::fromLocal8Bit("噺") , QString::fromLocal8Bit("xi") },        // ha na
    { QString::fromLocal8Bit("鱩") , QString::fromLocal8Bit("ta") },        // ha
    { QString::fromLocal8Bit("虾") , QString::fromLocal8Bit("xia") },       // ha
    { QString::fromLocal8Bit("咳") , QString::fromLocal8Bit("ke") },        // hai
    { QString::fromLocal8Bit("嗨") , QString::fromLocal8Bit("hai") },       // hei
    { QString::fromLocal8Bit("还") , QString::fromLocal8Bit("huan") },      // hai
    { QString::fromLocal8Bit("害") , QString::fromLocal8Bit("hai") },       // he
    { QString::fromLocal8Bit("炕") , QString::fromLocal8Bit("kang") },      // hang
    { QString::fromLocal8Bit("行") , QString::fromLocal8Bit("xing") },      // hang heng
    { QString::fromLocal8Bit("吭") , QString::fromLocal8Bit("keng") },      // hang
    { QString::fromLocal8Bit("巷") , QString::fromLocal8Bit("xiang") },     // hang
    { QString::fromLocal8Bit("貉") , QString::fromLocal8Bit("he") },        // hao
    { QString::fromLocal8Bit("遤") , QString::fromLocal8Bit("he") },        // wo
    { QString::fromLocal8Bit("和") , QString::fromLocal8Bit("he") },        // hu huo
    { QString::fromLocal8Bit("核") , QString::fromLocal8Bit("he") },        // hu
    { QString::fromLocal8Bit("吓") , QString::fromLocal8Bit("xia") },       // he
    { QString::fromLocal8Bit("猲") , QString::fromLocal8Bit("xie") },       // he
    { QString::fromLocal8Bit("熇") , QString::fromLocal8Bit("he") },        // kao
    { QString::fromLocal8Bit("嘿") , QString::fromLocal8Bit("hei") },       // mo
    { QString::fromLocal8Bit("戏") , QString::fromLocal8Bit("xi") },        // hu hui
    { QString::fromLocal8Bit("芴") , QString::fromLocal8Bit("wu") },        // hu
    { QString::fromLocal8Bit("浒") , QString::fromLocal8Bit("hu") },        // xu
    { QString::fromLocal8Bit("唬") , QString::fromLocal8Bit("hu") },        // xia
    { QString::fromLocal8Bit("楛") , QString::fromLocal8Bit("ku") },        // hu
    { QString::fromLocal8Bit("砉") , QString::fromLocal8Bit("xu") },        // hua
    { QString::fromLocal8Bit("郇") , QString::fromLocal8Bit("xun") },       // huan
    { QString::fromLocal8Bit("圜") , QString::fromLocal8Bit("yuan") },      // huan
    { QString::fromLocal8Bit("嬛") , QString::fromLocal8Bit("huan") },      // qiong xuan
    { QString::fromLocal8Bit("眩") , QString::fromLocal8Bit("xuan") },      // huan
    { QString::fromLocal8Bit("炜") , QString::fromLocal8Bit("wei") },       // hui
    { QString::fromLocal8Bit("珲") , QString::fromLocal8Bit("hun") },       // hui
    { QString::fromLocal8Bit("睢") , QString::fromLocal8Bit("hui") },       // sui
    { QString::fromLocal8Bit("会") , QString::fromLocal8Bit("hui") },       // kuai
    { QString::fromLocal8Bit("浍") , QString::fromLocal8Bit("hui") },       // kuai
    { QString::fromLocal8Bit("哕") , QString::fromLocal8Bit("yue") },       // hui
    { QString::fromLocal8Bit("荤") , QString::fromLocal8Bit("hun") },       // xun
    { QString::fromLocal8Bit("奇") , QString::fromLocal8Bit("qi") },        // ji
    { QString::fromLocal8Bit("其") , QString::fromLocal8Bit("qi") },        // ji
    { QString::fromLocal8Bit("缉") , QString::fromLocal8Bit("ji") },        // qi
    { QString::fromLocal8Bit("稽") , QString::fromLocal8Bit("ji") },        // qi
    { QString::fromLocal8Bit("亟") , QString::fromLocal8Bit("ji") },        // qi
    { QString::fromLocal8Bit("藉") , QString::fromLocal8Bit("ji") },        // jie
    { QString::fromLocal8Bit("齐") , QString::fromLocal8Bit("qi") },        // ji
    { QString::fromLocal8Bit("系") , QString::fromLocal8Bit("xi") },        // ji
    { QString::fromLocal8Bit("荠") , QString::fromLocal8Bit("ji") },        // qi
    { QString::fromLocal8Bit("祭") , QString::fromLocal8Bit("ji") },        // zhai
    { QString::fromLocal8Bit("偈") , QString::fromLocal8Bit("jie") },       // ji
    { QString::fromLocal8Bit("嗧") , QString::fromLocal8Bit("jia") },       // lun
    { QString::fromLocal8Bit("茄") , QString::fromLocal8Bit("qie") },       // jia
    { QString::fromLocal8Bit("葭") , QString::fromLocal8Bit("jia") },       // xia
    { QString::fromLocal8Bit("假") , QString::fromLocal8Bit("jia") },       // xia
    { QString::fromLocal8Bit("价") , QString::fromLocal8Bit("jia") },       // jie
    { QString::fromLocal8Bit("浅") , QString::fromLocal8Bit("qian") },      // jian
    { QString::fromLocal8Bit("犍") , QString::fromLocal8Bit("jian") },      // qian
    { QString::fromLocal8Bit("囝") , QString::fromLocal8Bit("jian") },      // nan
    { QString::fromLocal8Bit("见") , QString::fromLocal8Bit("jian") },      // xian
    { QString::fromLocal8Bit("槛") , QString::fromLocal8Bit("kan") },       // jian
    { QString::fromLocal8Bit("将") , QString::fromLocal8Bit("jiang") },     // qiang
    { QString::fromLocal8Bit("降") , QString::fromLocal8Bit("jiang") },     // xiang
    { QString::fromLocal8Bit("强") , QString::fromLocal8Bit("qiang") },     // jiang
    { QString::fromLocal8Bit("蕉") , QString::fromLocal8Bit("jiao") },      // qiao
    { QString::fromLocal8Bit("徼") , QString::fromLocal8Bit("jiao") },      // yao
    { QString::fromLocal8Bit("嚼") , QString::fromLocal8Bit("jiao") },      // jue
    { QString::fromLocal8Bit("角") , QString::fromLocal8Bit("jiao") },      // jue
    { QString::fromLocal8Bit("侥") , QString::fromLocal8Bit("jiao") },      // yao
    { QString::fromLocal8Bit("脚") , QString::fromLocal8Bit("jiao") },      // jue
    { QString::fromLocal8Bit("湫") , QString::fromLocal8Bit("jiu") },       // qiu jiao
    { QString::fromLocal8Bit("缴") , QString::fromLocal8Bit("jiao") },      // zhuo
    { QString::fromLocal8Bit("峤") , QString::fromLocal8Bit("qiao") },      // jiao
    { QString::fromLocal8Bit("觉") , QString::fromLocal8Bit("jiao") },      // jue
    { QString::fromLocal8Bit("校") , QString::fromLocal8Bit("xiao") },      // jiao
    { QString::fromLocal8Bit("楷") , QString::fromLocal8Bit("kai") },       // jie
    { QString::fromLocal8Bit("桔") , QString::fromLocal8Bit("jie") },       // ju
    { QString::fromLocal8Bit("絜") , QString::fromLocal8Bit("xie") },       // jie
    { QString::fromLocal8Bit("解") , QString::fromLocal8Bit("jie") },       // xie
    { QString::fromLocal8Bit("廑") , QString::fromLocal8Bit("jin") },       // qin
    { QString::fromLocal8Bit("劲") , QString::fromLocal8Bit("jing") },      // jin
    { QString::fromLocal8Bit("倞") , QString::fromLocal8Bit("liang") },     // jing
    { QString::fromLocal8Bit("靓") , QString::fromLocal8Bit("liang") },     // jing
    { QString::fromLocal8Bit("且") , QString::fromLocal8Bit("qie") },       // ju
    { QString::fromLocal8Bit("苴") , QString::fromLocal8Bit("ju") },        // zu
    { QString::fromLocal8Bit("蛆") , QString::fromLocal8Bit("qu") },        // ju
    { QString::fromLocal8Bit("趄") , QString::fromLocal8Bit("qie") },       // ju
    { QString::fromLocal8Bit("咀") , QString::fromLocal8Bit("ju") },        // zui
    { QString::fromLocal8Bit("籧") , QString::fromLocal8Bit("qu") },        // ju
    { QString::fromLocal8Bit("苣") , QString::fromLocal8Bit("ju") },        // qu
    { QString::fromLocal8Bit("圈") , QString::fromLocal8Bit("quan") },      // juan
    { QString::fromLocal8Bit("卷") , QString::fromLocal8Bit("juan") },      // quan
    { QString::fromLocal8Bit("踡") , QString::fromLocal8Bit("quan") },      // juan
    { QString::fromLocal8Bit("隽") , QString::fromLocal8Bit("jun") },       // juan
    { QString::fromLocal8Bit("阙") , QString::fromLocal8Bit("que") },       // jue
    { QString::fromLocal8Bit("噱") , QString::fromLocal8Bit("xue") },       // jue
    { QString::fromLocal8Bit("筠") , QString::fromLocal8Bit("jun") },       // yun
    { QString::fromLocal8Bit("麇") , QString::fromLocal8Bit("qun") },       // jun
    { QString::fromLocal8Bit("浚") , QString::fromLocal8Bit("jun") },       // xun
    { QString::fromLocal8Bit("焌") , QString::fromLocal8Bit("jun") },       // qu
    { QString::fromLocal8Bit("凧") , QString::fromLocal8Bit("ka") },        // yi
    { QString::fromLocal8Bit("裃") , QString::fromLocal8Bit("ka") },        // mi mo xi 日
    { QString::fromLocal8Bit("聢") , QString::fromLocal8Bit("li") },        // xi ka
    { QString::fromLocal8Bit("鯑") , QString::fromLocal8Bit("ke") },        // nou zi ka
    { QString::fromLocal8Bit("鶍") , QString::fromLocal8Bit("si") },        // yi ka
    { QString::fromLocal8Bit("卡") , QString::fromLocal8Bit("ka") },        // qia
    { QString::fromLocal8Bit("厼") , QString::fromLocal8Bit("mu") },        // wu ke
    { QString::fromLocal8Bit("迲") , QString::fromLocal8Bit("o") },         // pi ke
    { QString::fromLocal8Bit("穒") , QString::fromLocal8Bit("o") },         // ke
    { QString::fromLocal8Bit("壳") , QString::fromLocal8Bit("ke") },        // qiao
    { QString::fromLocal8Bit("隗") , QString::fromLocal8Bit("wei") },       // kui
    { QString::fromLocal8Bit("鮱") , QString::fromLocal8Bit("luo") },       // la
    { QString::fromLocal8Bit("落") , QString::fromLocal8Bit("luo") },       // lao  la
    { QString::fromLocal8Bit("腊") , QString::fromLocal8Bit("la") },        // xi
    { QString::fromLocal8Bit("蜡") , QString::fromLocal8Bit("la") },        // zha
    { QString::fromLocal8Bit("癞") , QString::fromLocal8Bit("lai") },       // la
    { QString::fromLocal8Bit("莨") , QString::fromLocal8Bit("liang") },     // lang
    { QString::fromLocal8Bit("潦") , QString::fromLocal8Bit("liao") },      // lao
    { QString::fromLocal8Bit("姥") , QString::fromLocal8Bit("lao") },       // mu
    { QString::fromLocal8Bit("獠") , QString::fromLocal8Bit("liao") },      // lao
    { QString::fromLocal8Bit("络") , QString::fromLocal8Bit("luo") },       // lao
    { QString::fromLocal8Bit("烙") , QString::fromLocal8Bit("lao") },       // luo
    { QString::fromLocal8Bit("朰") , QString::fromLocal8Bit("te") },        // wu le
    { QString::fromLocal8Bit("榁") , QString::fromLocal8Bit("mu") },        // le
    { QString::fromLocal8Bit("肋") , QString::fromLocal8Bit("lei") },       // le
    { QString::fromLocal8Bit("乐") , QString::fromLocal8Bit("yue") },       // le
    { QString::fromLocal8Bit("勒") , QString::fromLocal8Bit("lei") },       // le
    { QString::fromLocal8Bit("漯") , QString::fromLocal8Bit("luo") },       // ta lei
    { QString::fromLocal8Bit("棱") , QString::fromLocal8Bit("leng") },      // ling
    { QString::fromLocal8Bit("甅") , QString::fromLocal8Bit("li") },        // wa
    { QString::fromLocal8Bit("蠡") , QString::fromLocal8Bit("li") },        // luo
    { QString::fromLocal8Bit("栎") , QString::fromLocal8Bit("li") },        // yue
    { QString::fromLocal8Bit("跞") , QString::fromLocal8Bit("li") },        // luo
    { QString::fromLocal8Bit("俩") , QString::fromLocal8Bit("liang") },     // lia
    { QString::fromLocal8Bit("飂") , QString::fromLocal8Bit("liu") },       // liao
    { QString::fromLocal8Bit("蓼") , QString::fromLocal8Bit("liao") },      // lu
    { QString::fromLocal8Bit("挘") , QString::fromLocal8Bit("lie") },       // ri
    { QString::fromLocal8Bit("六") , QString::fromLocal8Bit("liu") },       // lu
    { QString::fromLocal8Bit("陆") , QString::fromLocal8Bit("lu") },        // liu
    { QString::fromLocal8Bit("碌") , QString::fromLocal8Bit("lu") },        // liu
    { QString::fromLocal8Bit("泷") , QString::fromLocal8Bit("long") },      // shuang
    { QString::fromLocal8Bit("弄") , QString::fromLocal8Bit("nong") },      // long
    { QString::fromLocal8Bit("偻") , QString::fromLocal8Bit("lou") },       // lv
    { QString::fromLocal8Bit("露") , QString::fromLocal8Bit("lu") },        // lou
    { QString::fromLocal8Bit("绿") , QString::fromLocal8Bit("lv") },        // lu
    { QString::fromLocal8Bit("捋") , QString::fromLocal8Bit("luo") },       // lv
    { QString::fromLocal8Bit("率") , QString::fromLocal8Bit("shuai") },     // lv
    { QString::fromLocal8Bit("呣") , QString::fromLocal8Bit("m") },         // mou
    { QString::fromLocal8Bit("姆") , QString::fromLocal8Bit("mu") },        // m
    { QString::fromLocal8Bit("唜") , QString::fromLocal8Bit("si") },        // ma
    { QString::fromLocal8Bit("魸") , QString::fromLocal8Bit("na") },        // zi ma 日
    { QString::fromLocal8Bit("孖") , QString::fromLocal8Bit("zi") },        // ma
    { QString::fromLocal8Bit("抹") , QString::fromLocal8Bit("mo") },        // ma
    { QString::fromLocal8Bit("摩") , QString::fromLocal8Bit("mo") },        // ma
    { QString::fromLocal8Bit("埋") , QString::fromLocal8Bit("mai") },       // man
    { QString::fromLocal8Bit("脉") , QString::fromLocal8Bit("mai") },       // mo
    { QString::fromLocal8Bit("蔓") , QString::fromLocal8Bit("wan") },       // man
    { QString::fromLocal8Bit("尨") , QString::fromLocal8Bit("meng") },      // mang
    { QString::fromLocal8Bit("氓") , QString::fromLocal8Bit("mang") },      // meng
    { QString::fromLocal8Bit("冒") , QString::fromLocal8Bit("mao") },       // mo
    { QString::fromLocal8Bit("乄") , QString::fromLocal8Bit("shi") },       // me 日
    { QString::fromLocal8Bit("匁") , QString::fromLocal8Bit("mo") },        // ne me 日
    { QString::fromLocal8Bit("没") , QString::fromLocal8Bit("mei") },       // mo
    { QString::fromLocal8Bit("糜") , QString::fromLocal8Bit("mi") },        // mei
    { QString::fromLocal8Bit("谜") , QString::fromLocal8Bit("mi") },        // mei
    { QString::fromLocal8Bit("汶") , QString::fromLocal8Bit("wen") },       // men
    { QString::fromLocal8Bit("亹") , QString::fromLocal8Bit("wei") },       // men
    { QString::fromLocal8Bit("黾") , QString::fromLocal8Bit("min") },       // meng
    { QString::fromLocal8Bit("鼡") , QString::fromLocal8Bit("ne") },        // zu mi 日
    { QString::fromLocal8Bit("蓂") , QString::fromLocal8Bit("ming") },      // mi
    { QString::fromLocal8Bit("免") , QString::fromLocal8Bit("mian") },      // wen
    { QString::fromLocal8Bit("渑") , QString::fromLocal8Bit("mian") },      // sheng
    { QString::fromLocal8Bit("缪") , QString::fromLocal8Bit("miu") },       // mou miao
    { QString::fromLocal8Bit("乜") , QString::fromLocal8Bit("mie") },       // nie
    { QString::fromLocal8Bit("丆") , QString::fromLocal8Bit("ne") },        // o ye mo
    { QString::fromLocal8Bit("乮") , QString::fromLocal8Bit("ri") },        // mo 韩
    { QString::fromLocal8Bit("无") , QString::fromLocal8Bit("wu") },        // mo
    { QString::fromLocal8Bit("模") , QString::fromLocal8Bit("mo") },        // mu
    { QString::fromLocal8Bit("万") , QString::fromLocal8Bit("wan") },       // mo
    { QString::fromLocal8Bit("莫") , QString::fromLocal8Bit("mo") },        // mu
    { QString::fromLocal8Bit("袜") , QString::fromLocal8Bit("wa") },        // mo
    { QString::fromLocal8Bit("牟") , QString::fromLocal8Bit("mou") },       // mu
    { QString::fromLocal8Bit("那") , QString::fromLocal8Bit("na") },        // ne nei nuo
    { QString::fromLocal8Bit("南") , QString::fromLocal8Bit("nan") },       // na
    { QString::fromLocal8Bit("哪") , QString::fromLocal8Bit("na") },        // nai ne nei
    { QString::fromLocal8Bit("内") , QString::fromLocal8Bit("nei") },       // na
    { QString::fromLocal8Bit("呐") , QString::fromLocal8Bit("na") },        // ne
    { QString::fromLocal8Bit("娜") , QString::fromLocal8Bit("na") },        // nuo
    { QString::fromLocal8Bit("艿") , QString::fromLocal8Bit("nai") },       // reng
    { QString::fromLocal8Bit("呶") , QString::fromLocal8Bit("nao") },       // nu
    { QString::fromLocal8Bit("縇") , QString::fromLocal8Bit("o") },         // se ne
    { QString::fromLocal8Bit("唔") , QString::fromLocal8Bit("wu") },        // ng
    { QString::fromLocal8Bit("哛") , QString::fromLocal8Bit("po") },        // pu ni
    { QString::fromLocal8Bit("鳰") , QString::fromLocal8Bit("o") },         // ni 日
    { QString::fromLocal8Bit("溺") , QString::fromLocal8Bit("ni") },        // niao
    { QString::fromLocal8Bit("嶷") , QString::fromLocal8Bit("yi") },        // ni
    { QString::fromLocal8Bit("粘") , QString::fromLocal8Bit("zhan") },      // nian
    { QString::fromLocal8Bit("捻") , QString::fromLocal8Bit("nian") },      // nie
    { QString::fromLocal8Bit("辗") , QString::fromLocal8Bit("zhan") },      // nian
    { QString::fromLocal8Bit("尿") , QString::fromLocal8Bit("niao") },      // sui
    { QString::fromLocal8Bit("宁") , QString::fromLocal8Bit("ning") },      // zhu
    { QString::fromLocal8Bit("莻") , QString::fromLocal8Bit("xi") },        // nu 韩
    { QString::fromLocal8Bit("喏") , QString::fromLocal8Bit("nuo") },       // re
    { QString::fromLocal8Bit("疟") , QString::fromLocal8Bit("nve") },       // yao
    { QString::fromLocal8Bit("区") , QString::fromLocal8Bit("qu") },        // ou
    { QString::fromLocal8Bit("巼") , QString::fromLocal8Bit("xi") },        // pa 韩
    { QString::fromLocal8Bit("派") , QString::fromLocal8Bit("pai") },       // pa
    { QString::fromLocal8Bit("闏") , QString::fromLocal8Bit("ying") },      // pai 韩
    { QString::fromLocal8Bit("迫") , QString::fromLocal8Bit("po") },        // pai
    { QString::fromLocal8Bit("胖") , QString::fromLocal8Bit("pang") },      // pan
    { QString::fromLocal8Bit("拚") , QString::fromLocal8Bit("pin") },       // pan
    { QString::fromLocal8Bit("喸") , QString::fromLocal8Bit("xi") },        // pao 韩
    { QString::fromLocal8Bit("朴") , QString::fromLocal8Bit("pu") },        // po  piao
    { QString::fromLocal8Bit("娉") , QString::fromLocal8Bit("pin") },       // ping
    { QString::fromLocal8Bit("乶") , QString::fromLocal8Bit("po") },        // ri 韩
    { QString::fromLocal8Bit("栖") , QString::fromLocal8Bit("qi") },        // xi
    { QString::fromLocal8Bit("踦") , QString::fromLocal8Bit("qi") },        // yi
    { QString::fromLocal8Bit("蹊") , QString::fromLocal8Bit("qi") },        // xi
    { QString::fromLocal8Bit("圻") , QString::fromLocal8Bit("qi") },        // yin
    { QString::fromLocal8Bit("俟") , QString::fromLocal8Bit("si") },        // qi
    { QString::fromLocal8Bit("綮") , QString::fromLocal8Bit("qing") },      // qi
    { QString::fromLocal8Bit("契") , QString::fromLocal8Bit("qi") },        // xie
    { QString::fromLocal8Bit("砌") , QString::fromLocal8Bit("qie") },       // qi
    { QString::fromLocal8Bit("铅") , QString::fromLocal8Bit("qian") },      // yan
    { QString::fromLocal8Bit("嗛") , QString::fromLocal8Bit("xian") },      // qian
    { QString::fromLocal8Bit("荨") , QString::fromLocal8Bit("qian") },      // xun
    { QString::fromLocal8Bit("羬") , QString::fromLocal8Bit("xian") },      // qian
    { QString::fromLocal8Bit("纤") , QString::fromLocal8Bit("xian") },      // qian
    { QString::fromLocal8Bit("茜") , QString::fromLocal8Bit("xi") },        // qian
    { QString::fromLocal8Bit("倩") , QString::fromLocal8Bit("qian") },      // qing
    { QString::fromLocal8Bit("慊") , QString::fromLocal8Bit("qie") },       // qian
    { QString::fromLocal8Bit("雀") , QString::fromLocal8Bit("que") },       // qiao
    { QString::fromLocal8Bit("鞘") , QString::fromLocal8Bit("qiao") },      // shao
    { QString::fromLocal8Bit("亲") , QString::fromLocal8Bit("qin") },       // qing
    { QString::fromLocal8Bit("覃") , QString::fromLocal8Bit("tan") },       // qin
    { QString::fromLocal8Bit("溱") , QString::fromLocal8Bit("qin") },       // zhen
    { QString::fromLocal8Bit("鲭") , QString::fromLocal8Bit("qing") },      // zheng
    { QString::fromLocal8Bit("蝤") , QString::fromLocal8Bit("qiu") },       // you
    { QString::fromLocal8Bit("券") , QString::fromLocal8Bit("quan") },      // xuan
    { QString::fromLocal8Bit("芍") , QString::fromLocal8Bit("shao") },      // que
    { QString::fromLocal8Bit("荛") , QString::fromLocal8Bit("yao") },       // rao
    { QString::fromLocal8Bit("若") , QString::fromLocal8Bit("ruo") },       // re
    { QString::fromLocal8Bit("葚") , QString::fromLocal8Bit("shen") },      // ren
    { QString::fromLocal8Bit("乽") , QString::fromLocal8Bit("za") },        // ri 韩
    { QString::fromLocal8Bit("乼") , QString::fromLocal8Bit("zu") },        // ri 韩
    { QString::fromLocal8Bit("乺") , QString::fromLocal8Bit("sao") },       // ri 韩
    { QString::fromLocal8Bit("鑓") , QString::fromLocal8Bit("ya") },        // ri 日
    { QString::fromLocal8Bit("虄") , QString::fromLocal8Bit("sa") },        // ri 韩
    { QString::fromLocal8Bit("扨") , QString::fromLocal8Bit("te") },        // sa 日
    { QString::fromLocal8Bit("苆") , QString::fromLocal8Bit("su") },        // sa 日
    { QString::fromLocal8Bit("栍") , QString::fromLocal8Bit("ying") },      // sa 韩
    { QString::fromLocal8Bit("摋") , QString::fromLocal8Bit("sa") },        // sha
    { QString::fromLocal8Bit("思") , QString::fromLocal8Bit("si") },        // sai
    { QString::fromLocal8Bit("塞") , QString::fromLocal8Bit("sai") },       // se
    { QString::fromLocal8Bit("糁") , QString::fromLocal8Bit("shen") },      // san
    { QString::fromLocal8Bit("燥") , QString::fromLocal8Bit("zao") },       // sao
    { QString::fromLocal8Bit("色") , QString::fromLocal8Bit("se") },        // shai
    { QString::fromLocal8Bit("杉") , QString::fromLocal8Bit("shan") },      // sha
    { QString::fromLocal8Bit("莎") , QString::fromLocal8Bit("sha") },       // suo
    { QString::fromLocal8Bit("挲") , QString::fromLocal8Bit("sha") },       // suo
    { QString::fromLocal8Bit("噎") , QString::fromLocal8Bit("ye") },        // sha
    { QString::fromLocal8Bit("奢") , QString::fromLocal8Bit("she") },       // sha
    { QString::fromLocal8Bit("啑") , QString::fromLocal8Bit("ti") },        // sha
    { QString::fromLocal8Bit("厦") , QString::fromLocal8Bit("xia") },       // sha
    { QString::fromLocal8Bit("酾") , QString::fromLocal8Bit("shi") },       // shai
    { QString::fromLocal8Bit("栅") , QString::fromLocal8Bit("shan") },      // zha
    { QString::fromLocal8Bit("剡") , QString::fromLocal8Bit("yan") },       // shan
    { QString::fromLocal8Bit("汤") , QString::fromLocal8Bit("tang") },      // shang
    { QString::fromLocal8Bit("蛸") , QString::fromLocal8Bit("xiao") },      // shao
    { QString::fromLocal8Bit("苕") , QString::fromLocal8Bit("shao") },      // tiao
    { QString::fromLocal8Bit("畬") , QString::fromLocal8Bit("she") },       // yu
    { QString::fromLocal8Bit("折") , QString::fromLocal8Bit("zhe") },       // she
    { QString::fromLocal8Bit("蛇") , QString::fromLocal8Bit("she") },       // yi
    { QString::fromLocal8Bit("叶") , QString::fromLocal8Bit("ye") },        // xie she
    { QString::fromLocal8Bit("拾") , QString::fromLocal8Bit("shi") },       // she
    { QString::fromLocal8Bit("歙") , QString::fromLocal8Bit("she") },       // xi
    { QString::fromLocal8Bit("谁") , QString::fromLocal8Bit("shui") },      // shei
    { QString::fromLocal8Bit("籡") , QString::fromLocal8Bit("shi") },       // shen 日
    { QString::fromLocal8Bit("莘") , QString::fromLocal8Bit("shen") },      // xin
    { QString::fromLocal8Bit("什") , QString::fromLocal8Bit("shen") },      // shi
    { QString::fromLocal8Bit("椹") , QString::fromLocal8Bit("shen") },      // zhen
    { QString::fromLocal8Bit("狌") , QString::fromLocal8Bit("sheng") },     // xing
    { QString::fromLocal8Bit("省") , QString::fromLocal8Bit("sheng") },     // xing
    { QString::fromLocal8Bit("嘘") , QString::fromLocal8Bit("xu") },        // shi
    { QString::fromLocal8Bit("识") , QString::fromLocal8Bit("shi") },       // zhi
    { QString::fromLocal8Bit("食") , QString::fromLocal8Bit("shi") },       // si yi
    { QString::fromLocal8Bit("氏") , QString::fromLocal8Bit("shi") },       // zhi
    { QString::fromLocal8Bit("似") , QString::fromLocal8Bit("si") },        // shi
    { QString::fromLocal8Bit("峙") , QString::fromLocal8Bit("zhi") },       // shi
    { QString::fromLocal8Bit("螫") , QString::fromLocal8Bit("shi") },       // zhe
    { QString::fromLocal8Bit("熟") , QString::fromLocal8Bit("shu") },       // shou
    { QString::fromLocal8Bit("荼") , QString::fromLocal8Bit("tu") },        // shu
    { QString::fromLocal8Bit("属") , QString::fromLocal8Bit("shu") },       // zhu
    { QString::fromLocal8Bit("术") , QString::fromLocal8Bit("shu") },       // zhu
    { QString::fromLocal8Bit("庶") , QString::fromLocal8Bit("shu") },       // zhu
    { QString::fromLocal8Bit("说") , QString::fromLocal8Bit("shuo") },      // tuo yue shui
    { QString::fromLocal8Bit("忪") , QString::fromLocal8Bit("song") },      // zhong
    { QString::fromLocal8Bit("宿") , QString::fromLocal8Bit("su") },        // xiu
    { QString::fromLocal8Bit("缩") , QString::fromLocal8Bit("suo") },       // su
    { QString::fromLocal8Bit("燵") , QString::fromLocal8Bit("tui") },       // ta 日
    { QString::fromLocal8Bit("拓") , QString::fromLocal8Bit("tuo") },       // ta
    { QString::fromLocal8Bit("潭") , QString::fromLocal8Bit("tan") },       // xun
    { QString::fromLocal8Bit("陶") , QString::fromLocal8Bit("tao") },       // yao
    { QString::fromLocal8Bit("罀") , QString::fromLocal8Bit("yo") },        // zhao te 日
    { QString::fromLocal8Bit("忒") , QString::fromLocal8Bit("tui") },       // te
    { QString::fromLocal8Bit("擿") , QString::fromLocal8Bit("ti") },        // zhi
    { QString::fromLocal8Bit("荑") , QString::fromLocal8Bit("yi") },        // ti
    { QString::fromLocal8Bit("裼") , QString::fromLocal8Bit("xi") },        // ti
    { QString::fromLocal8Bit("僮") , QString::fromLocal8Bit("tong") },      // zhuang
    { QString::fromLocal8Bit("侻") , QString::fromLocal8Bit("tuo") },       // tui
    { QString::fromLocal8Bit("褪") , QString::fromLocal8Bit("tui") },       // tun
    { QString::fromLocal8Bit("屯") , QString::fromLocal8Bit("tun") },       // zhun
    { QString::fromLocal8Bit("崴") , QString::fromLocal8Bit("wei") },       // wai
    { QString::fromLocal8Bit("菀") , QString::fromLocal8Bit("wan") },       // yu
    { QString::fromLocal8Bit("尢") , QString::fromLocal8Bit("you") },       // wang
    { QString::fromLocal8Bit("亡") , QString::fromLocal8Bit("wang") },      // wu
    { QString::fromLocal8Bit("圩") , QString::fromLocal8Bit("wei") },       // xu
    { QString::fromLocal8Bit("尾") , QString::fromLocal8Bit("wei") },       // yi
    { QString::fromLocal8Bit("尉") , QString::fromLocal8Bit("wei") },       // yu
    { QString::fromLocal8Bit("遗") , QString::fromLocal8Bit("yi") },        // wei
    { QString::fromLocal8Bit("蔚") , QString::fromLocal8Bit("wei") },       // yu
    { QString::fromLocal8Bit("挝") , QString::fromLocal8Bit("wo") },        // zhua
    { QString::fromLocal8Bit("涴") , QString::fromLocal8Bit("wan") },       // yuan wo
    { QString::fromLocal8Bit("於") , QString::fromLocal8Bit("yu") },        // wu
    { QString::fromLocal8Bit("铻") , QString::fromLocal8Bit("wu") },        // yu
    { QString::fromLocal8Bit("夞") , QString::fromLocal8Bit("yi") },        // xi 韩
    { QString::fromLocal8Bit("硳") , QString::fromLocal8Bit("ze") },        // xi 韩
    { QString::fromLocal8Bit("褶") , QString::fromLocal8Bit("zhe") },       // xi
    { QString::fromLocal8Bit("洗") , QString::fromLocal8Bit("xi") },        // xian
    { QString::fromLocal8Bit("铣") , QString::fromLocal8Bit("xi") },        // xian
    { QString::fromLocal8Bit("县") , QString::fromLocal8Bit("xian") },      // xuan
    { QString::fromLocal8Bit("削") , QString::fromLocal8Bit("xiao") },      // xue
    { QString::fromLocal8Bit("邪") , QString::fromLocal8Bit("xie") },        // ye
    { QString::fromLocal8Bit("荥") , QString::fromLocal8Bit("ying") },       // xing
    { QString::fromLocal8Bit("褎") , QString::fromLocal8Bit("you") },        // xiu
    { QString::fromLocal8Bit("吁") , QString::fromLocal8Bit("yu") },         // xu
    { QString::fromLocal8Bit("芧") , QString::fromLocal8Bit("zhu") },        // xu
    { QString::fromLocal8Bit("窨") , QString::fromLocal8Bit("yin") },        // xun
    { QString::fromLocal8Bit("厌") , QString::fromLocal8Bit("yan") },        // ya
    { QString::fromLocal8Bit("咽") , QString::fromLocal8Bit("yan") },        // ye
    { QString::fromLocal8Bit("殷") , QString::fromLocal8Bit("yin") },        // yan
    { QString::fromLocal8Bit("芫") , QString::fromLocal8Bit("yuan") },       // yan
    { QString::fromLocal8Bit("约") , QString::fromLocal8Bit("yue") },        // yao
    { QString::fromLocal8Bit("繇") , QString::fromLocal8Bit("yao") },        // you zhou
    { QString::fromLocal8Bit("钥") , QString::fromLocal8Bit("yao") },        // yue
    { QString::fromLocal8Bit("拽") , QString::fromLocal8Bit("zhuai") },      // ye
    { QString::fromLocal8Bit("育") , QString::fromLocal8Bit("yu") },         // yo
    { QString::fromLocal8Bit("喁") , QString::fromLocal8Bit("yong") },       // yu
    { QString::fromLocal8Bit("柚") , QString::fromLocal8Bit("you") },        // zhu
    { QString::fromLocal8Bit("粥") , QString::fromLocal8Bit("zhou") },       // yu
    { QString::fromLocal8Bit("熨") , QString::fromLocal8Bit("yun") },        // yu
    { QString::fromLocal8Bit("员") , QString::fromLocal8Bit("yuan") },       // yun
    { QString::fromLocal8Bit("扎") , QString::fromLocal8Bit("zha") },        // za
    { QString::fromLocal8Bit("拶") , QString::fromLocal8Bit("zan") },        // za
    { QString::fromLocal8Bit("囋") , QString::fromLocal8Bit("za") },         // zan
    { QString::fromLocal8Bit("咋") , QString::fromLocal8Bit("za") },         // ze zha
    { QString::fromLocal8Bit("甾") , QString::fromLocal8Bit("zai") },        // zi
    { QString::fromLocal8Bit("仔") , QString::fromLocal8Bit("zi") },         // zai
    { QString::fromLocal8Bit("奘") , QString::fromLocal8Bit("zang") },       // zhuang
    { QString::fromLocal8Bit("责") , QString::fromLocal8Bit("ze") },         // zhai
    { QString::fromLocal8Bit("择") , QString::fromLocal8Bit("ze") },         // zhai
    { QString::fromLocal8Bit("综") , QString::fromLocal8Bit("zong") },       // zeng
    { QString::fromLocal8Bit("着") , QString::fromLocal8Bit("zhuo") },       // zhao
    { QString::fromLocal8Bit("啁") , QString::fromLocal8Bit("zhou") },       // zhao
    { QString::fromLocal8Bit("爪") , QString::fromLocal8Bit("zhua") },       // zhao
    { QString::fromLocal8Bit("这") , QString::fromLocal8Bit("zhe") },        // zhei
    { QString::fromLocal8Bit("吱") , QString::fromLocal8Bit("zhi") },        // zi
    { QString::fromLocal8Bit("祝") , QString::fromLocal8Bit("zhu") },        // zhou
    { QString::fromLocal8Bit("躅") , QString::fromLocal8Bit("zhuo") },       // zhu
    { QString::fromLocal8Bit("转") , QString::fromLocal8Bit("zhuan") },      // zhuai
    { QString::fromLocal8Bit("赚") , QString::fromLocal8Bit("zhuan") },      // zuan
    { QString::fromLocal8Bit("篹") , QString::fromLocal8Bit("zuan") },       // zhuan
    { QString::fromLocal8Bit("觜") , QString::fromLocal8Bit("zui") },        // zi

    { QString::fromLocal8Bit("鲅"), QString::fromLocal8Bit("ba") },           // bo
    { QString::fromLocal8Bit(""), QString::fromLocal8Bit("pa") },           // ba
    { QString::fromLocal8Bit("扳"), QString::fromLocal8Bit("ban") },          // pan
    { QString::fromLocal8Bit("般"), QString::fromLocal8Bit("ban") },          // bo pan
    { QString::fromLocal8Bit("剥"), QString::fromLocal8Bit("bao") },          // bo
    { QString::fromLocal8Bit("趵"), QString::fromLocal8Bit("bao") },          // bo
    { QString::fromLocal8Bit("蕃"), QString::fromLocal8Bit("fan") },          // bo
    { QString::fromLocal8Bit("嗀"), QString::fromLocal8Bit("gu") },           // hu
    { QString::fromLocal8Bit("桁"), QString::fromLocal8Bit("heng") },         // hang
    { QString::fromLocal8Bit("珩"), QString::fromLocal8Bit("heng") },         // hang
    { QString::fromLocal8Bit("牙"), QString::fromLocal8Bit("ya") },           // he
    { QString::fromLocal8Bit(""), QString::fromLocal8Bit("song") },         // yu
    { QString::fromLocal8Bit("嘬"), QString::fromLocal8Bit("zuo") },          // chuai
    { QString::fromLocal8Bit("撮"), QString::fromLocal8Bit("cuo") },          // zuo
    { QString::fromLocal8Bit("笮"), QString::fromLocal8Bit("zuo") },          // ze
    { QString::fromLocal8Bit("琢"), QString::fromLocal8Bit("zhuo") },         // zuo
};


/*
0. 汉字拼音表，来源于 http://xh.5156edu.com/pinyi.html （需要自己获取数据）
1. 在'bo'添加'卜' ; 'de'添加'的' ; 'wan'添加'涴' ; 'ta'添加'他'
  （获取到的数据有缺失，是网站的问题，这里直接补全）
2. ü 用 v 代替
*/
hanziTableS hanziTables[g_length_hanziTables] =
{
{ QString::fromLocal8Bit("a"), QString::fromLocal8Bit("a"), QString::fromLocal8Bit("吖阿呵啊腌锕錒嗄厑") },
{ QString::fromLocal8Bit("a"), QString::fromLocal8Bit("ao"), QString::fromLocal8Bit("凹柪梎軪熬爊敖厫隞蔜遨廒嗷嗸獓嶅滶獒摮璈磝螯聱翱翶謷謸鳌翺嚣鏖鷔鰲鼇艹夭芺抝拗袄镺媪媼襖岙岰垇坳傲奡奥奧骜嫯慠懊墺澳嶴擙鏊驁澚鱜") },
{ QString::fromLocal8Bit("a"), QString::fromLocal8Bit("ang"), QString::fromLocal8Bit("肮骯卬仰岇昂昻枊盎醠") },
{ QString::fromLocal8Bit("a"), QString::fromLocal8Bit("ai"), QString::fromLocal8Bit("哎哀诶唉娭挨埃溾嗳锿鎄捱皑啀凒溰敱敳嘊皚癌騃佁毐昹欸娾矮蔼躷噯濭藹譪霭靄艾阨伌爱砹硋隘嗌嫒塧碍愛叆暧瑷僾噫壒懓嬡薆鴱餲璦曖懝皧瞹馤礙譺鑀靉閊魞﨟鱛鱫") },
{ QString::fromLocal8Bit("a"), QString::fromLocal8Bit("an"), QString::fromLocal8Bit("厂广安侒峖桉氨庵偣谙菴萻葊媕腤痷鹌誝蓭鞍鞌諳盦馣鮟盫鵪鶕韽玵啽雸儑垵俺唵埯铵晻揞罯銨屵犴岸按洝荌胺豻案婩隌堓暗貋錌闇黯") },

{ QString::fromLocal8Bit("b"), QString::fromLocal8Bit("bai"), QString::fromLocal8Bit("挀掰白犤百伯佰陌柏栢捭絔摆擺襬庍呗拝败拜敗猈稗粺薭贁韛瓸竡粨兡") },
{ QString::fromLocal8Bit("b"), QString::fromLocal8Bit("ba"), QString::fromLocal8Bit("丷八仈巴叭朳玐吧岜扷芭夿疤柭釟蚆粑笆捌哵羓豝鲃叐茇妭拔炦胈癹菝軷詙跋颰魃鼥把钯鈀靶伯弝坝爸杷垻罢耙跁鲅罷鮁覇矲霸壩灞欛抜鎺鯐") },
{ QString::fromLocal8Bit("b"), QString::fromLocal8Bit("ban"), QString::fromLocal8Bit("扳肦攽班般颁斑斒搬頒鳻瘢螌褩癍辬阪岅坂板版昄瓪钣粄舨鈑蝂魬闆办半伴扮拌姅绊坢怑柈秚絆湴鉡靽辦瓣螁") },
{ QString::fromLocal8Bit("b"), QString::fromLocal8Bit("bang"), QString::fromLocal8Bit("邦帮垹梆捠浜邫幇幚縍幫鞤绑綁榜牓膀玤挷旁蚌棒棓傍谤蒡搒塝稖蜯镑磅艕謗鎊") },
{ QString::fromLocal8Bit("b"), QString::fromLocal8Bit("bao"), QString::fromLocal8Bit("勹包苞孢炮枹胞剥剝笣龅煲裦褒蕔襃闁齙窇雹薄宝饱怉鸨保宲珤葆堡堢媬寚飽飹褓駂鳵鴇緥賲寳寶靌勽刨报抱铇豹趵蚫菢袌報鉋鲍骲髱暴虣鮑曓儤瀑爆犦曝忁鑤佨藵") },
{ QString::fromLocal8Bit("b"), QString::fromLocal8Bit("ben"), QString::fromLocal8Bit("奔泍贲犇锛錛本苯奙畚翉楍夯坌倴逩桳笨捹渀撪") },
{ QString::fromLocal8Bit("b"), QString::fromLocal8Bit("bei"), QString::fromLocal8Bit("陂卑杯柸背盃桮椑揹悲鹎碑藣鵯北鉳贝狈孛邶貝牬昁苝备郥钡被倍俻狽悖梖偝偹鄁珼琲惫軰備僃棓辈焙蓓蛽碚愂禙犕褙誖鞁骳鋇輩糒憊鞴鐾唄") },
{ QString::fromLocal8Bit("b"), QString::fromLocal8Bit("beng"), QString::fromLocal8Bit("伻祊奟崩绷閍絣痭嵭嘣綳繃甭甮埄埲菶琫琣鞛迸泵蚌逬揼塴甏镚蹦鏰") },
{ QString::fromLocal8Bit("b"), QString::fromLocal8Bit("bi"), QString::fromLocal8Bit("皀屄偪逼毴楅榌豍鵖螕鲾鎞鰏荸鼻匕比朼夶吡妣沘佊疕彼毞柀秕笔粃舭俾啚筆鄙箄聛貏币必毕闭庇佖诐芘邲迊坒怭怶苾妼咇泌畀畁哔荜陛贲毖柲珌疪秘铋毙狴畢袐粊笓閉閇婢庳萆萞梐敝赑堛愊愎皕禆弼弻湢詖筚賁貱蜌裨辟跸閟飶鉍滗滭嗶彃蓖蓽腷睥睤痹痺煏熚碧蔽弊鄪獙幣綼箅箆馝髲駜襅幤潷罼獘壁廦嬖避薜篦篳縪觱鮅蹕髀濞斃臂奰鏎饆鄨璧繴襣襞鞸魓韠躄躃驆鷝鐴贔朇鷩鼊萙蛯嬶") },
{ QString::fromLocal8Bit("b"), QString::fromLocal8Bit("bian"), QString::fromLocal8Bit("边炞砭笾萹编猵煸牑甂箯蝙糄編鞕鍽鳊獱邉邊鞭鯿鯾籩贬扁窆匾貶惼褊稨碥鴘藊卞弁抃汳汴苄釆忭玣变変昪便覍徧遍缏揙閞辡諚緶艑辨辩辧辫辮辯變峅") },
{ QString::fromLocal8Bit("b"), QString::fromLocal8Bit("biao"), QString::fromLocal8Bit("杓标飑骉髟彪淲猋脿颮滮摽骠蔈幖墂麃標熛膘镖瘭磦飙飚儦颷謤藨瀌爂鏢贆臕穮镳飆飇飈飊鑣驫嫑表婊裱諘錶褾檦俵鳔鋲") },
{ QString::fromLocal8Bit("b"), QString::fromLocal8Bit("bie"), QString::fromLocal8Bit("憋瘪蟞鳖癟鱉鼈虌龞别別莂蛂徶襒蹩彆") },
{ QString::fromLocal8Bit("b"), QString::fromLocal8Bit("bin"), QString::fromLocal8Bit("邠玢宾彬梹椕傧斌滨缤賓賔豩槟瑸镔儐濒頻豳濱濵虨璸檳瀕霦繽蠙鑌顮摈殡膑髩鬂擯殯臏髌鬓髕鬢") },
{ QString::fromLocal8Bit("b"), QString::fromLocal8Bit("bing"), QString::fromLocal8Bit("冫仌氷并冰兵屏栟掤槟丙邴陃苪怲抦秉昞昺炳柄饼绠眪蛃偋寎棅鈵禀稟鉼餅餠鞞幷並併庰倂栤竝病窉傡摒誁鮩靐垪鞆") },
{ QString::fromLocal8Bit("b"), QString::fromLocal8Bit("bo"), QString::fromLocal8Bit("卜癶癷波拨玻饽钵盋砵哱剥般趵缽紴袰菠啵溊碆鉢鲅僠蕃嶓播撥餑礡蹳驋鱍仢伯驳孛肑瓝泊狛帛郣勃侼胉柏袯瓟秡钹铂浡挬亳萡淿脖袹舶鹁渤葧博猼馎愽搏鈸鉑鲌魄馛駁艊箔牔煿膊僰镈踣鋍馞駮鮊薄謈襏簙餺鵓鎛嚗懪髆髉糪襮欂礴鑮跛簸孹檗擘譒蘗畓蔔") },
{ QString::fromLocal8Bit("b"), QString::fromLocal8Bit("bu"), QString::fromLocal8Bit("逋庯峬钸晡鈽誧餔錻鳪轐醭卜卟补哺捕堡補鵏鸔不布吥佈步歨歩怖咘钚柨悑部勏捗埔埗荹埠瓿鈈蔀廍踄郶餢篰簿巭") },

{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("ca"), QString::fromLocal8Bit("拆擦攃嚓礤礸遪乲") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("cai"), QString::fromLocal8Bit("偲猜才财材財裁纔毝采倸啋寀婇彩採埰棌睬跴綵踩宷菜蔡縩") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("can"), QString::fromLocal8Bit("参參叄骖飡湌叅喰傪嬠餐驂残蚕惭殘慚蝅慙蠺蠶惨朁慘憯穇篸黪黲灿掺孱粲薒澯燦璨謲儏爘") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("cang"), QString::fromLocal8Bit("仓仺伧苍沧鸧舱倉傖凔滄蒼獊嵢螥艙鶬臧藏鑶賶濸") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("cao"), QString::fromLocal8Bit("撡操糙曺曹蓸嘈嶆漕慒槽褿螬艚鏪艸草愺懆騲肏鄵襙鼜") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("ce"), QString::fromLocal8Bit("夨册冊侧厕荝拺测恻敇粣笧萗厠側萴策測廁惻筴筞蓛箣憡簎猠硛") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("cen"), QString::fromLocal8Bit("参嵾岑涔埁笒梣") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("ceng"), QString::fromLocal8Bit("噌层曾層嶒竲驓蹭") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("cha"), QString::fromLocal8Bit("叉扱扠杈臿差挿偛馇插揷嗏喳锸碴銟艖疀嚓鍤餷茬茶垞查査秅猹嵖搽靫詧楂槎察檫衩蹅镲鑔奼汊岔刹侘诧剎姹咤紁詫") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("chai"), QString::fromLocal8Bit("芆肞钗拆差釵犲侪柴豺祡喍儕茝虿訍袃瘥蠆囆") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("chan"), QString::fromLocal8Bit("辿觇梴掺搀覘裧摻鋓幨襜攙苂单谗婵馋湹孱棎禅煘缠蝉獑僝誗鋋儃廛嬋潺潹緾澶磛鄽螹毚蟬瀍酁儳蟾劖壥嚵瀺巉欃纏纒躔镵艬讒鑱饞产刬旵丳斺浐剗谄阐铲產産蒇剷摌滻蕆幝諂閳骣燀簅冁醦繟鏟譂闡囅灛讇忏硟摲懴颤懺羼韂顫") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("chang"), QString::fromLocal8Bit("伥昌倡倀菖阊娼猖淐琩锠裮錩閶鲳鯧鼚长仧仩场兏肠苌镸長尝倘偿萇徜常瓺場腸甞裳塲嫦嘗膓瑺嚐償鲿鱨厂昶惝敞厰僘廠氅鋹怅玚畅鬯唱悵焻暢畼誯韔椙蟐") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("che"), QString::fromLocal8Bit("车伡車俥砗莗唓硨蛼尺扯偖撦屮彻迠坼烢聅硩掣頙撤澈徹瞮勶爡") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("chao"), QString::fromLocal8Bit("吵抄弨怊欩钞绰訬超鈔焯剿窼牊晁巢巣朝鼌鄛漅潮樔嘲窲罺鼂轈謿炒眧焣煼麨巐仦仯耖觘") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("chen"), QString::fromLocal8Bit("抻郴捵棽琛嗔綝賝諃瞋謓尘臣辰忱沉陈迧茞莀莐宸陳栕桭谌訦軙敐晨鈂愖煁蔯樄塵敶瘎霃諶螴薼麎曟鷐趻硶碜墋夦踸磣鍖贂衬疢称龀趁趂榇齓齔儭谶嚫櫬襯讖烥") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("cheng"), QString::fromLocal8Bit("阷泟爯柽棦称秤浾琤偁铛碀蛏晿牚赪靗憆稱摚撑撐噌樘緽頳赬瞠橕檉竀罉蟶穪鏿鐣饓丞成朾呈郕诚枨承荿宬娍峸洆城乗乘埕挰珹珵窚掁脭铖盛程揨堘裎絾筬惩椉棖誠塍塖溗酲鋮畻澄澂憕橙檙瀓懲騬侱徎逞骋悜庱睈騁鯎") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("chi"), QString::fromLocal8Bit("吃妛彨哧胵鸱蚩粚笞眵瓻喫訵絺嗤媸摛痴瞝殦噄誺螭鴟鵄魑癡齝攡彲黐弛驰池迟迡茌坻竾荎持匙蚳赿貾遅筂遟馳箎墀漦遲踟篪鍉謘尺叺伬呎肔齿侈卶垑胣蚇耻恥豉袳歯欼袲裭鉹齒褫彳叱斥杘赤饬灻抶侙勅恜炽勑翅翄敕烾湁啻飭雴傺腟痸鉓銐翤瘈遫憏瘛慗翨熾趩懘鶒鷘麶") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("chong"), QString::fromLocal8Bit("冲充沖忡茺涌浺珫翀舂嘃摏憧衝憃罿艟蹖虫种重隀崇崈漴褈蝩緟蟲爞宠埫寵铳揰銃") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("chou"), QString::fromLocal8Bit("抽紬搊篘瘳犨犫仇俦帱栦菗绸惆絒椆畴愁皗稠筹詶酬酧裯踌綢雔儔薵懤幬嬦檮燽雠疇籌醻躊讎讐雦丑丒吜杻杽偢瞅醜矁魗臭臰遚殠鮘") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("chua"), QString::fromLocal8Bit("欻") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("chu"), QString::fromLocal8Bit("出岀初摴樗貙齣刍处助除芻厨蒢豠滁锄雏鉏趎蒭媰蜍耡犓鋤篨廚橱櫉幮躇雛蹰櫥鶵躕杵础處椘楮储禇楚褚濋儲檚礎齭齼亍処竌豖绌怵泏竐欪畜俶敊埱絀珿傗鄐滀搐触閦諔儊嘼憷斶黜臅歜觸矗榋璴蟵") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("chuan"), QString::fromLocal8Bit("巛川氚穿瑏传舡舩船剶遄椽傳暷篅輲舛荈喘歂僢踳汌玔串钏釧猭賗鶨") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("chuang"), QString::fromLocal8Bit("刅创疮窓窗牎摐牕瘡窻床牀幢噇闯傸磢闖怆刱剏剙創愴") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("chuai"), QString::fromLocal8Bit("揣搋膗啜嘬膪踹") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("chui"), QString::fromLocal8Bit("吹炊龡垂埀陲倕桘菙捶搥棰椎圌腄锤槌箠錘鎚顀") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("chun"), QString::fromLocal8Bit("旾杶春萅媋堾椿槆暙瑃蝽箺輴橁櫄鶞鰆纯陙莼唇浱純脣淳湻犉鹑滣蒓蓴漘醇醕錞鶉鯙偆萶惷睶賰蠢") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("cong"), QString::fromLocal8Bit("匆苁囱囪忩茐枞怱悤棇葱楤蔥蓯骢漗聡聪聦熜潨樅樬暰瑽璁瞛蟌聰篵鍯繱鏦鏓騘驄从丛徔従從徖婃淙悰孮琮潀漎賨賩誴錝樷藂叢灇欉爜愡憁謥") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("ci"), QString::fromLocal8Bit("刺差呲玼疵趀偨跐骴縒髊蠀齹词珁茈茨垐柌祠兹瓷辝詞辞慈甆鹚磁雌餈飺糍辤薋嬨濨鴜礠辭鷀鶿此佌泚皉鮆朿次伺佽刾庛茦栨莿赐蛓絘賜螆閊") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("chuo"), QString::fromLocal8Bit("逴趠踔戳繛辶辵哾娖娕婼婥啜涰绰惙辍酫踀綽輟龊擉餟磭歠嚽齪鑡") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("cu"), QString::fromLocal8Bit("怚粗觕麁麄橻麤徂殂卒促脨猝酢媨瘄蔟趗誎醋憱趣踧噈瘯踿縬簇鼀蹙蹴蹵顣") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("cou"), QString::fromLocal8Bit("凑湊辏楱腠輳") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("cun"), QString::fromLocal8Bit("邨村皴踆澊墫竴膥存侟拵蹲刌忖寸籿") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("cuan"), QString::fromLocal8Bit("汆撺镩蹿攛躥鑹菆攒櫕巑欑穳窜殩熶篡簒竄爨") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("cui"), QString::fromLocal8Bit("崔脺嵟凗催缞墔慛榱獕摧槯磪縗鏙漼璀趡皠伜忰疩脆脃倅粋紣翆萃啐啛淬悴焠毳琗瘁翠綷粹膵膬竁襊濢顇臎") },
{ QString::fromLocal8Bit("c"), QString::fromLocal8Bit("cuo"), QString::fromLocal8Bit("搓遳瑳磋撮醝蹉鎈虘嵯嵳睉痤蒫矬蔖瘥鹾酂鹺脞剉剒莝莡厝挫夎措逪锉错蓌銼錯") },

{ QString::fromLocal8Bit("d"), QString::fromLocal8Bit("da"), QString::fromLocal8Bit("咑哒耷笚答嗒搭褡撘墶噠鎝鎉打达迏迖迚怛呾妲沓荙荅炟羍畗畣惮匒剳逹笪詚達跶靼瘩薘鞑蟽鐽韃龖龘大亣汏垯眔畓繨躂鶎") },
{ QString::fromLocal8Bit("d"), QString::fromLocal8Bit("dang"), QString::fromLocal8Bit("当珰裆铛筜當儅噹澢璫襠蟷艡簹鐺闣挡党谠擋譡黨攩灙欓讜氹凼圵宕砀荡垱档菪婸逿愓瓽雼嵣潒碭瞊趤蕩壋檔璗盪礑簜蘯") },
{ QString::fromLocal8Bit("d"), QString::fromLocal8Bit("dan"), QString::fromLocal8Bit("丹妉担单単眈砃耽耼郸聃躭酖單殚媅瘅匰鄲頕褝箪勯儋殫擔甔襌簞聸刐伔抌瓭玬胆衴紞疸掸赕亶馾撣撢賧黕膽黮黵旦石帎但诞狚泹沊柦唌疍蛋弹惮啖啗淡萏啿弾氮蜑腅觛誕窞蓞僤噉髧嘾彈憚憺禫澹駳鴠餤癉癚繵贉嚪饏霮") },
{ QString::fromLocal8Bit("d"), QString::fromLocal8Bit("dai"), QString::fromLocal8Bit("呆呔待獃懛歹歺逮傣大代轪甙侢迨帒骀岱绐垈贷带玳殆柋怠軑貣帯帶埭蚮紿軚袋軩貸瑇跢廗叇曃蝳緿鴏黛艜戴簤瀻霴黱襶靆") },
{ QString::fromLocal8Bit("d"), QString::fromLocal8Bit("de"), QString::fromLocal8Bit("的嘚恴得淂棏惪悳锝徳德鍀地底") },
{ QString::fromLocal8Bit("d"), QString::fromLocal8Bit("dao"), QString::fromLocal8Bit("刀刂叨忉朷氘舠釖鱽魛螩捯导岛陦島捣倒祷禂搗隝嶋嶌導隯嶹擣壔蹈禱辺到帱悼焘菿盗盜道翢稲稻噵艔衜衟檤燾翿軇瓙纛乭﨩椡槝") },
{ QString::fromLocal8Bit("d"), QString::fromLocal8Bit("dei"), QString::fromLocal8Bit("嘚得") },
{ QString::fromLocal8Bit("d"), QString::fromLocal8Bit("deng"), QString::fromLocal8Bit("灯登豋僜噔嬁燈璒竳簦蹬等戥邓鄧隥凳嶝澄墱镫瞪磴櫈覴鐙艠") },
{ QString::fromLocal8Bit("d"), QString::fromLocal8Bit("den"), QString::fromLocal8Bit("扥扽") },
{ QString::fromLocal8Bit("d"), QString::fromLocal8Bit("dia"), QString::fromLocal8Bit("嗲") },
{ QString::fromLocal8Bit("d"), QString::fromLocal8Bit("di"), QString::fromLocal8Bit("氐仾低彽奃岻秪袛隄羝埞啲堤提趆滴嘀镝磾鞮廸狄苖迪的籴唙荻涤敌梑啇笛靮觌滌髢馰頔翟嫡蔋蔐樀敵藡嚁豴蹢鏑覿糴鸐厎邸阺诋坘坻弤底呧抵拞柢牴砥掋菧軧觝詆骶聜鯳地坔杕旳弟玓苐枤怟埅帝俤娣递逓埊焍谛梊祶菂偙眱珶第釱睇揥媂蒂棣缔楴禘遞僀腣鉪碲蝃摕遰蔕墬墑甋蝭締慸諦踶嶳螮嚸") },
{ QString::fromLocal8Bit("d"), QString::fromLocal8Bit("die"), QString::fromLocal8Bit("爹跌褺苵迭咥峌挕绖垤恎昳胅瓞眣耊谍眰戜絰臷镻詄趃跕畳喋耋惵堞揲殜叠楪牃牒跮碟褋蜨嵽蝶艓諜蹀鴩疂螲鲽蹛曡疉鰈疊氎哋幉") },
{ QString::fromLocal8Bit("d"), QString::fromLocal8Bit("diao"), QString::fromLocal8Bit("刁叼汈刟虭凋彫奝弴蛁貂琱鳭碉鮉瞗錭鲷雕簓鼦鯛鵰鸟扚屌弔吊伄钓盄窎訋调铞铫掉釣鈟竨蓧銱銚雿魡調窵瘹鋽藋鑃") },
{ QString::fromLocal8Bit("d"), QString::fromLocal8Bit("dian"), QString::fromLocal8Bit("敁掂厧傎嵮滇槇槙瘨颠蹎顛顚巅癫巓攧巔癲齻典奌点婰敟碘蒧蕇踮點电甸阽佃店坫垫扂玷钿惦婝淀琔奠殿鈿蜔電墊壂澱橂靛磹癜簟驔椣") },
{ QString::fromLocal8Bit("d"), QString::fromLocal8Bit("diu"), QString::fromLocal8Bit("丢丟铥颩銩") },
{ QString::fromLocal8Bit("d"), QString::fromLocal8Bit("ding"), QString::fromLocal8Bit("丁仃帄叮玎钉盯疔町虰耵酊釘靪艼奵顶頂鼎鼑嵿濎薡鐤订饤忊矴定訂飣铤萣啶椗腚锭碇碠錠顁磸") },
{ QString::fromLocal8Bit("d"), QString::fromLocal8Bit("du"), QString::fromLocal8Bit("厾剢都阇督嘟醏闍独毒读渎牍椟犊裻読錖獨凟匵嬻瀆殰犢櫝牘瓄皾騳黩髑韣讀贕豄鑟韇韥黷讟肚笃堵赌琽睹賭覩篤芏杜妒妬度荰秺靯渡镀螙鍍殬斁蠧蠹叾獤") },
{ QString::fromLocal8Bit("d"), QString::fromLocal8Bit("dou"), QString::fromLocal8Bit("吺剅都唗兜兠蔸橷篼唞斗阧抖枓钭陡蚪鈄吋豆郖读荳逗饾浢鬥渎酘毭梪脰痘閗窦鬦餖斣闘竇鬪鬬鬭乧") },
{ QString::fromLocal8Bit("d"), QString::fromLocal8Bit("dong"), QString::fromLocal8Bit("东冬東咚苳岽昸氡鸫倲菄崬崠涷埬娻笗氭蝀鮗鼕鯟鶇董蕫嬞懂箽諌动冻侗垌恫栋胨迵姛峒挏洞凍胴戙動硐湩腖棟働駧霘鶫") },
{ QString::fromLocal8Bit("d"), QString::fromLocal8Bit("dui"), QString::fromLocal8Bit("垖堆塠痽磓鴭鐜鐓頧队对兊兌対兑祋怼陮隊敦碓綐對憞憝錞镦薱濧懟瀩譈譵轛") },
{ QString::fromLocal8Bit("d"), QString::fromLocal8Bit("duan"), QString::fromLocal8Bit("耑偳媏端褍鍴短段断葮缎塅煅瑖腶椴锻碫緞毈簖鍛斷躖籪") },
{ QString::fromLocal8Bit("d"), QString::fromLocal8Bit("duo"), QString::fromLocal8Bit("多夛咄哆剟掇毲敠敪裰嚉夺度铎敚敓剫喥痥奪凙澤踱鐸驮朵朶杕饳剁沲哚挆柮柂垛垜埵缍舵崜惰媠椯躲躱趓跺綞亸鬌軃嚲奲刴陊陏挅尮桗堕跥飿墮憜墯鵽﨣鈬鯲") },
{ QString::fromLocal8Bit("d"), QString::fromLocal8Bit("dun"), QString::fromLocal8Bit("吨惇敦蜳撴墩墪噸撉犜镦礅蹲蹾驐盹趸躉伅庉沌囤炖逇钝盾砘顿鈍遁頓楯遯潡燉踲碷壿") },

{ QString::fromLocal8Bit("e"), QString::fromLocal8Bit("e"), QString::fromLocal8Bit("阿妸妿娿婀屙讹迗吪囮俄峉峨峩涐恶娥莪哦珴訛鈋皒锇睋鹅蛾誐磀噁鋨頟魤额額鵝鵞譌厄阸苊呃扼轭枙垩砨饿胺阏鄂谔萼遌遏崿愕頋腭锷鹗頞餩噩鳄騀戹岋呝砐砈咹咢姶匎蚅軛硆悪卾偔堊堨堮湂惡軶豟鈪琧廅搤搹僫蝁蕚遻餓颚閼擜諤覨鍔顎歞礘櫮鶚鰐鰪齃讍齶鑩鱷仒厑蛯旕鵈襨欕") },
{ QString::fromLocal8Bit("e"), QString::fromLocal8Bit("en"), QString::fromLocal8Bit("奀恩蒽煾峎摁") },
{ QString::fromLocal8Bit("e"), QString::fromLocal8Bit("ei"), QString::fromLocal8Bit("欸誒") },
{ QString::fromLocal8Bit("e"), QString::fromLocal8Bit("eng"), QString::fromLocal8Bit("鞥椧") },
{ QString::fromLocal8Bit("e"), QString::fromLocal8Bit("er"), QString::fromLocal8Bit("乻儿而児陑侕荋耏峏洏栭胹唲鸸袻聏輀鲕髵隭鴯鮞臑轜尔尒尓耳迩饵洱毦栮珥铒鉺餌爾駬薾邇二弍弐佴刵咡贰貮貳衈誀髶樲粫趰") },

{ QString::fromLocal8Bit("f"), QString::fromLocal8Bit("fa"), QString::fromLocal8Bit("发冹沷発發酦彂乏伐姂坺垡茷阀疺罚栰笩筏傠瞂罰閥罸墢橃藅佱法峜砝灋珐琺髪髮蕟浌鍅") },
{ QString::fromLocal8Bit("f"), QString::fromLocal8Bit("fang"), QString::fromLocal8Bit("匚方邡芳汸坊枋牥钫蚄淓趽鈁錺鴋防妨房肪鲂魴访仿彷纺昉昘瓬眆紡舫旊倣訪髣鶭放堏") },
{ QString::fromLocal8Bit("f"), QString::fromLocal8Bit("fan"), QString::fromLocal8Bit("帆忛畨番勫蕃幡噃嬏憣旙旛繙翻藩轓颿飜籓鱕凡凣凢匥杋柉钒矾籵舤舧袢烦笲釩棥煩緐墦樊璠膰薠燔襎繁羳蹯鐇礬蘩瀿蠜鷭反払仮返橎犯氾汎奿饭泛贩范畈軓訉販笵盕梵軬飯飰滼嬎範輽瀪") },
{ QString::fromLocal8Bit("f"), QString::fromLocal8Bit("feng"), QString::fromLocal8Bit("丰风凨仹凬妦沣凮枫盽疯砜封風峰峯偑桻烽堼葑崶渢猦锋犎楓蜂碸瘋篈僼鄷鋒檒豐鎽鏠酆蘴寷灃蠭靊飌麷冯夆沨浲逢溄堸馮艂漨缝摓綘縫讽覂唪諷凤奉俸湗焨煈赗鳯鳳鴌賵琒") },
{ QString::fromLocal8Bit("f"), QString::fromLocal8Bit("fen"), QString::fromLocal8Bit("分芬帉吩纷氛昐玢衯紛翂躮訜酚棻梤鈖雰馚餴朆饙妢岎汾坟炃朌枌羒蚠蚡焚棼蒶隫魵蕡幩獖墳濆燌燓橨豮鼢羵鼖豶轒鐼馩黂粉黺份弅坋忿奋秎偾粪愤僨憤膹奮糞鲼瀵鱝竕瞓") },
{ QString::fromLocal8Bit("f"), QString::fromLocal8Bit("fei"), QString::fromLocal8Bit("飞妃非飛菲啡婓婔渄绯扉猆暃靟裶蜚緋鲱霏馡餥騑騛鯡飝肥淝腓蜰朏胐匪诽奜悱棐斐翡榧蕜誹篚发芾吠狒沸怫杮废肺胇昲费厞剕陫俷疿萉屝廃費痱镄廢曊癈鼣蟦濷櫠鐨靅") },
{ QString::fromLocal8Bit("f"), QString::fromLocal8Bit("fou"), QString::fromLocal8Bit("紑缶否妚缻缹雬殕鴀") },
{ QString::fromLocal8Bit("f"), QString::fromLocal8Bit("fo"), QString::fromLocal8Bit("仏佛坲梻") },
{ QString::fromLocal8Bit("f"), QString::fromLocal8Bit("fu"), QString::fromLocal8Bit("夫伕邞孚呋妋姇玞肤胕砆衭怤柎荂荴尃娐旉麸趺紨跗鈇稃綒筟鄜孵粰膚鳺麩敷麬糐麱懯乀巿弗凫伏甶佛刜芾芙芣扶拂泭岪绂绋咈帗苻茀枎怫服韨氟祓玸枹柫炥畐畉罘茯郛鳬俘垘洑浮哹莩蚨袚栿砩翇桴烰琈袱虙艴紱紼符笰菔匐涪幅葍絥罦棴鳧艀鉘鉜颫辐福蜉綍箙稪榑韍豧髴鴔蝠幞澓輻踾鮄諨黻襆癁鮲襥鵩鶝阝父甫抚拊弣府斧郙俛俌俯釜釡捬脯辅腑盙焤蜅滏腐輔頫嘸撫鬴簠鯱黼讣付妇负附彿咐驸坿竎阜訃負赴复祔峊袝蚥蚹副婦婏冨偩傅復萯媍富赋蛗秿覄詂鲋腹椱缚赙複褔蝮蝜緮蕧賦駙鮒輹嬔縛賻鳆鍑鍢馥覆鰒酜﨓椨禣") },

{ QString::fromLocal8Bit("g"), QString::fromLocal8Bit("ga"), QString::fromLocal8Bit("夹旮伽呷咖嘎嘠轧钆釓尜噶錷玍尕尬魀乫凩軈") },
{ QString::fromLocal8Bit("g"), QString::fromLocal8Bit("gai"), QString::fromLocal8Bit("侅该陔郂荄姟峐垓赅晐祴畡絯隑賅賌豥該忋改絠丐乢匃匄芥钙盖鈣摡溉葢蓋戤概槩漑槪瓂") },
{ QString::fromLocal8Bit("g"), QString::fromLocal8Bit("gang"), QString::fromLocal8Bit("冈冮刚扛纲岗杠肛疘矼牨岡钢缸罡剛堈掆釭犅棡摃堽罁綱鋼鎠崗港焵焹筻槓戆戅戇") },
{ QString::fromLocal8Bit("g"), QString::fromLocal8Bit("gan"), QString::fromLocal8Bit("干甘迀奸忓杆攼玕肝姏泔苷坩矸竿柑酐疳粓凲尴尲筸鳱漧尶尷魐仠芉皯衦秆赶笴桿敢稈感澉趕橄澸擀簳鳡鱤汵旰盰绀凎倝淦紺詌骭幹榦檊贑赣贛灨") },
{ QString::fromLocal8Bit("g"), QString::fromLocal8Bit("gao"), QString::fromLocal8Bit("羔皋高羙髙皐臯膏睾槔槹橰糕篙餻韟櫜鼛鷎鷱夰杲菒稁搞缟槁槀暠稿稾镐縞藁藳檺鎬告郜勂诰峼祮祰锆筶誥禞鋯吿") },
{ QString::fromLocal8Bit("g"), QString::fromLocal8Bit("gei"), QString::fromLocal8Bit("给給") },
{ QString::fromLocal8Bit("g"), QString::fromLocal8Bit("ge"), QString::fromLocal8Bit("戈仡犵扢纥圪戓肐牫疙饹咯哥胳格鸽袼搁割滒歌戨鴚鴿謌擱鎶呄匌佮茖阁挌革鬲敋葛隔裓蛤蛒臵愅觡嗝滆塥搿槅膈閤閣鞈骼韐镉獦諽輵鮯鎘韚騔鞷轕个合各哿盖舸嗰虼個铬硌箇鉻乬巪叾唟彁櫊") },
{ QString::fromLocal8Bit("g"), QString::fromLocal8Bit("geng"), QString::fromLocal8Bit("更刯庚畊耕浭菮赓焿絚鹒縆緪賡羮鶊羹郠莄哽峺挭绠埂耿颈梗綆鲠骾鯁堩暅椩") },
{ QString::fromLocal8Bit("g"), QString::fromLocal8Bit("gen"), QString::fromLocal8Bit("根跟哏艮亘亙茛揯搄") },
{ QString::fromLocal8Bit("g"), QString::fromLocal8Bit("gu"), QString::fromLocal8Bit("估杚姑沽泒孤苽咕呱轱柧骨鸪罛唂唃家菰菇蛄笟軱軲觚辜酤蓇鈲毂稒箍箛篐嫴橭鴣鮕鹘夃古诂汩谷股苦牯羖贾钴罟蛊啒淈愲尳詁鹄馉鈷榾嗀鼓鼔榖嘏皷穀縎糓薣濲臌皼餶轂盬瞽瀔鶻蠱固故顾凅牿梏崮崓堌棝雇祻锢痼僱錮鲴鯝顧逧脵傦") },
{ QString::fromLocal8Bit("g"), QString::fromLocal8Bit("gou"), QString::fromLocal8Bit("勾句沟佝枸钩痀袧鈎缑鉤溝褠緱篝簼鞲韝芶苟狗岣耇耉玽蚼笱耈豿诟坸购构姤垢冓够夠啂訽詬雊遘彀媾搆煹觏構撀購覯") },
{ QString::fromLocal8Bit("g"), QString::fromLocal8Bit("gong"), QString::fromLocal8Bit("工弓公厷功共红杛攻供侊肱糼糿宫宮恭蚣躬龚匑幊愩塨觥躳慐匔碽髸觵龏龔廾巩汞拱栱拲珙輁鞏贡唝貢嗊熕赣") },
{ QString::fromLocal8Bit("g"), QString::fromLocal8Bit("guai"), QString::fromLocal8Bit("乖摑叏拐柺枴罫箉夬怪恠") },
{ QString::fromLocal8Bit("g"), QString::fromLocal8Bit("gua"), QString::fromLocal8Bit("瓜刮呱胍栝桰鸹歄煱趏劀緺踻颳鴰騧冎叧剐剮寡卦诖坬挂掛啩罣絓詿褂颪") },
{ QString::fromLocal8Bit("g"), QString::fromLocal8Bit("guan"), QString::fromLocal8Bit("关观纶官冠矜覌倌莞蒄棺窤関瘝癏観闗鳏關鰥鱞觀馆琯筦痯管輨錧館璭舘鳤卝毌丱串贯泴掼涫惯悺貫悹祼慣潅摜遦樌盥罆雚躀鏆灌瓘爟矔鹳礶罐鑵鸛鱹欟") },
{ QString::fromLocal8Bit("g"), QString::fromLocal8Bit("gui"), QString::fromLocal8Bit("归圭妫龟邽规茥闺皈胿珪帰亀硅袿規廆椝媯郌瑰摫閨鲑嫢嬀槻槼龜璝瞡鮭歸雟鬶嶲騩瓌鬹蘬宄氿轨庋匦陒佹诡姽垝恑攱癸軌鬼祪庪匭晷湀蛫觤詭厬簋蟡攰昋刿刽炅炔柜贵桂桧椢猤筀貴跪蓕瞆螝撌劌劊槶樻檜禬瞶癐襘櫃鐀鳜鞼鑎鱖鱥櫷") },
{ QString::fromLocal8Bit("g"), QString::fromLocal8Bit("guang"), QString::fromLocal8Bit("光灮炗炚炛茪咣姯洸垙烡桄珖胱輄僙銧黆广広犷廣獷臩俇逛臦") },
{ QString::fromLocal8Bit("g"), QString::fromLocal8Bit("gun"), QString::fromLocal8Bit("丨衮袞绲惃辊棍蓘滚滾蔉緄緷輥鲧磙鮌鯀睔謴") },
{ QString::fromLocal8Bit("g"), QString::fromLocal8Bit("guo"), QString::fromLocal8Bit("过呙咶涡埚郭堝啯猓崞锅楇聒鈛瘑墎濄蝈彉嘓鍋彍蟈懖囯国囶囻圀國帼掴腘漍聝幗蔮慖虢膕馘簂果菓馃淉惈褁椁槨蜾粿綶裹輠餜過腂鐹") },

{ QString::fromLocal8Bit("h"), QString::fromLocal8Bit("han"), QString::fromLocal8Bit("犴佄顸哻蚶酣頇谽嫨憨馠魽鼾邗汗邯含函凾虷唅娢浛圅焓梒晗琀涵崡嵅寒韩甝筨蜬鋡澏韓罕浫喊蔊豃厈汉屽扞闬旱垾悍猂莟捍涆菡焊晘釬閈皔睅蛿傼馯感颔漢撖蜭熯銲鋎暵頷憾螒翰撼顄駻雗譀瀚鶾兯爳") },
{ QString::fromLocal8Bit("h"), QString::fromLocal8Bit("hai"), QString::fromLocal8Bit("咍咳嗨还孩骸海胲烸酼醢亥妎骇害氦餀嗐駭駴饚塰") },
{ QString::fromLocal8Bit("h"), QString::fromLocal8Bit("ha"), QString::fromLocal8Bit("呵哈紦铪鉿虾蛤奤乤扖溌噺鎺鱩") },
{ QString::fromLocal8Bit("h"), QString::fromLocal8Bit("hao"), QString::fromLocal8Bit("茠蒿薅薧嚆乚毜皋蚝毫椃嗥獆貉豪獔噑嘷獋儫濠壕嚎蠔籇譹好郝号昊昦侴秏悎耗哠浩恏晧淏傐皓鄗聕號滈暤暭皞皜澔镐薃皡曍皥颢顥鰝灏灝竓") },
{ QString::fromLocal8Bit("h"), QString::fromLocal8Bit("hang"), QString::fromLocal8Bit("夯炕行苀迒吭斻杭肮绗桁珩蚢航笐颃貥裄絎筕頏魧沆巷垳") },
{ QString::fromLocal8Bit("h"), QString::fromLocal8Bit("hen"), QString::fromLocal8Bit("拫痕鞎佷很哏狠詪恨") },
{ QString::fromLocal8Bit("h"), QString::fromLocal8Bit("hei"), QString::fromLocal8Bit("黒黑嗨嘿潶") },
{ QString::fromLocal8Bit("h"), QString::fromLocal8Bit("he"), QString::fromLocal8Bit("诃呵抲欱牙合訶喝嗬蠚禾纥何和咊郃劾姀河盇柇狢峆饸阂曷籺紇釛荷核敆盍盉害涸渮盒菏萂啝龁訸颌惒楁澕毼阖鲄詥貉貈鉌閡餄麧熆鹖頜魺螛翮篕餲鞨齕闔礉覈鶡皬鑉龢吓佫贺垎哬袔寉焃鹄猲賀碋嗃煂熇褐赫鹤翯癋謞壑嚇燺爀鶴鶮鸖靍粭遤靎靏") },
{ QString::fromLocal8Bit("h"), QString::fromLocal8Bit("hong"), QString::fromLocal8Bit("叿吽呍灴轰哄訇烘軣焢硡揈渹谾薨輷鍧嚝轟仜弘妅屸红纮玒汯吰闳宏宖苰泓玜垬沗虹紅洪娂荭羾翃浤紘耾竑鸿硔紭谹鈜閎粠竤渱葓葒綋谼翝鉷鞃魟潂鋐篊黉霐彋蕻霟鴻黌唝晎讧訌閧銾撔澒闂鬨闀") },
{ QString::fromLocal8Bit("h"), QString::fromLocal8Bit("heng"), QString::fromLocal8Bit("亨哼涥悙脝行恒恆姮珩胻烆桁鸻撗横橫衡鴴蘅鑅鵆啈") },
{ QString::fromLocal8Bit("h"), QString::fromLocal8Bit("hu"), QString::fromLocal8Bit("乎匢戏虍芴苸呼泘垀昒忽曶恗烀轷匫唿惚淴虖軤雽雐滹嘑寣幠糊歑膴謼抇囫狐弧和瓳胡核壶隺壷斛焀鹄絗壺猢搰湖喖葫媩煳楜瑚鹘鹕蔛嘝蝴箶槲魱衚頶醐螜縠鍸餬觳鵠鬍瀫鶘鶦鰗乕汻虎浒俿萀唬虝琥滸錿互弖户戶戸冱芐护沪沍帍戽岵怙枑昈祜怘笏瓠扈婟楛雇綔嗀嗀鄠嫭嫮蔰滬摢槴熩鳸鍙豰簄嚛鹱護鳠頀鸌鱯粐") },
{ QString::fromLocal8Bit("h"), QString::fromLocal8Bit("hua"), QString::fromLocal8Bit("化华花哗砉錵蘤划呚骅姡華铧釫釪猾滑嘩搳撶劃磆鲑螖鋘蕐譁鏵驊鷨夻话杹枠画桦崋婳畫畵嬅觟話摦樺槬澅嫿諙諣黊舙繣譮婲埖椛硴蒊糀誮") },
{ QString::fromLocal8Bit("h"), QString::fromLocal8Bit("huan"), QString::fromLocal8Bit("欢犿狟歓鴅鵍酄嚾孉獾懽歡讙貛驩还郇环荁峘洹桓萑萈寏堚雈絙綄貆獂羦锾圜澴缳寰嬛還阛鍰環豲镮鹮糫繯轘鐶闤鬟瓛缓睆緩幻肒奂奐宦唤换涣浣眩烉焕梙逭患嵈喛喚渙換愌痪豢瑍煥瘓漶鲩槵澣擐藧鯇攌鯶鰀") },
{ QString::fromLocal8Bit("h"), QString::fromLocal8Bit("huai"), QString::fromLocal8Bit("怀徊淮槐褢踝褱懐懷瀤櫰耲蘹坏壊壞蘾") },
{ QString::fromLocal8Bit("h"), QString::fromLocal8Bit("hou"), QString::fromLocal8Bit("齁侯矦鄇葔帿喉猴睺瘊銗篌骺糇翭翵鍭餱鯸吼犼后郈厚茩後逅洉垕候堠豞鲎鲘鮜鱟") },
{ QString::fromLocal8Bit("h"), QString::fromLocal8Bit("hun"), QString::fromLocal8Bit("昏昬荤阍婚涽惛殙棔葷睧睯蔒閽轋忶浑珲混馄渾魂琿餛鼲诨俒圂溷慁倱婫掍焝睴觨尡諢") },
{ QString::fromLocal8Bit("h"), QString::fromLocal8Bit("huang"), QString::fromLocal8Bit("巟肓荒衁宺朚塃慌皇隍凰偟黄黃葟徨遑喤媓崲揘湟堭惶煌楻瑝锽墴潢獚熿蝗璜艎篁諻穔癀磺蟥簧餭鳇鍠韹趪騜鐄鰉鱑鷬怳恍炾晃晄谎奛幌詤熀縨謊兤櫎滉愰榥曂皝鎤皩") },
{ QString::fromLocal8Bit("h"), QString::fromLocal8Bit("huo"), QString::fromLocal8Bit("吙秴耠锪劐嚄豁騞攉佸和活秮秳灬火邩伙钬鈥煷漷夥沎货或咟俰获捇眓閄貨掝祸喐剨湱禍惑旤蒦窢鍃霍濩獲奯擭檴雘謋穫镬矆彟瀖嚯藿蠖耯艧嚿曤臛矐癨鑊韄靃彠") },
{ QString::fromLocal8Bit("h"), QString::fromLocal8Bit("hui"), QString::fromLocal8Bit("戏灰灳炜诙咴挥拻洃恢袆虺珲烣晖豗堕婎媈揮隓辉翚暉禈睢煇楎詼睳褘幑噅噕撝翬輝麾徽隳瀈蘳鰴囘回囬佪廻廽茴迴恛洄蚘烠逥痐蛔蛕蜖鮰虫悔毁毀毇燬檓譭卉屶屷汇讳会泋浍绘哕诲荟芔贿烩桧恚恵晦彗秽絵翙廆惠喙缋阓湏滙匯會彚彙賄詯誨瘣僡嘒蔧蕙潓寭圚憓槥暳慧橞諱嬒獩濊薈薉徻頮餯藱篲檅燴璯繢穢瞺蟪嚖懳繪翽譓櫘鏸儶闠靧鐬譿顪颒璤") },

{ QString::fromLocal8Bit("j"), QString::fromLocal8Bit("ji"), QString::fromLocal8Bit("几讥叽击刉饥圾机刏乩芨玑肌鸡矶奇其枅咭唧剞姬屐积畟笄飢基庴喞嵇嵆幾赍犄筓缉朞稘畸嗘跻鳮銈僟綨緁箕毄稽鹡觭躸諆緝畿嘰槣齑錤機禨墼激隮襀積璣磯羁賷簊擊櫅耭雞韲鶏譏譤鐖饑躋鷄鞿魕癪羇虀鑇鑙齏覉羈鸄覊亼亽及伋彶吉汲岌级忣极即亟郆佶卽姞叝急皍級笈革觙揤疾堲楖焏偮卙谻集殛戢棘極湒塉嵴楫辑愱蒺嫉蝍趌銡耤膌槉嶯潗濈蕺蕀瘠箿踑踖輯螏檝藉磼襋蹐鍓艥籍鏶霵轚鶺齎躤雧己丮妀犱纪泲虮济给挤脊掎鱾戟麂魢撠橶穖擠蟣彑计旡记伎齐系忌坖际芰妓技剂季迹垍既紀荠茤茍洎哜計記剤紒觊继绩悸梞旣祭偈徛寄寂済葪蔇惎臮跡鬾魝裚痵継蓟際兾勣漈漃禝穊稩暨魥鲚霁跽誋諅鲫暩稷穄曁冀劑薊髻覬薺嚌濟檕績罽繋璾檵蹟鵋鯽齌鯚懻癠穧骥蘎蘮瀱繼鱀鰶鰿鷑霽蘻鱭驥﨤樭撃鯲廭") },
{ QString::fromLocal8Bit("j"), QString::fromLocal8Bit("jiang"), QString::fromLocal8Bit("江茳将姜浆畕豇將葁畺摪翞僵螀漿薑缰壃殭橿螿鳉礓疅疆繮韁鱂讲奖桨蒋傋塂奨奬蔣槳獎膙耩講顜匞匠弜夅降洚绛弶强絳酱勥滰嵹摾犟糡醤醬糨謽櫤") },
{ QString::fromLocal8Bit("j"), QString::fromLocal8Bit("jie"), QString::fromLocal8Bit("节阶疖皆结階接掲秸痎街揭嗟喈喼媘嫅堦椄湝脻楷煯稭鞂蝔擑謯癤鶛卩卪孑尐讦刧劫岊刦杢昅杰疌衱劼刼诘狤洁拮迼桔桀訐莭倢偈偼菨婕崨捷掶袺蛣絜結媫傑颉鉣嵥搩滐節睫詰蜐楬楶榤截鲒碣竭蓵潔镼鞊頡誱踕羯幯嶻擮鮚礍鍻巀蠞蠘蠽毑姐媎解觧飷檞丯介价芥岕庎吤戒届屆玠疥砎界畍衸诫借蚧悈徣唶堺楐琾骱蛶誡犗褯魪鎅藉桝") },
{ QString::fromLocal8Bit("j"), QString::fromLocal8Bit("jiao"), QString::fromLocal8Bit("艽交郊茭茮骄娇姣峧浇胶教焦椒蛟跤虠鲛僬蕉澆憍嶕嶣嬌膠膲徼鮫穚鹪礁鵁簥轇蟭鐎驕鷦鷮矫嚼臫角侥佼狡饺挢绞烄晈捁笅皎脚铰搅湫絞筊賋勦剿腳敫煍暞僥摷踋鉸餃撟撹儌徺劋敽缴憿敿矯曒璬蟜皦繳譑孂灚攪鱎龣叫呌挍峤觉訆珓校轿较敎窌窖較滘漖嘄嘂嘦斠酵嶠噍潐嬓獥噭藠轎醮趭譥皭釂") },
{ QString::fromLocal8Bit("j"), QString::fromLocal8Bit("jian"), QString::fromLocal8Bit("戋尖幵奸间歼坚浅戔冿玪肩艰姦姧兼监笺豜菅菺猏惤渐堅缄溅湔葌間雃犍牋瑊椷椾睷碊蒹搛缣煎蔪箋鲣緘鹣樫蕑蕳熞鳽熸縑鋻餰馢鞬艱鞯鳒瀐鵑鵳殱礛瀸鰔鰜鶼殲櫼譼韀礷鰹囏虃韉鑯暕囝枧拣俭茧柬笕倹捡挸湕帴减剪检梘趼詃検锏睑硷裥堿減揃揀谫弿瑐絸筧简戬戩碱儉翦篯撿藆襇襉檢謇蹇謭簡繭礆瞼鬋鹸鰎蠒鐧鐗瀽鹻譾籛襺鹼见件見建饯贱洊荐剑牮珔舰剣健俴涧栫剱谏徤袸毽臶腱践跈寋楗旔賎鉴键監槛榗漸僭劎劍澗箭糋諓賤踺踐趝餞諫鍵薦劒劔鍳瞷磵礀繝濺檻擶瀳譛鏩覵覸艦轞鐱鑑鑒鑬鑳豣彅墹麉") },
{ QString::fromLocal8Bit("j"), QString::fromLocal8Bit("jia"), QString::fromLocal8Bit("加夹夾伽抸拁泇佳茄迦珈浃毠枷浹家痂耞笳袈梜葭傢跏猳腵筴鉫犌嘉镓豭貑鴐鎵麚甲扴圿忦郏郟荚莢唊恝脥铗戛戞裌蛱颊蛺跲頬鋏頰鴶鵊岬叚玾胛钾贾斚假婽徦斝椵賈鉀槚榎嘏瘕檟价驾架嫁幏榢價駕稼嗧糘") },
{ QString::fromLocal8Bit("j"), QString::fromLocal8Bit("jiu"), QString::fromLocal8Bit("丩勼纠朻牞鸠究糺糾赳阄萛啾揪揂湫鳩揫摎樛鬏鬮九久乆乣氿汣奺灸玖舏韭紤镹酒韮匛旧臼疚咎柩柾桕倃匓厩救就廄廐舅廏僦慦殧舊鹫鯦麔匶齨鷲杦欍") },
{ QString::fromLocal8Bit("j"), QString::fromLocal8Bit("ju"), QString::fromLocal8Bit("车凥且抅拘泃匊狙岨苴驹居陱毩捄挶眗疽砠罝梮蛆掬据涺崌娵婮毱趄跔跙椐琚腒锔裾雎蜛艍躹諊踘鋦駒鴡鮈鞠檋鞫鶋局泦侷狊桔郹焗菊啹婅淗湨椈輂犑閰跼粷趜橘駶鵙繘鵴蹫鶪鼰巈蘜鼳驧弆咀沮柜枸举莒矩挙椇筥龃榉榘蒟聥舉踽擧櫸齟欅襷籧巨句讵苣邭姖岠拒洰怇炬歫拠具昛秬钜剧俱倨倶袓蚷耟粔詎距埧埾惧犋鉅飓虡豦锯窭寠聚愳駏鮔踞屦劇勮遽據澽懅窶壉鋸颶屨貗簴醵躆鐻懼﨔") },
{ QString::fromLocal8Bit("j"), QString::fromLocal8Bit("jiong"), QString::fromLocal8Bit("冂冋坰扃埛駉駫蘏蘔囧冏迥泂炅炯逈侰浻烱絅颎煚窘綗僒煛熲褧澃顈燛") },
{ QString::fromLocal8Bit("j"), QString::fromLocal8Bit("jing"), QString::fromLocal8Bit("巠坕坙泾茎京径经亰荆荊秔涇婛猄惊旌旍菁経稉葏晶腈睛經粳精綡聙兢鲸麖鶄鶁鯨鼱驚麠井丼阱刭宑汫坓汬肼穽剄殌景儆頚幜澋憬璄璟璥憼暻頸蟼警劲妌迳弪净浄俓婙胫莖弳逕倞徑凈竞痉竟竫淨桱梷婧脛靓敬竧痙傹靖静獍誩踁境靚靜镜曔瀞鵛鏡競竸橸") },
{ QString::fromLocal8Bit("j"), QString::fromLocal8Bit("jin"), QString::fromLocal8Bit("巾今仐斤钅金釒觔矜衿荕津珒紟矝琎惍釿堻筋禁璡黅鹶襟仅尽卺侭巹紧堇菫厪谨僅锦嫤馑漌蓳廑緊槿瑾儘錦謹饉伒劤妗劲进近枃浕勁荩浸赆烬晋晉祲進唫煡缙溍寖搢靳盡墐瑨歏殣凚僸觐縉賮噤濅濜嚍藎嬧燼璶覲贐齽兓砛琻壗") },
{ QString::fromLocal8Bit("j"), QString::fromLocal8Bit("jun"), QString::fromLocal8Bit("军君汮均龟袀軍姰钧莙蚐桾菌皲鈞碅筠覠銞皸皹銁鲪頵麇鍕鮶麏麕呁郡陖俊骏峻馂捃浚埈隽焌晙珺葰竣畯棞雋蜠箘箟賐儁寯懏餕燇駿濬鵔鵕鵘攈攟") },
{ QString::fromLocal8Bit("j"), QString::fromLocal8Bit("juan"), QString::fromLocal8Bit("姢娟捐涓圈焆朘鹃裐勬镌鋑鎸鐫蠲呟卷帣埍菤捲锩踡錈臇奆劵巻狷勌倦桊绢悁隽眷鄄淃瓹腃睊罥絭絹睠慻蔨餋獧羂讂") },
{ QString::fromLocal8Bit("j"), QString::fromLocal8Bit("jue"), QString::fromLocal8Bit("噘撅撧屩屫亅孓孒决刔诀氒角芵弡決抉泬玦玨珏觉疦砄虳绝挗捔倔蚗欮脚桷斍覐觖訣赽掘崛崫趹鈌焳傕厥趉覚絶絕阙劂谲瑴駃鴃鴂瘚爴觮獗噊蕨蕝熦憰嶡嶥噱憠橛橜镢臄爵櫭蟩蟨譎爑蹶蹻蹷鐍鐝矍鳜嚼匷覺觼爝灍戄攫玃彏鷢矡貜躩钁") },

{ QString::fromLocal8Bit("k"), QString::fromLocal8Bit("ka"), QString::fromLocal8Bit("咖咔喀卡佧咯胩鉲凧垰桛裃閊綛聢鯑鶍") },
{ QString::fromLocal8Bit("k"), QString::fromLocal8Bit("kai"), QString::fromLocal8Bit("开奒開揩锎鐦凯剀闿恺垲铠慨剴蒈凱嘅嵦愷楷塏輆锴暟鍇鎧闓颽忾炌烗欬勓愾鎎") },
{ QString::fromLocal8Bit("k"), QString::fromLocal8Bit("ken"), QString::fromLocal8Bit("肎肯肻垦恳啃豤貇錹墾懇掯硍裉褃") },
{ QString::fromLocal8Bit("k"), QString::fromLocal8Bit("kao"), QString::fromLocal8Bit("尻嵪髛丂考攷拷洘烤栲铐熇犒銬鲓靠鮳鯌廤") },
{ QString::fromLocal8Bit("k"), QString::fromLocal8Bit("kan"), QString::fromLocal8Bit("刊看栞龛勘嵁堪戡龕凵冚坎侃砍莰偘惂欿歁槛輡顑轗竷衎崁墈阚磡瞰闞鬫矙") },
{ QString::fromLocal8Bit("k"), QString::fromLocal8Bit("ke"), QString::fromLocal8Bit("匼苛坷呵牱牁珂科轲柯钶疴砢趷蚵痾軻颏棵萪稞犐搕鈳窠颗薖榼樖頦瞌蝌磕顆髁醘礚壳咳殻殼翗揢可岢炣渇渴敤嵑嶱克刻勀勊客峇恪娔课骒氪堁衉愘缂溘愙锞嗑碦緙艐課錁騍礊厼迲硛嵙兡穒鯑") },
{ QString::fromLocal8Bit("k"), QString::fromLocal8Bit("kang"), QString::fromLocal8Bit("忼砊粇康閌嫝嵻漮慷槺穅糠躿鏮鱇扛亢匟邟伉闶犺抗囥炕钪鈧") },
{ QString::fromLocal8Bit("k"), QString::fromLocal8Bit("kua"), QString::fromLocal8Bit("夸咵姱誇侉垮銙挎胯趶跨骻舿") },
{ QString::fromLocal8Bit("k"), QString::fromLocal8Bit("ku"), QString::fromLocal8Bit("刳郀矻枯桍哭堀圐跍窟骷鮬苦狜楛库绔俈秙庫焅袴裤絝喾瘔酷褲嚳萙鶎") },
{ QString::fromLocal8Bit("k"), QString::fromLocal8Bit("kou"), QString::fromLocal8Bit("芤抠眍剾摳彄瞘口劶叩扣怐敂宼冦寇釦窛筘蔻蔲滱瞉簆鷇") },
{ QString::fromLocal8Bit("k"), QString::fromLocal8Bit("kong"), QString::fromLocal8Bit("空倥崆涳埪悾硿箜躻錓鵼孔恐控鞚") },
{ QString::fromLocal8Bit("k"), QString::fromLocal8Bit("keng"), QString::fromLocal8Bit("阬劥吭妔坑挳硁牼铿硜硻誙摼銵鍞鏗") },
{ QString::fromLocal8Bit("k"), QString::fromLocal8Bit("kuan"), QString::fromLocal8Bit("宽寛寬臗髋髖梡欵款歀窽窾鑧") },
{ QString::fromLocal8Bit("k"), QString::fromLocal8Bit("kuai"), QString::fromLocal8Bit("蒯擓巜凷会块快侩郐浍哙狯脍欳塊筷鲙墤鄶儈廥澮獪噲膾糩旝鱠圦") },
{ QString::fromLocal8Bit("k"), QString::fromLocal8Bit("kui"), QString::fromLocal8Bit("亏岿刲悝盔窥聧窺虧顝闚巋奎晆隗鄈逵馗揆葵喹骙暌戣楏楑魁睽蝰頯鍨鍷櫆藈騤夔蘷虁巙犪躨傀煃跬頍磈蹞归尯匮蒉喟媿馈溃愦愧匱蕢嬇嘳憒潰聩聭篑謉殨膭餽簣聵籄饋") },
{ QString::fromLocal8Bit("k"), QString::fromLocal8Bit("kuang"), QString::fromLocal8Bit("匡邼劻诓哐洭恇匩硄筐筺軭誆狂狅抂忹诳軖軠誑鵟夼儣懭邝纩圹况旷岲況矿昿贶眖砿框絋眶絖貺軦鉱鋛鄺壙黋爌曠懬穬矌礦纊鑛") },
{ QString::fromLocal8Bit("k"), QString::fromLocal8Bit("kun"), QString::fromLocal8Bit("坤昆晜裈堃菎猑崑崐焜琨髠髡锟鹍裩褌蜫髨醌瑻熴錕鲲騉鵾鯤鶤捆悃阃壸梱祵稇硱裍綑稛壼閫閸困涃睏堒潉") },
{ QString::fromLocal8Bit("k"), QString::fromLocal8Bit("kuo"), QString::fromLocal8Bit("扩拡括挄栝蛞筈萿葀阔廓頢髺韕鞟闊擴濶霩鞹鬠") },

{ QString::fromLocal8Bit("l"), QString::fromLocal8Bit("lan"), QString::fromLocal8Bit("兰岚拦栏惏婪嵐阑葻蓝谰澜褴斓儖篮镧闌藍襕懢燷燣璼襤幱譋繿籃蘭蘫瀾灆攔欄斕襴灡囒籣讕躝欗襽鑭韊览浨揽缆榄漤罱醂覧壈懒擥懶嬾孄覽孏攬爦欖顲纜烂滥燗濫嚂爁爛瓓灠爤糷钄") },
{ QString::fromLocal8Bit("l"), QString::fromLocal8Bit("la"), QString::fromLocal8Bit("拉垃柆菈啦喇搚邋旯剌砬揦磖嚹藞翋落腊楋揧蜡蝋辣辢瘌蝲臈癞鬎臘攋爉瓎櫴镴鯻蠟鑞凩溂鞡鮱") },
{ QString::fromLocal8Bit("l"), QString::fromLocal8Bit("lai"), QString::fromLocal8Bit("来俫莱徕崃涞梾铼來倈郲徠逨庲唻婡猍崍淶萊赉棶琜睐筙赖箂錸濑癞騋麳鶆鯠籁襰睞賫賚賴頼顂鵣藾瀨瀬癩籟萙") },
{ QString::fromLocal8Bit("l"), QString::fromLocal8Bit("lang"), QString::fromLocal8Bit("啷勆郎郞郎欴莨狼桹蓈廊嫏琅斏稂锒硠瑯榔蜋艆筤郒躴螂樃鋃鎯朗朖烺蓢塱誏朤阆崀浪埌蒗閬") },
{ QString::fromLocal8Bit("l"), QString::fromLocal8Bit("lao"), QString::fromLocal8Bit("捞撈劳労牢窂涝浶唠哰崂勞铹痨僗嶗潦憥癆磱蟧簩醪鐒顟髝耂老佬荖咾姥狫恅栳珯铑銠獠轑络烙閖落嗠酪耢嫪嘮澇憦躼橯耮軂硓粩朥") },
{ QString::fromLocal8Bit("l"), QString::fromLocal8Bit("leng"), QString::fromLocal8Bit("棱唥塄楞稜碐薐冷倰堎愣睖踜") },
{ QString::fromLocal8Bit("l"), QString::fromLocal8Bit("le"), QString::fromLocal8Bit("肋嘞仂阞忇艻叻扐氻乐玏泐竻砳勒楽餎韷樂簕鳓鰳鱳朰榁") },
{ QString::fromLocal8Bit("l"), QString::fromLocal8Bit("li"), QString::fromLocal8Bit("哩刕丽厘骊剓荲狸离梨梸犁琍悡菞喱犂棃鹂缡蜊艃筣漓蓠剺嫠孷樆璃盠貍鋫鲡黎褵犛蔾縭篱罹錅謧醨蟍釐離藜嚟邌斄瓈鏫鵹鯬蟸黧蠡蠫灕囄蘺孋廲劙鑗籬穲纚驪鱺鸝礼礼里李俚峛峢峲逦娌理锂裡裏裏豊鋰鲤澧禮鯉醴鳢邐鱧鱱欚力历厉屴立朸吏呖励利叓苈坜沥沴岦枥苙例戾疠隶疬砅赲俪俐荔茘郦栎栃轹猁悧珕栗栛涖浰莉莅娳砺砾秝鬲蛎蚸粝粒笠婯唳脷悷棙傈凓厤跞詈蛠痢雳鳨睙鉝厯蒞蒚搮溧塛慄暦歴瑮厲綟蜧蝷篥鴗隷勵歷曆巁濿檪隸鬁磿癘犡爄蠇櫔曞禲擽儮嚦攊藶瓅櫟瀝壢礪麗礫蠣爏糲盭櫪瓑皪酈儷癧礰麜鷅轢觻躒囇攦欐讈轣靂瓥攭靋唎甅睝粴魞聢竰糎鯏鯐") },
{ QString::fromLocal8Bit("l"), QString::fromLocal8Bit("lei"), QString::fromLocal8Bit("勒累傫雷蔂缧嫘畾樏擂儡縲攂镭礌櫑瓃羸礧罍纍蘲鐳轠鑘靁虆欙纝鼺厽耒诔洡垒絫塁誄漯蕌磊磥蕾藟壘癗櫐礨蠝灅蘽讄儽壨鑸鸓肋泪类涙淚酹銇頛頪錑檑颣類纇蘱禷矋") },
{ QString::fromLocal8Bit("l"), QString::fromLocal8Bit("lia"), QString::fromLocal8Bit("俩") },
{ QString::fromLocal8Bit("l"), QString::fromLocal8Bit("lian"), QString::fromLocal8Bit("连奁怜帘涟連莲梿裢联廉慩蓮亷漣溓嗹匲奩槤熑覝鲢聨聫磏褳憐匳劆噒嫾濂濓薕螊聮縺翴聯謰蹥燫櫣臁镰鎌簾蠊瀮鬑鰱鐮籢籨敛琏脸裣摙璉蔹嬚鄻斂歛臉襝羷蘞蘝练炼恋殓堜僆萰媡湅链煉楝瑓潋練澰錬鍊殮鏈鰊瀲戀纞") },
{ QString::fromLocal8Bit("l"), QString::fromLocal8Bit("liang"), QString::fromLocal8Bit("良俍莨凉凉梁涼椋辌量粮粱踉墚樑輬駺糧両两兩俩倆唡啢掚脼裲蜽緉魉魎亮谅哴悢倞辆晾喨湸靓輌諒輛鍄") },
{ QString::fromLocal8Bit("l"), QString::fromLocal8Bit("liao"), QString::fromLocal8Bit("撩蹽辽疗聊尞憀膋僚寥嵺漻潦缭嘹嶚嶛寮嫽獠遼敹暸璙膫燎橑療鹩竂蟟繚簝賿豂蹘廫藔屪爎爒飂髎飉鷯了钌釕鄝蓼憭瞭镽尥尦炓料廖撂窷镣鐐") },
{ QString::fromLocal8Bit("l"), QString::fromLocal8Bit("lie"), QString::fromLocal8Bit("裂列劣劽冽挒茢迾咧姴洌浖埒埓烈哷烮栵捩猎猟蛚聗趔煭巤颲鴷鮤儠獵擸犣躐鬛鬣鱲挘") },
{ QString::fromLocal8Bit("l"), QString::fromLocal8Bit("lin"), QString::fromLocal8Bit("拎厸邻阾林临冧啉崊淋晽粦琳碄粼箖鄰隣隣遴潾嶙獜暽辚燐斴璘霖瞵磷疄臨繗翷麐轔鏻鳞瀶壣驎麟鱗菻亃僯凛凜撛澟懔懍廪廩檩檁癛癝吝恡悋赁焛賃蔺橉甐膦閵蹸藺躏躙躪轥") },
{ QString::fromLocal8Bit("l"), QString::fromLocal8Bit("liu"), QString::fromLocal8Bit("溜熘澑蹓刘畄浏斿流留琉旈畱裗硫遛旒蒥蓅骝媹嵧馏飗榴瑠镏瘤瑬劉磂駠鹠橊疁镠璢癅蟉駵麍鎏鎦嚠瀏懰藰鏐飀騮鐂飅鶹鰡驑柳栁桞珋桺绺锍綹鋶罶熮橮羀嬼六陆翏廇塯碌鹨磟餾霤雡飂鬸鷚") },
{ QString::fromLocal8Bit("l"), QString::fromLocal8Bit("ling"), QString::fromLocal8Bit("令伶刢灵坽囹夌苓彾呤姈狑泠柃朎昤瓴玲皊秢铃竛鸰砱陵羐凌菱淩崚掕婈棂琌蛉聆紷衑翎舲笭绫羚詅軨跉祾棱裬蓤龄鈴閝零綾蔆輘霊駖鹷鴒魿霗鲮錂蕶澪燯霛霝齢鯪酃孁齡櫺醽麢欞爧龗岭岺袊领領嶺另炩蘦靈") },
{ QString::fromLocal8Bit("l"), QString::fromLocal8Bit("long"), QString::fromLocal8Bit("龙茏咙泷栊昽珑胧竜眬砻聋笼隆湰滝漋槞嶐窿篭龍癃鏧霳巃巄瀧嚨蘢爖櫳瓏曨襱朧矓礱礲龒龓籠豅躘聾蠪蠬靇鑨驡鸗陇拢垄垅篢隴儱壟壠攏竉弄哢梇徿贚") },
{ QString::fromLocal8Bit("l"), QString::fromLocal8Bit("lou"), QString::fromLocal8Bit("搂瞜娄婁偻蒌溇喽楼漊慺蔞遱廔嘍熡樓蝼耧耬艛螻軁謱髅髏鞻鷜嵝嶁摟塿甊篓簍陋屚漏镂瘘瘺瘻鏤露") },
{ QString::fromLocal8Bit("l"), QString::fromLocal8Bit("lu"), QString::fromLocal8Bit("噜撸謢擼嚕卢芦庐泸垆炉枦栌胪鸬舮舻玈颅鲈馿魲盧璷壚瀘蘆廬嚧獹攎爐櫨曥瓐臚矑艫籚蠦罏纑鑪髗顱鱸鸕黸卤虏掳鹵鲁硵虜蓾滷塷澛樐魯磠橹擄穞镥瀂氌櫓艣鏀鐪艪鑥六圥甪陆侓录彔坴峍赂辂陸勎娽逯菉渌淕淥硉绿鹿椂禄祿琭勠僇剹稑盝睩碌賂輅路粶箓蓼蔍廘漉摝塶辘戮熝樚膔踛醁趢録錄錴穋潞蕗璐簏螰鴼蹗騄轆簶鹭簬簵鏕鵦鵱麓鯥騼鏴露籙鷺虂轳焒閊鈩氇轤") },
{ QString::fromLocal8Bit("l"), QString::fromLocal8Bit("lv"), QString::fromLocal8Bit("驴闾榈閭膢氀櫚藘驢吕呂郘侣侶挔捛捋旅梠祣偻铝稆絽屡缕僂屢膂褛鋁履褸膐縷儢穭律垏虑绿率氯葎嵂滤綠緑慮膟箻繂勴濾爈櫖鑢") },
{ QString::fromLocal8Bit("l"), QString::fromLocal8Bit("luan"), QString::fromLocal8Bit("娈峦孪栾挛脟鸾脔滦銮鵉巒孌奱孿圝攣灓欒曫羉臠圞虊灤鑾癴癵鸞卵乱釠亂") },
{ QString::fromLocal8Bit("l"), QString::fromLocal8Bit("lue"), QString::fromLocal8Bit("寽畧稤鋝鋢") },
{ QString::fromLocal8Bit("l"), QString::fromLocal8Bit("lve"), QString::fromLocal8Bit("掠略锊圙") },
{ QString::fromLocal8Bit("l"), QString::fromLocal8Bit("lun"), QString::fromLocal8Bit("抡掄仑伦论芲沦纶囵侖轮倫陯圇淪菕婨崘崙棆腀碖蜦耣綸輪踚錀鯩埨惀稐溣論嗧磮") },
{ QString::fromLocal8Bit("l"), QString::fromLocal8Bit("luo"), QString::fromLocal8Bit("捋啰落頱囉罗萝逻猡脶腡椤锣骡箩镙螺羅覶鏍騾覼蠡儸邏蘿玀攞欏驘鸁籮鑼饠囖剆倮蓏裸躶瘰蠃臝曪癳泺洛咯骆峈荦络烙洜珞硌硦絡跞笿詻雒犖摞漯駱鵅鮥濼纙鮱") },

{ QString::fromLocal8Bit("m"), QString::fromLocal8Bit("m"), QString::fromLocal8Bit("呒呣姆") },
{ QString::fromLocal8Bit("m"), QString::fromLocal8Bit("mai"), QString::fromLocal8Bit("埋薶霾买荬買嘪鷶劢迈麦佅売卖脉脈麥衇勱賣邁霡霢蕒") },
{ QString::fromLocal8Bit("m"), QString::fromLocal8Bit("ma"), QString::fromLocal8Bit("亇妈孖抹蚂麻媽嫲摩吗嗎痲痳蔴犘蟆马犸玛码馬獁溤瑪碼螞鎷鷌鰢杩祃骂閁唛傌睰嘜禡榪罵駡鬕唜嘛魸蟇") },
{ QString::fromLocal8Bit("m"), QString::fromLocal8Bit("man"), QString::fromLocal8Bit("埋嫚颟顢悗蛮谩蔓馒摱慲樠瞒瞞鞔謾饅鳗鬘鬗鰻蠻娨屘満满滿螨蟎鏋矕曼鄤僈蔄幔獌漫缦墁慢熳槾镘澷縵鏝襔") },
{ QString::fromLocal8Bit("m"), QString::fromLocal8Bit("mang"), QString::fromLocal8Bit("邙牤芒吂汒忙尨杧杗氓盲盳笀恾茫厖庬哤娏狵浝牻釯铓硭痝蛖鋩駹蘉莽莾硥茻壾漭蟒蠎") },
{ QString::fromLocal8Bit("m"), QString::fromLocal8Bit("mao"), QString::fromLocal8Bit("猫貓毛矛枆茆茅牦旄罞軞酕渵堥楙锚髦鉾蝥氂髳錨蟊鶜冇夘卯戼峁泖昴铆笷鉚蓩冃芼皃茂冐冒贸柕眊耄覒袤貿鄚萺帽媢毷暓瑁愗鄮貌瞀蝐懋毟") },
{ QString::fromLocal8Bit("m"), QString::fromLocal8Bit("mei"), QString::fromLocal8Bit("没沒坆苺枚玫栂眉脄莓郿脢梅珻睂堳湄湈葿媒猸嵋腜瑂禖楣楳煤酶槑镅鹛塺鋂霉鎇徾糜攗鶥黴毎每美凂挴浼羙嵄渼媄媺镁嬍燘躾鎂黣妹抺沬袂昧祙眛谜寐媚跊鬽痗煝魅韎睸蝞篃") },
{ QString::fromLocal8Bit("m"), QString::fromLocal8Bit("me"), QString::fromLocal8Bit("乄么匁扖庅嚒濹嚜嚰") },
{ QString::fromLocal8Bit("m"), QString::fromLocal8Bit("men"), QString::fromLocal8Bit("闷门们扪汶玧钔門閅們菛捫璊穈鍆亹虋焖悶暪燜懑懣椚") },
{ QString::fromLocal8Bit("m"), QString::fromLocal8Bit("meng"), QString::fromLocal8Bit("掹蒙擝尨甿氓虻莔萌溕盟鄳甍蝱鄸儚蕄瞢橗幪濛懞檬曚氋朦鹲礞鯍矇艨矒饛霿靀顭鸏黾勐冡猛锰蜢艋錳獴懵蠓鯭鼆孟梦夢夣懜霥") },
{ QString::fromLocal8Bit("m"), QString::fromLocal8Bit("mi"), QString::fromLocal8Bit("咪眯瞇弥祢迷猕谜蒾詸謎醚糜縻麋麊麿藌彌擟禰靡麛瀰獼蘪镾蘼戂攠瓕爢醾醿鸍釄米芈羋侎沵洣弭敉脒渳葞蔝銤濔孊灖冖糸汨沕泌怽宓觅祕峚宻秘覔覓密淧幂谧蓂幎覛塓蜜榓鼏蔤滵漞嘧熐冪樒幦濗謐簚櫁羃鼡袮粎裃椧嚸欕") },
{ QString::fromLocal8Bit("m"), QString::fromLocal8Bit("mian"), QString::fromLocal8Bit("宀芇杣眠绵婂媔棉綿臱蝒緜嬵檰櫋矈矊矏丏汅沔免勉俛眄娩渑偭勔冕葂喕湎睌缅愐腼緬澠靦鮸靣面麪麫糆麺麵") },
{ QString::fromLocal8Bit("m"), QString::fromLocal8Bit("miao"), QString::fromLocal8Bit("喵苗媌描瞄鹋緢嫹鶓劰杪秒眇渺缈淼緲篎藐邈妙庙竗玅庿缪廟") },
{ QString::fromLocal8Bit("m"), QString::fromLocal8Bit("min"), QString::fromLocal8Bit("民玟苠姄岷怋旻旼盿砇珉罠崏捪缗琘琝瑉碈痻鈱緍緡錉鴖鍲皿冺刡忟闵黾抿泯忞敃勄闽悯敏笢閔黽惽湣敯暋愍閩僶潣憫慜簢鳘蠠鰵垊笽") },
{ QString::fromLocal8Bit("m"), QString::fromLocal8Bit("mie"), QString::fromLocal8Bit("乜吀咩哶孭灭烕搣滅蔑薎鴓幭篾瀎懱櫗礣蠛衊鑖鱴旀") },
{ QString::fromLocal8Bit("m"), QString::fromLocal8Bit("ming"), QString::fromLocal8Bit("名明鸣眀洺茗冥眳朙铭鄍蓂溟嫇猽詺銘鳴榠暝瞑螟覭佲姳凕慏酩命掵") },
{ QString::fromLocal8Bit("m"), QString::fromLocal8Bit("miu"), QString::fromLocal8Bit("谬缪謬") },
{ QString::fromLocal8Bit("m"), QString::fromLocal8Bit("mo"), QString::fromLocal8Bit("摸嚤无尛谟嫫馍模摹膜麽麼摩橅磨糢謨謩嬷嬤擵饃蘑髍魔劘饝万抹懡末圽没沫陌妺茉帓殁歾歿枺昩脉帞冒莫莈皌秣砞眜眿袜絈眽貃蛨貊塻蓦嗼漠寞獏銆靺魩黙嫼嘿墨瞐瞙瘼镆默貘蟔鏌藦爅癦驀纆礳耱丆匁乮裃酛魹囕") },
{ QString::fromLocal8Bit("m"), QString::fromLocal8Bit("mou"), QString::fromLocal8Bit("哞牟劺侔呣恈谋眸蛑缪踎謀鍪麰鴾繆某") },
{ QString::fromLocal8Bit("m"), QString::fromLocal8Bit("mu"), QString::fromLocal8Bit("毪氁模母牡亩姆畂拇畆畒姥峔牳胟砪畝畞畮鉧踇木目仫牟狇沐坶苜牧炑毣莫莯蚞钼雮募慔幕幙墓鉬睦楘慕暮暯艒霂縸穆鞪厼榁") },

{ QString::fromLocal8Bit("n"), QString::fromLocal8Bit("na"), QString::fromLocal8Bit("那南拏拿嗱搻镎鎿乸哪雫内呐吶妠纳肭郍娜钠衲袦納笝軜豽捺貀鈉靹蒳魶凪魸噺") },
{ QString::fromLocal8Bit("n"), QString::fromLocal8Bit("nai"), QString::fromLocal8Bit("腉孻乃艿奶氖疓廼迺哪倷釢嬭佴奈柰耐萘渿鼐褦螚錼") },
{ QString::fromLocal8Bit("n"), QString::fromLocal8Bit("nan"), QString::fromLocal8Bit("囝囡男抩枏柟侽南莮畘难娚喃楠暔諵難赧萳揇湳煵腩蝻戁婻遖") },
{ QString::fromLocal8Bit("n"), QString::fromLocal8Bit("nao"), QString::fromLocal8Bit("孬呶怓挠峱铙硇蛲詉猱碙撓嶩憹蟯獶譊夒鐃獿巎垴恼悩脑脳匘堖惱瑙嫐腦碯闹淖閙鬧臑") },
{ QString::fromLocal8Bit("n"), QString::fromLocal8Bit("nang"), QString::fromLocal8Bit("囊囔乪嚢蠰馕欜饢擃曩攮灢儾齉") },
{ QString::fromLocal8Bit("n"), QString::fromLocal8Bit("ne"), QString::fromLocal8Bit("哪疒那讷呐抐眲訥丆匁鼡縇") },
{ QString::fromLocal8Bit("n"), QString::fromLocal8Bit("nei"), QString::fromLocal8Bit("哪娞馁脮腇餒鮾鯘内內那氝氞錗") },
{ QString::fromLocal8Bit("n"), QString::fromLocal8Bit("nen"), QString::fromLocal8Bit("恁嫩嫰") },
{ QString::fromLocal8Bit("n"), QString::fromLocal8Bit("neng"), QString::fromLocal8Bit("能") },
{ QString::fromLocal8Bit("n"), QString::fromLocal8Bit("ng"), QString::fromLocal8Bit("嗯唔") },
{ QString::fromLocal8Bit("n"), QString::fromLocal8Bit("ni"), QString::fromLocal8Bit("妮尼泥兒呢坭怩籾秜铌郳倪屔淣婗猊蚭埿棿跜鈮馜蜺聣輗觬貎鲵霓麑鯢齯臡拟你伲伱苨妳狔抳柅掜旎晲孴隬儗儞薿擬聻屰氼逆胒昵匿眤堄惄腻愵溺嫟睨暱縌誽膩嬺嶷檷哛鳰") },
{ QString::fromLocal8Bit("n"), QString::fromLocal8Bit("nian"), QString::fromLocal8Bit("拈蔫年秊秊哖姩秥粘鲇鲶鮎黏鯰涊淰捻辇辗碾輦撵撚簐蹍攆蹨躎卄廿念唸埝惗艌焾") },
{ QString::fromLocal8Bit("n"), QString::fromLocal8Bit("niang"), QString::fromLocal8Bit("娘嬢孃酿醸釀") },
{ QString::fromLocal8Bit("n"), QString::fromLocal8Bit("niao"), QString::fromLocal8Bit("鸟茑袅鳥嫋裊蔦樢褭嬝嬲尿脲溺") },
{ QString::fromLocal8Bit("n"), QString::fromLocal8Bit("nie"), QString::fromLocal8Bit("捏捻揑苶乜帇圼枿陧涅聂痆臬隉菍啮湼敜嵲嗫踂踗踙摰镊镍噛槷嶭篞臲錜颞蹑聶嚙鎳闑孽孼櫱蘖籋囁齧鑈巕蠥糱糵囓躡讘鑷顳钀") },
{ QString::fromLocal8Bit("n"), QString::fromLocal8Bit("nin"), QString::fromLocal8Bit("囜您拰脌") },
{ QString::fromLocal8Bit("n"), QString::fromLocal8Bit("ning"), QString::fromLocal8Bit("宁苧咛狞拧柠聍甯寍寕寗寜寧凝儜橣擰獰嚀薴嬣檸聹鑏鬡鸋矃佞侫泞倿澝濘") },
{ QString::fromLocal8Bit("n"), QString::fromLocal8Bit("niu"), QString::fromLocal8Bit("妞牛牜汼狃扭纽忸炄杻钮紐莥鈕靵拗") },
{ QString::fromLocal8Bit("n"), QString::fromLocal8Bit("nou"), QString::fromLocal8Bit("羺槈耨獳鎒檽鐞鯑") },
{ QString::fromLocal8Bit("n"), QString::fromLocal8Bit("nong"), QString::fromLocal8Bit("农侬浓哝脓秾農辳儂蕽濃噥膿燶檂禯穠襛譨醲欁鬞繷弄挊挵癑齈") },
{ QString::fromLocal8Bit("n"), QString::fromLocal8Bit("nu"), QString::fromLocal8Bit("奴伮驽孥笯駑努弩呶砮胬怒傉搙莻") },
{ QString::fromLocal8Bit("n"), QString::fromLocal8Bit("nv"), QString::fromLocal8Bit("女钕籹釹沑衂恧朒衄") },
{ QString::fromLocal8Bit("n"), QString::fromLocal8Bit("nuan"), QString::fromLocal8Bit("奻渜煗暖餪") },
{ QString::fromLocal8Bit("n"), QString::fromLocal8Bit("nun"), QString::fromLocal8Bit("黁") },
{ QString::fromLocal8Bit("n"), QString::fromLocal8Bit("nve"), QString::fromLocal8Bit("疟虐") },
{ QString::fromLocal8Bit("n"), QString::fromLocal8Bit("nuo"), QString::fromLocal8Bit("那娜挪梛傩橠儺诺逽喏掿愞搦锘榒稬諾蹃鍩糑懧懦糥穤糯") },

{ QString::fromLocal8Bit("o"), QString::fromLocal8Bit("ou"), QString::fromLocal8Bit("区讴沤欧殴瓯鸥塸熰歐鴎甌膒毆謳藲櫙鏂鷗呕吘偶腢嘔蕅耦藕怄慪漚") },
{ QString::fromLocal8Bit("o"), QString::fromLocal8Bit("o"), QString::fromLocal8Bit("噢哦丆仒乯迲猠硛旕筽鳰縇穒纐") },

{ QString::fromLocal8Bit("p"), QString::fromLocal8Bit("pa"), QString::fromLocal8Bit("叭汃妑苩派皅趴舥啪葩扒杷爬耙掱琶筢潖帊帕怕袙巼") },
{ QString::fromLocal8Bit("p"), QString::fromLocal8Bit("pai"), QString::fromLocal8Bit("拍俳徘猅排棑牌箄輫簰簲迫沠派哌渒湃蒎鎃闏") },
{ QString::fromLocal8Bit("p"), QString::fromLocal8Bit("pan"), QString::fromLocal8Bit("扳拌眅萠番潘攀丬爿洀柈胖般盘跘蒰幋媻槃搫盤磐縏磻蹒蹣鎜蟠瀊鞶坢冸判伴沜泮拚炍牉盼叛畔袢詊溿頖鋬鵥襻鑻") },
{ QString::fromLocal8Bit("p"), QString::fromLocal8Bit("pang"), QString::fromLocal8Bit("乓胮雱滂膀膖霶仿彷厐庞逄旁舽嫎徬磅螃鳑龎龐鰟嗙耪覫髈炐肨胖眫") },
{ QString::fromLocal8Bit("p"), QString::fromLocal8Bit("pao"), QString::fromLocal8Bit("抛拋泡脬萢刨庖咆狍垉炰炮爮袍匏袌軳跑鞄麃麅奅疱皰砲靤麭礟礮喸褜") },
{ QString::fromLocal8Bit("p"), QString::fromLocal8Bit("pei"), QString::fromLocal8Bit("呸怌肧胚衃醅阫陪培赔毰锫裴裵賠錇俖伂犻沛佩帔姵斾旆珮配浿辔馷霈轡蓜") },
{ QString::fromLocal8Bit("p"), QString::fromLocal8Bit("pen"), QString::fromLocal8Bit("喷噴濆歕瓫盆葐湓呠翸喯") },
{ QString::fromLocal8Bit("p"), QString::fromLocal8Bit("pi"), QString::fromLocal8Bit("丕伓伾批纰邳坯炋枈披抷狉狓岯砒紕被秛秠铍悂旇耚翍豾鈚釽鉟銔髬駓磇劈噼錃魾錍憵鎞礔礕霹皮阰陂芘肶枇毗毘郫陴疲蚍蚾蚽豼埤啤崥琵焷脾腗椑裨鈹鲏蜱罴膍隦魮鮍壀篺螷鵧貔羆鼙蠯匹庀仳圮苉吡否脴痞銢鴄諀嶏擗噽癖嚭屁淠揊媲嫓睥辟稫潎僻澼甓疈譬闢鸊鷿迲") },
{ QString::fromLocal8Bit("p"), QString::fromLocal8Bit("peng"), QString::fromLocal8Bit("匉抨泙怦恲砰硑烹梈軯閛剻漰嘭駍磞芃朋竼莑倗捀堋弸袶彭棚椖搒塜塳傰蓬稝鹏硼樥熢澎憉輣錋篷篣膨韸髼鬅蟛蟚纄蘕韼鵬鬔騯鑝捧淎皏掽椪碰槰踫輧") },
{ QString::fromLocal8Bit("p"), QString::fromLocal8Bit("pian"), QString::fromLocal8Bit("片囨扁偏媥犏翩篇鶣便骈胼腁缏楄楩賆跰褊骿駢蹁騈谝覑貵諞骗騙騗") },
{ QString::fromLocal8Bit("p"), QString::fromLocal8Bit("piao"), QString::fromLocal8Bit("票剽勡嘌彯漂缥飘旚螵翲犥飄飃魒朴嫖瓢薸闝莩殍瞟縹篻醥顠皫僄徱骠慓驃鰾") },
{ QString::fromLocal8Bit("p"), QString::fromLocal8Bit("pie"), QString::fromLocal8Bit("氕覕撇暼撆瞥丿苤鐅嫳") },
{ QString::fromLocal8Bit("p"), QString::fromLocal8Bit("ping"), QString::fromLocal8Bit("乒甹俜娉涄砯聠艵頩冯平评苹郱凭呯坪枰玶胓屏洴帡荓瓶蚲萍帲淜幈蓱蛢缾甁塀焩評鲆軿竮凴箳慿憑鮃檘簈屛岼") },
{ QString::fromLocal8Bit("p"), QString::fromLocal8Bit("pin"), QString::fromLocal8Bit("拚拼姘砏礗穦馪驞贫玭娦貧琕嫔频嬪薲蘋嚬矉颦顰品榀牝汖娉聘朩") },
{ QString::fromLocal8Bit("p"), QString::fromLocal8Bit("po"), QString::fromLocal8Bit("朴钋陂岥泊泼坡釙颇酦頗潑醗醱鏺婆鄱蔢嘙皤繁櫇嚩叵尀钷笸鉕箥駊廹迫岶洦敀昢珀破砶烞粕湐蒪魄乶哛桲") },
{ QString::fromLocal8Bit("p"), QString::fromLocal8Bit("pou"), QString::fromLocal8Bit("剖娝抔抙捊垺掊裒箁咅哣婄犃") },
{ QString::fromLocal8Bit("p"), QString::fromLocal8Bit("pu"), QString::fromLocal8Bit("仆攵攴扑抪炇陠铺痡鋪噗撲潽鯆圤匍莆菩脯葡菐蒱蒲僕酺墣獛璞穙镤瞨濮贌鏷纀朴浦埔圃烳普圑溥谱暜諩樸擈氆檏镨譜蹼鐠堡舖舗暴瀑曝巬哛") },

{ QString::fromLocal8Bit("q"), QString::fromLocal8Bit("qi"), QString::fromLocal8Bit("七迉沏妻柒栖桤凄郪倛娸捿淒悽萋戚桼棲敧欺欹期攲紪缉傶僛嘁墄漆慽緀榿慼踦霋魌蹊鏚鶈丌亓祁齐圻忯芪岐岓奇其亝祈祇斉肵歧疧俟荠剘陭旂耆蚑蚔蚚脐斊竒颀畦軝跂釮埼萁萕帺骐骑猉崎掑淇棋棊祺蛴琪琦锜褀碕碁鬿頎愭﨑齊旗綥粸綦蜞蜝璂禥蕲錡鲯藄鄿濝懠檱櫀鳍騏騎臍鵸鶀鯕蘄麒鬐艩蠐騹鰭玂麡乞邔企芑岂屺杞玘盀启呇唘豈起啓啟啔婍绮棨晵綮綺稽諬闙气讫迄汔気汽芞弃矵呮泣炁亟盵契咠砌訖栔氣欫唭葺湆湇棄夡愒滊摖暣甈碶憇槭噐器憩碛磜磧磩藒蟿罊鐑嵜褄螧簯簱籏") },
{ QString::fromLocal8Bit("q"), QString::fromLocal8Bit("qia"), QString::fromLocal8Bit("掐袷葜擖拤卡峠酠跒鞐圶冾帢洽恰胢硈殎髂") },
{ QString::fromLocal8Bit("q"), QString::fromLocal8Bit("qian"), QString::fromLocal8Bit("千阡仟芊迁扦奷汘圱圲汧岍杄茾佥欦钎臤牵拪悭蚈铅谸釺婜牽孯掔谦鈆鉛鹐签愆僉嗛骞撁搴慳遷厱諐褰謙顅檶櫏攐攑簽鵮騫攓籖鬜鬝籤韆仱岒扲忴拑乹前荨钤钱钳虔歬軡乾偂掮揵亁媊葥鈐靬犍鉗銭墘榩箝蕁潜潛羬黔橬錢黚騝騚濳灊鰬浅肷淺遣膁蜸槏谴缱繾譴欠刋伣纤芡茜俔倩悓堑椠棈傔嵌皘蒨慊塹蔳綪歉篏儙槧篟輤縴壍嬱竏粁鎆鏲") },
{ QString::fromLocal8Bit("q"), QString::fromLocal8Bit("qing"), QString::fromLocal8Bit("靑青轻氢郬卿倾寈清淸埥圊氫軽傾蜻輕錆鲭鯖鑋夝甠剠勍啨情殑棾葝氰晴暒擏樈檠擎黥苘顷请頃庼廎漀請謦檾庆亲凊倩掅殸碃綮箐靘慶磬罄濪儬硘櫦") },
{ QString::fromLocal8Bit("q"), QString::fromLocal8Bit("qie"), QString::fromLocal8Bit("切癿伽茄聺且妾怯厒砌窃匧悏挈洯惬淁笡蛪趄愜慊朅锲箧篋踥鍥穕鯜竊") },
{ QString::fromLocal8Bit("q"), QString::fromLocal8Bit("qin"), QString::fromLocal8Bit("侵亲钦衾骎媇嵚欽綅嵰誛嶔親顉駸鮼寴芹芩庈肣矜秦蚙菦埐珡耹捦菳禽覃鈙鈫雂琴琹溱勤靲嫀嗪廑慬嶜擒噙鳹斳澿檎懄螓瘽懃蠄鵭坅昑笉赾梫寑锓寝寢鋟螼吣吢抋沁唚菣揿搇撳藽瀙") },
{ QString::fromLocal8Bit("q"), QString::fromLocal8Bit("qiao"), QString::fromLocal8Bit("悄郻硗雀跷鄡鄥勪踍敲毃锹劁骹頝墝墽燆橇幧缲磽鍫鍬繑繰趬蹺鐰乔侨荞荍峤桥菬硚喬翘僑谯槗墧憔蕉蕎嘺嫶鞒犞燋樵橋瞧癄礄翹譙趫櫵藮鐈鞽顦巧釥愀髜壳陗俏诮帩峭窍誚髚僺撬撽韒鞘鞩竅躈") },
{ QString::fromLocal8Bit("q"), QString::fromLocal8Bit("qiang"), QString::fromLocal8Bit("羌呛抢斨枪戗戕玱羗将猐啌跄腔溬嗴獇椌蜣锖锵羫槍牄瑲戧嶈摤篬謒镪蹌蹡鎗鏘強强蔷嫱墙樯蔃漒薔彊廧墻嬙檣牆艢蘠羟羥搶墏襁繈繦鏹炝唴嗆熗羻") },
{ QString::fromLocal8Bit("q"), QString::fromLocal8Bit("qiu"), QString::fromLocal8Bit("丘丠龟邱坵恘秋秌恷蚯媝湫萩楸湬蓲鹙蝵緧篍趥穐鳅鞦鞧蟗鶖鰌鰍蠤龝仇叴芁扏囚犰玌朹肍汓虬求虯泅俅訄訅酋觓釚唒莍逑逎浗紌毬球梂赇殏釻頄渞湭遒巯崷盚皳絿蛷煪裘觩巰賕蝤璆銶醔鼽鮂鯄鰽搝糗蘒蘒") },
{ QString::fromLocal8Bit("q"), QString::fromLocal8Bit("qu"), QString::fromLocal8Bit("区曲匤阹佉伹诎驱岖岴屈抾坥浀胠祛袪蛆紶躯區焌煀詘趋筁蛐粬趍駆憈嶇敺駈誳麹魼髷麯趨軀覰麴鶌黢驅鰸鱋佢劬斪朐胊菃鸲絇翑渠淭葋軥蕖璖鴝磲螶蟝璩瞿鼩蘧忂灈戵爠臞氍欋籧癯蠷衢欔躣鑺蠼鸜苣取竘娶詓竬蝺龋齲去厺刞呿耝阒觑趣閴麮鼁闃覷覻衐") },
{ QString::fromLocal8Bit("q"), QString::fromLocal8Bit("que"), QString::fromLocal8Bit("炔缺缼蒛阙瘸芍却卻崅埆琷悫雀确硞棤阕塙搉鹊皵碏榷愨慤碻確趞闋燩闕礐鵲礭") },
{ QString::fromLocal8Bit("q"), QString::fromLocal8Bit("qiong"), QString::fromLocal8Bit("銎邛卭宆穷穹茕桏筇笻赹惸焪焭琼蛩蛬舼跫睘煢熍瞏窮憌橩璚儝藑藭瓊竆瓗嬛") },
{ QString::fromLocal8Bit("q"), QString::fromLocal8Bit("quan"), QString::fromLocal8Bit("奍弮悛圈圏棬椦箞鐉全权卷诠佺姾荃峑洤恮泉牷辁拳铨痊硂惓埢婘啳葲湶絟筌犈瑔輇觠詮搼跧銓蜷権踡駩醛鳈鬈騡鰁巏權齤颧蠸顴犭犬犮畎烇绻綣虇劝券牶勧韏縓勸楾闎") },
{ QString::fromLocal8Bit("q"), QString::fromLocal8Bit("qun"), QString::fromLocal8Bit("夋囷逡帬宭峮裙群羣裠麇") },

{ QString::fromLocal8Bit("r"), QString::fromLocal8Bit("rao"), QString::fromLocal8Bit("荛娆饶桡嬈蕘橈襓饒扰隢擾绕遶繞") },
{ QString::fromLocal8Bit("r"), QString::fromLocal8Bit("rang"), QString::fromLocal8Bit("嚷穣勷儴蘘獽瀼禳瓤穰躟鬤壌壤攘爙让懹譲讓") },
{ QString::fromLocal8Bit("r"), QString::fromLocal8Bit("ran"), QString::fromLocal8Bit("呥肰衻袇袡蚦蚺然髥髯嘫燃繎冄冉苒姌染珃媣橪") },
{ QString::fromLocal8Bit("r"), QString::fromLocal8Bit("re"), QString::fromLocal8Bit("若喏惹热熱") },
{ QString::fromLocal8Bit("r"), QString::fromLocal8Bit("reng"), QString::fromLocal8Bit("扔仍辸礽芿陾艿") },
{ QString::fromLocal8Bit("r"), QString::fromLocal8Bit("ren"), QString::fromLocal8Bit("人亻仁壬朲忈任芢忎秂魜銋鵀忍荏荵栠栣秹稔躵刃刄认讱仞仭纫屻饪牣纴轫杒妊韧肕祍姙衽紉紝軔訒袵梕葚腍絍鈓飪靭靱韌餁認") },
{ QString::fromLocal8Bit("r"), QString::fromLocal8Bit("rong"), QString::fromLocal8Bit("戎肜栄茸荣茙狨绒毧峵容烿媶嵘搑傛絨羢搈溶嵤嫆蓉榵榕榮熔穁瑢縙镕褣蝾槦融螎駥嬫嶸爃鎔瀜曧蠑冗宂坈傇軵氄穃") },
{ QString::fromLocal8Bit("r"), QString::fromLocal8Bit("ri"), QString::fromLocal8Bit("日驲囸衵釰釼鈤馹乤乬乫乮乭乶乽乼乺挘艝鑓虄") },
{ QString::fromLocal8Bit("r"), QString::fromLocal8Bit("rou"), QString::fromLocal8Bit("厹禸柔粈脜葇媃揉渘楺瑈腬煣蝚糅輮蹂鍒鞣騥瓇鶔鰇韖肉宍譳") },
{ QString::fromLocal8Bit("r"), QString::fromLocal8Bit("ru"), QString::fromLocal8Bit("邚如侞帤茹挐桇铷袽渪筎蒘銣蝡蕠儒鴑鴽嚅薷濡孺嬬曘襦蠕颥醹顬鱬汝肗乳辱鄏擩入洳溽缛蓐嗕媷褥縟扖杁嶿") },
{ QString::fromLocal8Bit("r"), QString::fromLocal8Bit("rui"), QString::fromLocal8Bit("甤緌蕤桵蕊蕋橤繠蘂蘃壡芮汭枘蚋锐蜹瑞睿鋭銳叡") },
{ QString::fromLocal8Bit("r"), QString::fromLocal8Bit("ruan"), QString::fromLocal8Bit("堧撋壖阮软朊耎軟偄媆瑌腝碝緛輭瓀礝") },
{ QString::fromLocal8Bit("r"), QString::fromLocal8Bit("run"), QString::fromLocal8Bit("闰润閏閠潤橍膶") },
{ QString::fromLocal8Bit("r"), QString::fromLocal8Bit("ruo"), QString::fromLocal8Bit("挼捼叒若鄀偌弱婼渃焫楉蒻箬篛爇鰙鰯鶸嵶") },

{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("sang"), QString::fromLocal8Bit("丧桒桑喪槡嗓搡磉褬颡鎟顙") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("san"), QString::fromLocal8Bit("三弎参叁毵毶厁毿犙鬖伞傘散糁馓糝糣糤繖鏒鏾饊俕閐壭") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("sai"), QString::fromLocal8Bit("思毢愢揌塞腮毸嘥噻鳃顋鰓赛僿賽簺嗮") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("sa"), QString::fromLocal8Bit("仨撒洒訯靸潵灑躠卅钑飒脎萨鈒馺摋蕯颯薩櫒扨苆乷栍隡虄") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("sao"), QString::fromLocal8Bit("掻搔溞骚慅缫螦繅鳋颾騒騷鰠鱢扫掃嫂埽瘙燥氉臊矂髞乺") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("seng"), QString::fromLocal8Bit("僧鬙") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("sen"), QString::fromLocal8Bit("森椮槮襂") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("se"), QString::fromLocal8Bit("閪色洓涩栜啬渋铯雭歮嗇瑟塞摵歰銫澁濇濏擌懎瘷穑璱澀瀒穡繬轖穯鏼譅飋縇鱪") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("sha"), QString::fromLocal8Bit("杀杉沙纱刹砂殺莎唦猀粆紗挲铩桬痧硰摋煞蔱裟榝樧噎鲨魦閷髿鯊鯋鎩繺奢啥傻儍倽萐帹啑唼喢厦廈嗄歃翜翣箑閯霎") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("shai"), QString::fromLocal8Bit("筛酾篩簁簛籭色晒曬") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("shang"), QString::fromLocal8Bit("汤伤殇商觞禓傷蔏滳漡墒慯殤熵螪觴謪鬺上垧扄晌赏樉賞鋿鏛贘鑜丄尚尙恦绱緔鞝") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("shan"), QString::fromLocal8Bit("山彡邖删刪芟杉钐衫苫姗姍狦挻舢珊栅柵脠痁扇軕掺笘釤傓跚剼搧煽幓嘇潸澘鯅縿膻檆羴羶闪陕陝炶閃晱睒煔熌覢讪汕疝单訕剡赸掸掞善椫禅銏骟鄯僐缮墠墡樿敾歚擅嬗禪膳磰赡謆繕蟮蟺鐥饍鳝騸贍譱灗鱓鱔圸") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("she"), QString::fromLocal8Bit("奢猞赊畬畲畭輋賖賒檨舌佘折虵蛇阇揲蛥舍捨叶厍设社舎厙拾涉射赦設渉涻弽滠慑摄摂蔎慴歙蠂韘騇麝懾灄攝欇") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("shao"), QString::fromLocal8Bit("莦弰捎烧梢稍焼萷旓蛸艄筲輎鞘燒髾鮹勺芍杓苕柖玿韶少邵卲劭绍袑哨娋紹睄綤潲蕱") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("shei"), QString::fromLocal8Bit("谁") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("shen"), QString::fromLocal8Bit("申扟屾伸身籶侁参诜冞罙呻妽绅柛氠穼珅姺籸娠峷莘眒甡砷深紳敒兟訷棯裑葠蓡罧詵糁甧蔘糂鲹駪薓燊曑鵢鯓鯵鰺什神甚鉮鰰邥弞沈矤审哂矧谂谉婶訠渖諗審頣魫曋瞫瀋嬸讅覾肾胂侺昚涁眘脤渗祳葚腎瘆慎愼椹蜃蜄滲鋠瘮堔榊籡") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("shou"), QString::fromLocal8Bit("収收熟扌手守首垨艏寿受狩兽售授涭绶痩膄壽夀瘦綬獣獸鏉") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("shi"), QString::fromLocal8Bit("尸失师呞邿诗鸤虱狮施屍浉師絁釶葹湿湤溼溮蒒蓍鉇詩獅瑡酾鳲嘘鳾箷蝨褷鲺鍦濕鯴鰤鶳襹釃十饣什石时识实実旹飠食祏炻蚀拾姼峕埘莳時遈寔湜溡塒鉐實榯蝕鲥鼫鼭識鰣史矢乨豕使驶始屎宩兘笶鉂駛士氏礻示市世丗仕似卋忕式戺亊事侍势试呩饰视柹柿枾昰是贳恃恀眂峙拭冟室适逝眎眡铈舐轼烒栻秲釈視释貰弑谥徥揓崼嗜蒔勢弒軾筮睗觢試鈰鉃飾鉽誓舓適奭餝餙銴諡諟澨噬嬕遾螫謚簭釋襫乄辻佦竍嵵煶鮖籂鰘籡鱰") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("sheng"), QString::fromLocal8Bit("升生阩呏声斘枡昇泩狌苼陞珄牲殅陹笙湦焺甥鉎鍟聲鼪鵿渑绳憴縄繉繩譝省眚偗渻圣胜晟晠乘剰盛貹剩勝嵊琞聖墭榺蕂賸竔曻﨡橳") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("shu"), QString::fromLocal8Bit("书殳抒纾陎叔枢杸姝荼倏倐殊紓書焂梳鄃菽婌掓軗淑疏疎舒琡綀毹毺摅输跾踈蔬樞輸鮛橾儵攄鵨尗秫孰赎塾熟璹贖属暑暏黍鼠蜀数署潻薯薥曙癙藷襡襩屬术朮戍束沭述侸荗咰树怷竖恕捒庶庻蒁絉術裋尌鉥腧竪墅漱潄澍數豎錰霔濖樹鶐鏣虪瀭糬蠴") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("shua"), QString::fromLocal8Bit("刷唰耍誜") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("shuang"), QString::fromLocal8Bit("双泷爽霜雙骦孀孇騻欆鷞鹴礵艭驦鸘漺慡縔塽灀﨎鏯") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("shuan"), QString::fromLocal8Bit("闩拴閂栓涮腨") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("shuai"), QString::fromLocal8Bit("衰摔甩帅帥率蟀卛") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("shui"), QString::fromLocal8Bit("谁脽誰氵水氺说帨涗涚祱税稅裞睡") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("shun"), QString::fromLocal8Bit("楯吮顺順舜蕣橓瞚瞤瞬鬊") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("song"), QString::fromLocal8Bit("忪松枀枩柗娀凇倯菘庺崧淞梥硹嵩濍憽檧鬆怂悚耸竦愯楤傱嵷慫聳駷讼宋诵送訟颂頌誦鎹餸") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("shuo"), QString::fromLocal8Bit("说説說妁烁朔铄硕欶矟蒴搠獡槊碩箾鎙爍鑠") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("si"), QString::fromLocal8Bit("厶纟丝司糹私泀咝俬思恖鸶虒偲缌媤蛳斯絲鉰楒禗飔凘厮禠蜤锶銯罳鋖緦磃澌嘶噝撕蕬廝燍螄鍶颸蟖蟴騦鐁鷥鼶死巳亖四似寺汜泤姒兕伺佀祀孠杫価驷饲泗洠娰俟枱柶牭食飤肂涘洍耜耛梩笥釲覗竢肆嗣貄鈶鈻飼榹禩駟蕼儩瀃厑唜旕鯐鶍") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("sou"), QString::fromLocal8Bit("叟凁捜鄋搜蒐蓃廀廋嗖獀馊溲飕摉摗锼螋艘醙鎪餿颼騪叜傁嗾瞍擞薮藪櫢籔嗽瘶擻") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("su"), QString::fromLocal8Bit("苏甦酥窣稣穌鯂蘓蘇櫯囌俗玊夙诉泝肃洬涑莤速珟素粛殐梀骕宿谡傃粟訴肅鹔愫塑塐遡嫊嗉溯溸缩遬蔌僳榡愬膆趚觫鋉餗碿樎樕憟潥潚縤簌謖藗橚璛蹜驌鷫鱐苆") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("suan"), QString::fromLocal8Bit("狻痠酸匴祘笇筭蒜算") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("sui"), QString::fromLocal8Bit("夊芕尿虽浽荾哸倠隋眭睢滖熣鞖濉雖绥随遂遀綏隨髄瓍膸瀡髓亗岁砕祟谇埣嵗煫歲歳碎睟粹隧澻穂嬘賥誶燧檖禭璲穗穟邃襚繀繐繸旞譢鐆鐩韢荽") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("sun"), QString::fromLocal8Bit("孙狲荪孫飧飱猻搎蓀槂蕵薞笋损隼筍損榫箰簨鎨鶽潠") },
{ QString::fromLocal8Bit("s"), QString::fromLocal8Bit("suo"), QString::fromLocal8Bit("莎莏唆娑挱桫梭挲傞睃嗍蓑羧摍缩趖簑簔縮鮻所唢索琐惢锁嗩溑暛褨瑣璅鎖鎻鎍鏁逤溹蜶琑嗦鱛") },

{ QString::fromLocal8Bit("t"), QString::fromLocal8Bit("ta"), QString::fromLocal8Bit("他它她牠祂铊趿鉈溻塌榙禢褟踏溚塔墖獭鮙鳎獺鰨拓沓挞闼狧粏崉涾傝嗒遝阘搨漯毾榻澾撻誻錔橽嚃鞜蹋濌鞳闒蹹闥嚺譶躢侤萙遢燵襨鶎鱩") },
{ QString::fromLocal8Bit("t"), QString::fromLocal8Bit("tan"), QString::fromLocal8Bit("坍贪怹痑啴舑貪滩摊嘽瘫潬擹攤灘癱坛昙郯倓谈弹婒埮惔覃锬痰榃谭潭憛墰墵談醈曇錟壇燂橝澹檀顃罈藫壜譚醰貚譠罎忐坦钽袒菼毯僋鉭嗿憳憻醓暺璮叹炭探湠嘆碳舕歎") },
{ QString::fromLocal8Bit("t"), QString::fromLocal8Bit("tai"), QString::fromLocal8Bit("台囼孡苔胎邰旲坮骀抬炱炲菭跆鲐颱臺箈駘鮐儓薹擡嬯檯籉呔太夳冭汏汰汱忲肽态钛舦泰酞鈦溙態燤") },
{ QString::fromLocal8Bit("t"), QString::fromLocal8Bit("tao"), QString::fromLocal8Bit("夲叨弢涛绦掏焘絛詜慆搯滔幍嫍槄瑫韬飸縚縧轁濤謟鞱韜饕迯匋洮逃咷陶桃梼萄淘绹啕祹裪蜪綯鞀鞉醄鋾駣騊饀鼗讨討套") },
{ QString::fromLocal8Bit("t"), QString::fromLocal8Bit("tang"), QString::fromLocal8Bit("汤铴湯嘡羰劏蝪趟薚镗蹚鏜鞺鼞坣唐堂棠啺鄌傏蓎隚搪溏塘煻榶漟禟瑭膅膛磄糃樘橖糖螗篖踼赯醣螳糛鎕餹饄闛鶶伖帑倘偒淌惝傥耥躺镋鎲儻戃爣曭矘钂烫摥燙鐋") },
{ QString::fromLocal8Bit("t"), QString::fromLocal8Bit("te"), QString::fromLocal8Bit("忑忒特铽慝鋱蟘朰扨脦罀") },
{ QString::fromLocal8Bit("t"), QString::fromLocal8Bit("teng"), QString::fromLocal8Bit("膯鼟疼痋幐腾誊漛滕邆駦螣縢謄儯藤騰鰧籐籘虅驣霯") },
{ QString::fromLocal8Bit("t"), QString::fromLocal8Bit("tiao"), QString::fromLocal8Bit("旫佻庣挑恌祧聎芀条苕迢岧岹祒條调萔笤蓚蓨龆樤蜩鋚鲦鞗髫鯈鎥齠鰷宨晀朓脁窕誂窱斢嬥眺粜絩覜趒跳糶") },
{ QString::fromLocal8Bit("t"), QString::fromLocal8Bit("tian"), QString::fromLocal8Bit("天兲婖添酟靔黇靝田佃沺屇恬胋畋畑畠钿甜甛菾湉填塡嗔阗搷碵緂窴磌璳闐鷆鷏忝殄倎唺淟悿觍晪琠腆睓痶舔餂瑱賟覥錪掭舚鴫") },
{ QString::fromLocal8Bit("t"), QString::fromLocal8Bit("ti"), QString::fromLocal8Bit("体剔梯锑踢銻擿鷉鷈厗荑绨偍媞崹提渧缇惿遆啼稊鹈罤题瑅綈嗁睼褆碮漽蕛徲緹醍趧蹄蹏鍗鳀謕鮷題鵜騠鶗鶙鯷禵鷤挮躰骵軆體戻屉洟剃俶倜逖涕悌惕屜掦逷啑笹悐惖替揥裼褅歒髰殢薙嚏鬀鬄瓋嚔籊趯") },
{ QString::fromLocal8Bit("t"), QString::fromLocal8Bit("tie"), QString::fromLocal8Bit("帖怗贴萜聑貼铁蛈鉄銕僣鐡鐵驖呫飻餮") },
{ QString::fromLocal8Bit("t"), QString::fromLocal8Bit("tou"), QString::fromLocal8Bit("偷偸媮婾鋀鍮亠头投骰頭妵紏敨黈蘣透") },
{ QString::fromLocal8Bit("t"), QString::fromLocal8Bit("tu"), QString::fromLocal8Bit("凸宊秃禿怢突涋捸湥堗葖痜嶀鋵鵚鼵図图凃荼徒途庩峹捈涂悇梌屠菟揬稌瘏筡鈯嵞塗蒤腯廜潳瑹酴跿圖圗馟駼鍎鵌鶟鷋鷵土圡吐钍唋釷兎迌兔莵堍鵵汢溌") },
{ QString::fromLocal8Bit("t"), QString::fromLocal8Bit("tong"), QString::fromLocal8Bit("恫炵通痌絧嗵蓪熥樋仝同彤佟侗庝峂峒峝哃狪茼垌烔晍桐浵砼蚒秱铜眮童粡赨詷酮鉖銅鉵餇鲖勭僮潼獞橦犝曈朣膧燑氃穜瞳鮦统捅桶統筒筩綂恸痛衕慟憅") },
{ QString::fromLocal8Bit("t"), QString::fromLocal8Bit("ting"), QString::fromLocal8Bit("厅庁汀町听耓烃厛烴桯綎鞓聴聼廰聽廳邒廷莛庭亭停葶婷嵉渟蜓筳楟榳閮霆蝏聤諪鼮圢甼侹娗挺涏烶梃珽脡铤艇颋誔鋌頲") },
{ QString::fromLocal8Bit("t"), QString::fromLocal8Bit("tuan"), QString::fromLocal8Bit("猯湍圕煓貒团団抟剸摶漙團慱槫篿檲鏄糰鷒鷻畽墥疃彖湪褖") },
{ QString::fromLocal8Bit("t"), QString::fromLocal8Bit("tun"), QString::fromLocal8Bit("吞呑旽涒焞朜噋暾屯坉囤忳芚蛌軘豚豘飩鲀魨黗霕臀臋氽褪饨") },
{ QString::fromLocal8Bit("t"), QString::fromLocal8Bit("tui"), QString::fromLocal8Bit("忒推蓷藬弚颓隤尵橔頹頺頽魋蘈穨蹪俀腿僓蹆骽侻退娧煺蜕蛻褪駾燵") },
{ QString::fromLocal8Bit("t"), QString::fromLocal8Bit("tuo"), QString::fromLocal8Bit("乇仛讬饦托扡汑杔佗侂咜咃沰拖拕说侻莌捝挩袥託飥涶脱脫馲魠鮵阤驮陁陀驼狏岮沱坨柁鸵砣砤袉紽詑酡跎堶馱碢槖駄駝駞橐鴕鮀鼧鵎騨鼍驒驝鼉彵妥庹椭楕嫷橢鰖拓柝毤萚唾跅毻箨嶞魄蘀籜鵇") },

{ QString::fromLocal8Bit("w"), QString::fromLocal8Bit("wa"), QString::fromLocal8Bit("屲凹穵劸洼哇挖娲窊畖窐媧啘嗗瓾蛙搲溛漥窪鼃韈攨娃瓦邷佤咓砙袜聉嗢腽膃襪韤瓸甅") },
{ QString::fromLocal8Bit("w"), QString::fromLocal8Bit("wai"), QString::fromLocal8Bit("咼歪喎竵崴外顡") },
{ QString::fromLocal8Bit("w"), QString::fromLocal8Bit("wei"), QString::fromLocal8Bit("厃危委威烓隈隇偎逶喴葳葨媙崴嵔揻揋愄溦椳楲詴煨微蜲蝛覣縅薇燰鳂癓鰃鰄巍霺囗为韦圩围囲闱违帏沩洈峗峞為韋桅涠帷唯维惟琟嵬媁圍喡幃違湋溈爲維潍鄬蓶潿潙醀鍏闈鮠濰壝矀覹犩欈伟伪苇芛尾纬炜玮洧浘娓荱诿隗偽偉萎崣梶痏硊骩骫骪愇猥渨蒍葦徫廆椲暐煒艉痿瑋韪腲鲔撱嶉僞寪蔿頠緯諉踓韑薳儰濻鍡鮪颹韙瀢韡亹斖卫未位苿味胃畏軎叞菋谓硙尉遗喂媦猬渭煟蔚碨蜼蝟磑犚慰緭熭衛衞餧鮇懀謂罻螱褽魏餵轊藯鏏鳚霨蘶饖讆躗躛讏捤墛嶶") },
{ QString::fromLocal8Bit("w"), QString::fromLocal8Bit("wang"), QString::fromLocal8Bit("尢尣尪汪尫尩亾兦亡王仼莣蚟罓罒网彺往徃罔枉惘菵辋棢暀蛧蝄網輞誷魍瀇妄迋忘旺徍望朢") },
{ QString::fromLocal8Bit("w"), QString::fromLocal8Bit("wen"), QString::fromLocal8Bit("昷温溫辒殟榅瑥瘟榲緼蕰豱輼轀鳁鞰鰛鰮文芠彣纹炆闻蚊蚉紋阌珳雯駇馼聞瘒鳼鴍魰螡閿閺闅蟁鼤繧闦刎伆吻呅抆呡肳紊桽脗稳穏穩问妏免汶莬問渂揾搵絻顐璺塭鎾饂") },
{ QString::fromLocal8Bit("w"), QString::fromLocal8Bit("wan"), QString::fromLocal8Bit("涴弯剜帵婠湾塆睕蜿豌潫彎壪灣丸刓芄汍纨完岏抏玩紈捖顽貦烷頑翫宛倇莞挽盌唍绾埦惋梚菀萖婉脘晚晥晩晼琬皖椀碗畹綰綩輓踠鋔万卐卍忨妧捥脕腕萬蔓輐澫鋄錽薍瞣蟃贃鎫贎乛杤笂琓") },
{ QString::fromLocal8Bit("w"), QString::fromLocal8Bit("weng"), QString::fromLocal8Bit("翁嗡滃鹟螉聬鎓鶲勜奣嵡蓊塕暡瞈攚瓮蕹甕罋齆") },
{ QString::fromLocal8Bit("w"), QString::fromLocal8Bit("wo"), QString::fromLocal8Bit("挝涡倭莴萵唩猧渦涹窝喔窩蜗蝸踒我婑婐捰仴沃肟枂卧臥捾涴偓幄媉渥握焥硪楃腛斡瞃龌臒瓁濣齷遤") },
{ QString::fromLocal8Bit("w"), QString::fromLocal8Bit("wu"), QString::fromLocal8Bit("兀乌邬弙污汙汚圬呜巫杇於屋洿诬钨恶烏剭窏鄔嗚誈誣歍箼螐鴮鎢鰞亡无毋芜吾吴吳呉郚茣莁唔娪峿浯洖梧祦珸铻鹀無蜈鋙蕪墲橆璑鵐蟱鯃譕鼯鷡五午伍仵迕妩庑怃忤玝武侮倵逜陚捂娒娬牾啎珷鹉碔摀熓瑦舞憮潕廡嫵儛甒瞴鵡躌兀勿阢务戊扤屼岉芴坞杌物忢旿矹卼敄俉误務悟悮悞粅晤焐痦婺隖骛嵍靰雾雺嵨奦溩塢鹜熃寤誤鋈窹霚鼿齀霧騖蘁鶩厼朰鯲") },

{ QString::fromLocal8Bit("x"), QString::fromLocal8Bit("xi"), QString::fromLocal8Bit("夕兮邜吸汐忚西扸希卥析昔穸肸肹矽怸饻恓郗茜俙徆莃奚娭唏浠狶悕屖栖牺氥息悉硒琋赥釸欷晞桸惜烯焁焈淅渓唽菥傒鄎焟焬犀晰晳翕翖舾粞稀睎惁腊锡皙裼煕厀徯蒠溪嵠僖熙熈熄榽蜥緆餏覡豨瘜磎膝潝嘻噏嬉嬆凞樨橀暿歙熺熻熹螅螇窸羲錫貕蹊豯蟋谿豀瞦燨犠巂繥糦鵗譆醯觹鏭鐊隵酅巇嚱犧曦爔饎觽鼷鸂蠵觿鑴习郋席觋習袭喺媳蓆蒵椺嶍漝趘槢褶薂隰檄謵鎴鳛霫飁騱騽鰼襲驨洗枲玺铣徙喜葸葈鈢鉨鉩蓰漇屣憘歖禧憙諰謑縰壐蟢蹝璽鱚矖囍躧匸卌戏饩屃系呬细郄怬忥盻恄郤係咥屓绤欯阋細釳趇舄舃塈隙椞禊慀隟綌赩熂墍犔稧潟澙戯蕮覤縘黖戱戲磶虩餼鬩繫闟霼衋屭巪凩巼夞莻唟裃硳喸聢噺橲礂鯐") },
{ QString::fromLocal8Bit("x"), QString::fromLocal8Bit("xia"), QString::fromLocal8Bit("呷虾谺閕傄颬煆瞎蝦鰕匣狎侠俠狭陜峡炠柙烚峽埉狹祫珨硖翈舺陿假葭硤遐筪瑕舝敮暇辖碬磍蕸縖赮魻霞鍜轄鎋黠騢鶷閜丅下吓疜夏唬厦睱諕懗罅夓鎼鏬圷梺") },
{ QString::fromLocal8Bit("x"), QString::fromLocal8Bit("xian"), QString::fromLocal8Bit("仚仙屳纤先奾忺佡氙杴秈苮祆枮籼莶珗掀铦锨酰跹僊僲銛鲜嘕韯銽暹薟憸嬐鍁韱鮮褼繊蹮馦孅攕廯纎鶱躚襳纖鱻闲伭弦咁妶贤胘涎盷咸挦娴娹婱蚿絃衔舷閑閒蛝鹇痫湺啣嗛嫌甉銜誸賢羬稴澖憪嫻嫺撏諴醎輱癇癎瞯藖礥鹹麙贒鷼鷳鷴冼狝险洗显烍毨蚬崄険猃赻铣筅蜆跣禒搟尠尟銑箲險獫嶮獮藓鍌燹顕幰攇蘚櫶譣玁韅顯灦见县苋岘限现线臽県陥宪姭娊峴陷莧哯涀垷埳現晛馅羡缐睍絤腺粯塪献羨僩僴誢綫線鋧撊憲橺橌錎餡縣豏壏麲臔瀗獻糮霰鼸咞衘鑦") },
{ QString::fromLocal8Bit("x"), QString::fromLocal8Bit("xiang"), QString::fromLocal8Bit("乡芗相香郷鄉鄊厢廂湘缃鄕葙萫薌箱緗膷襄麘忀骧欀瓖镶纕鑲驤瓨降佭详庠栙祥絴翔詳跭享亯响饷蚃晑飨想銄餉鲞鮝蠁鯗響饗饟鱶向姠巷项珦象項缿衖勨像嶑橡曏襐蟓嚮鐌鱌") },
{ QString::fromLocal8Bit("x"), QString::fromLocal8Bit("xiao"), QString::fromLocal8Bit("灱灲肖枭呺哓削侾骁枵绡庨烋宵宯逍消鸮虓婋猇萧梟焇销痚痟翛硝硣窙蛸綃揱箫嘐潇踃歊銷霄獢撨嘵憢膮蕭彇颵魈鴞鴵簘蟏蟂藃穘嚣瀟蟰簫髇櫹囂嚻髐鷍驍蠨毊虈洨郩崤淆訤殽誵小晓暁筱筿皛篠謏曉皢孝効恔咲哮涍俲笑校效啸傚敩詨誟嘨嘋嘯熽歗斆斅﨧") },
{ QString::fromLocal8Bit("x"), QString::fromLocal8Bit("xing"), QString::fromLocal8Bit("兴狌星垶骍猩惺煋瑆腥觪篂箵鮏興觲騂曐皨鯹刑邢饧行陉形侀郉陘荥洐型钘娙铏硎鈃蛵滎銒鉶鋞餳省睲醒擤杏性幸姓荇莕倖婞悻涬葕緈﨨嬹臖哘謃") },
{ QString::fromLocal8Bit("x"), QString::fromLocal8Bit("xin"), QString::fromLocal8Bit("忄心邤辛芯妡忻炘杺欣昕盺莘俽惞訢鈊锌歆新廞鋅噷嬜薪馨鑫馫枔镡襑鐔伈阠伩囟孞信軐訫脪衅焮馸顖舋釁") },
{ QString::fromLocal8Bit("x"), QString::fromLocal8Bit("xie"), QString::fromLocal8Bit("些娎猲揳楔歇蝎蠍叶邪劦协旪胁協奊垥恊峫挟拹挾脇脋脅衺斜谐偕絜翓綊瑎愶嗋携熁膎鲑鞋蝢緳缬撷擕縀勰諧燲嚡擷鞵襭攜孈讗龤写血冩寫藛伳灺绁泄泻祄缷洩炧炨契卸卨屑烲禼徢偰偞焎紲械絏絬亵谢屟媟渫塮僁解靾榭榍褉暬緤噧屧獬嶰澥懈廨邂薤薢糏韰謝褻燮夑瀉鞢齘繲蟹蠏瀣爕齛齥纈齂躞") },
{ QString::fromLocal8Bit("x"), QString::fromLocal8Bit("xiong"), QString::fromLocal8Bit("匂凶兄兇匈讻芎忷汹洶恟哅胸胷訩詾賯雄熊熋焸焽诇詗夐敻楿") },
{ QString::fromLocal8Bit("x"), QString::fromLocal8Bit("xu"), QString::fromLocal8Bit("吁圩戌盱疞砉欨胥须顼訏許裇虚虗偦谞媭揟湑欻虛須綇楈需魆墟嘘噓蕦嬃歔縃緰蝑諝歘燸譃魖繻驉鬚鑐俆徐冔禑蒣许诩呴姁浒栩珝喣暊詡稰鄦糈諿醑盨旭旴伵芧序汿侐卹怴沀恤昫叙洫晇殈烅珬垿欰畜酗烼绪续敍敘勖勗溆婿壻聓訹絮朂続賉頊滀蓄慉煦槒漵潊銊聟緒盢瞁稸魣緖獝藇藚續鱮﨏蓿") },
{ QString::fromLocal8Bit("x"), QString::fromLocal8Bit("xiu"), QString::fromLocal8Bit("休俢修庥咻脩烌羞脙鸺臹貅馐髤銝樇髹鵂鎀鏅饈鱃飍苬朽宿滫潃糔秀岫峀绣珛袖臭琇锈綉溴嗅璓褏褎銹螑繍嚊繡鏥鏽齅鮴") },
{ QString::fromLocal8Bit("x"), QString::fromLocal8Bit("xue"), QString::fromLocal8Bit("削疶蒆靴薛辥辪鞾穴斈乴茓峃学泶鸴袕踅學嶨壆噱燢澩觷鷽彐雪鳕鱈吷狘岤坹桖谑趐謔瞲瀥樰膤轌") },
{ QString::fromLocal8Bit("x"), QString::fromLocal8Bit("xuan"), QString::fromLocal8Bit("吅轩昍宣弲晅軒梋谖萱萲喧媗揎塇愃愋煖煊蓒暄瑄睻蝖禤箮翧儇鋗鞙蕿嬛懁諠諼駽鍹翾蠉矎蘐藼譞玄县玹痃悬琁旋蜁嫙漩璇暶檈璿懸咺选烜選癣癬券泫怰炫昡绚眩铉袨琄眴衒渲絢楦楥鉉碹蔙镟颴縼繏鏇贙") },
{ QString::fromLocal8Bit("x"), QString::fromLocal8Bit("xun"), QString::fromLocal8Bit("坃勋荤埙焄勛塤熏窨勲勳薫薰壎獯曛臐燻蘍矄纁爋壦醺廵巡寻旬杊郇询畃荨荀浔洵峋恂紃珣栒桪毥偱循尋揗詢鲟鄩噚潭潯駨璕攳燖燅樳蟳鱏鱘灥卂讯训迅伨驯汛侚狥逊迿巺徇殉訊訓訙浚奞殾巽稄馴遜愻蕈噀顨鑂嚑") },

{ QString::fromLocal8Bit("y"), QString::fromLocal8Bit("ya"), QString::fromLocal8Bit("ㄚ丫圧吖压厌呀庘押枒鸦哑鸭桠孲铔雅椏鴉鴨錏壓鵶鐚牙伢芽岈厓玡琊蚜笌堐猚崖崕涯釾睚衙漄齖疋厊庌疨唖啞痖瘂蕥劜圠轧覀襾冴亚讶迓亜犽亞軋砑挜娅垭俹氩掗訝埡婭猰聐揠氬稏圔窫齾鯲鑓軈") },
{ QString::fromLocal8Bit("y"), QString::fromLocal8Bit("yan"), QString::fromLocal8Bit("咽恹烟殷珚胭焉淹淊阏阉崦湮腌硽煙歅鄢傿嫣漹嶖醃閹燕懨嬮篶懕臙黫讠延闫妍芫严阽言訁郔岩沿炎炏昖狿埏莚姸娫研铅盐娮阎啱琂硏訮閆蜒綖筵嵒嵓喦塩揅楌詽碞蔅颜虤閻厳檐顔顏簷壛巌嚴櫩巖巗壧鹽礹麣夵抁沇奄乵兖兗匽弇俨衍剡眼酓偃掩郾厣萒遃隒嵃揜渰渷扊棪愝晻琰罨裺椼演嵼褗蝘魇戭噞躽縯黡檿厴黤甗鶠鰋龑黭黬儼孍顩鼴鼹魘巘巚曮齴黶厌妟觃牪砚姲彦彥烻唁验宴艳晏覎偐谚隁焔焰焱堰喭雁敥猒硯椻鳫滟溎墕熖厭酽暥鴈谳嬊餍燄赝鬳諺鴳曕嚈酀騐験艶贋嚥嬿爓曣騴醶齞鷃贗灔囐鷰驗醼讌觾饜艷釅驠灎灧讞豓豔灩剦樮軅") },
{ QString::fromLocal8Bit("y"), QString::fromLocal8Bit("yao"), QString::fromLocal8Bit("幺夭吆约妖殀祅要訞喓葽楆腰鴁鴢徼邀爻尧尭肴侥荛姚峣轺垚烑陶倄珧窑铫堯揺傜谣軺滧徭遥遙嗂媱猺摇搖愮摿榣暚飖瑶瑤餆窯窰磘嶢嶤餚繇謡謠鎐鳐颻蘨邎顤鰩鱙仸宎岆抭杳枖狕苭咬柼眑窅窈舀偠婹崾溔蓔榚闄騕齩鷕疟穾药钥袎窔葯筄詏靿覞熎鹞獟鼼薬藥燿曜艞矅耀纅鷂讑") },
{ QString::fromLocal8Bit("y"), QString::fromLocal8Bit("yang"), QString::fromLocal8Bit("央姎抰泱殃胦秧眏鸯鉠雵鞅鴦鍈阳阦扬羊飏炀杨旸钖疡氜劷佯徉洋垟昜羏珜烊陽眻蛘揚崵崸煬楊敭瑒暘瘍輰諹鍚鴹颺鰑霷鸉卬仰佒咉岟坱炴柍养氧痒紻軮楧傟慃氱飬蝆養駚懩攁瀁癢怏恙样羕詇漾様樣礢") },
{ QString::fromLocal8Bit("y"), QString::fromLocal8Bit("ye"), QString::fromLocal8Bit("吔耶倻掖椰暍歋潱噎擨蠮邪爷捓揶铘爺瑘鋣鎁ㄝ也冶野埜嘢漜壄业叶曳页曵邺抴夜枼拽亱咽頁捙枽烨晔液谒葉腋殗業煠馌墷璍僷燁曅曄皣瞱擛鄴靥餣謁嶪嶫澲擫瞸曗鍱鎑饁擪礏爗鵺鐷靨驜鸈丆亪") },
{ QString::fromLocal8Bit("y"), QString::fromLocal8Bit("yi"), QString::fromLocal8Bit("一弌衤伊衣医吚壱依祎洢咿郼渏悘铱猗蛜壹揖椅禕漪稦銥嫛嬄撎夁噫瑿鹥繄檥檹醫毉黟譩鷖黳乁义匜仪夷圯宐诒冝杝沂沶侇迤宜狋怡饴拸姨恞贻峓迻荑瓵珆咦訑貤胰栘桋巸眙袘宧扅萓蛇痍移椬蛦貽詒羠遗媐颐飴頉誃跠椸暆疑熪遺儀彛彜嶬螔頤頥顊鴺鮧簃嶷寲彝彞謻鏔籎觺讉乙已以迆钇攺矣苡佁尾苢迱庡舣蚁釔笖酏扆逘倚偯旑崺鈘鉯鳦裿蛾旖踦輢螘敼嬟礒蟻艤顗轙齮乂亿弋刈艺忆艾阣仡议肊伇芅亦异忔屹抑坄呓劮役苅佚译耴杙邑枍炈易衪秇诣佾呹呭驿泆怿怈绎峄浂帟帠俋弈奕疫羿昳玴轶枻食栧欭袣益谊唈浥浳挹悒垼埸埶逸勚萟殹翊翌悥豙豛異訲訳隿釴羛鈠軼骮跇詍晹敡殔棭焲蛡鄓湙幆嗌溢缢兿義亄睪獈竩痬意詣肄裔裛駅榏瘗膉蜴蓺勩廙嫕潩億鹝鹢毅镒瘞槸熠熤熼篒誼黓艗燚曀殪瘱瞖穓螠褹縊劓薏澺嬑嶧墿圛懌憶寱翳翼臆斁歝曎燡燱檍賹貖鮨鎰贀镱癔藝藙繹繶豷霬鯣鶂鶃饐醷醳譯議蘙瀷囈鐿鷊鷁懿襼鷧驛鷾鸃虉齸讛辷匇凧弬夞畩鶍鶎") },
{ QString::fromLocal8Bit("y"), QString::fromLocal8Bit("yin"), QString::fromLocal8Bit("囙因阴阥侌茵骃姻洇垔音栶氤殷陰隂陻凐秵铟裀絪筃堙愔喑婣溵蔭蒑禋慇瘖銦鞇磤緸諲霒駰霠闉噾濦齗韾冘乑吟犾圻烎斦泿垠圁狺峾荶珢訚訔訡银淫寅婬崟崯鈝龂滛碒鄞蔩夤銀龈誾璌殥噖嚚蟫檭霪齦鷣廴引尹饮吲蚓隐赺鈏飲淾隠飮靷輑朄趛瘾檃隱嶾濥螾檼蘟櫽癮讔印茚荫洕胤垽堷湚猌廕窨酳癊慭憖憗鮣懚岃粌") },
{ QString::fromLocal8Bit("y"), QString::fromLocal8Bit("ying"), QString::fromLocal8Bit("应応英莺珱偀渶绬婴媖瑛煐朠锳碤嫈嘤缨撄甇緓蝧罂賏樱璎鹦噟霙罃褮鴬韺嬰膺應鹰甖鶑鶧罌譍孆嚶攖蘡孾瀴櫻瓔礯譻鶯鑍鷪蠳纓鷹鸎鸚迎盁茔荥荧盈莹萤营萦蛍営萾溁溋滢蓥塋楹僌颖熒蝇潆蝿禜瑩螢營嬴縈覮謍赢濙濚濴藀瀅蠅鎣巆攍瀛瀯瀠贏櫿灐籝灜籯郢矨浧梬颍颕摬影潁穎瘿頴鐛廮巊癭映暎硬媵膡鱦栍桜愥闏") },
{ QString::fromLocal8Bit("y"), QString::fromLocal8Bit("yo"), QString::fromLocal8Bit("育哟唷喲罀") },
{ QString::fromLocal8Bit("y"), QString::fromLocal8Bit("yong"), QString::fromLocal8Bit("佣拥邕痈庸傭嗈鄘雍嫞滽墉慵牅壅澭擁噰镛郺臃癕雝鳙鏞灉廱饔鷛鱅癰喁颙顒鰫永甬咏泳勇勈俑栐柡悀涌埇恿惥愑湧詠硧蛹塎嵱彮愹慂踊鲬踴鯒用苚蒏醟怺砽") },
{ QString::fromLocal8Bit("y"), QString::fromLocal8Bit("you"), QString::fromLocal8Bit("优忧攸怮呦泑幽峳浟逌悠麀羪滺憂鄾優瀀嚘懮櫌耰纋尢尤由甴沋邮犹油怞肬怣疣柚庮郵莜莸秞铀蚰訧偤逰遊猶游鱿鲉鈾楢猷輏駀魷蝤蝣蕕鮋輶繇友有酉丣卣苃羑莠栯梄铕聈湵蜏禉銪槱牖牗黝又右幼佑侑狖峟囿牰祐迶哊宥姷诱唀蚴亴釉貁酭誘褎鼬櫾孧") },
{ QString::fromLocal8Bit("y"), QString::fromLocal8Bit("yue"), QString::fromLocal8Bit("曰曱约約箹矱哕噦月乐戉刖妜岄抈礿玥泧岳说恱栎钥钺蚏蚎阅軏悦悅捳跃跀鈅越粤粵鉞閲閱篗樾嬳嶽龠籆蘥瀹黦躍爚禴籥鑰鸑籰鸙") },
{ QString::fromLocal8Bit("y"), QString::fromLocal8Bit("yuan"), QString::fromLocal8Bit("囦肙鸢剈冤鸳眢寃涴渊渁渆渕淵葾惌蒬棩鹓裷蜎箢鳶駌蜵鴛鵷嬽灁鼘鼝元円邧贠沅园芫员茒杬垣爰貟笎蚖袁圆原員厡媛猨援圎湲鼋缘鈨源溒園圓塬猿嫄媴蒝辕榞榬緣魭縁褤蝯蝝螈黿羱薗橼圜轅謜鎱櫞邍騵鶢鶰厵远盶逺遠鋺夗苑妴院怨衏垸傆掾禐瑗愿裫褑噮願") },
{ QString::fromLocal8Bit("y"), QString::fromLocal8Bit("yu"), QString::fromLocal8Bit("込迂迃吁扝扜纡於穻陓紆盓菸淤唹瘀箊与于亐予邘伃余妤扵杅欤玙玗盂衧臾鱼舁竽虶禺茰俞兪谀娱娛娯馀狳桙酑雩魚渔萸隅隃萮渝湡揄堣堬嵎嵛崳逾喁楰愉腴畬骬虞艅觎愚瑜歈榆楡牏舆窬睮褕漁蕍蝓歶雓餘諛羭踰覦嬩澞璵歟螸輿鍝謣髃鮽騟籅旟轝蘛鰅鷠鸆齵屿宇伛羽妪雨俣俁语挧禹圄祤圉敔匬鄅偊庾萭斞铻瘐楀與瑀傴寙語窳頨龉貐懙噳嶼斔穥麌齬肀驭玉聿芋芌圫饫汩忬谷欥育郁茟狱秗昱浴峪彧俼预钰砡粖袬谕逳菀尉阈淯淢惐悆欲域堉棫棛棜琙焴寓媀喻喅喩庽御遇馭飫粥鹆硲硢矞裕鈺誉罭預蓣蒮煜滪愈稢戫蔚僪隩嶎獄嫗緎蜮蜟毓瘉銉輍豫鋊鳿遹薁蓹熨潏稶慾澦燠燏蕷鴥鴪鴧錥諭閾礇禦鹬魊儥鵒礜癒醧篽饇櫲蘌霱譽鐭雤鬻驈欎鷸鱊籞鸒欝龥鬰鬱籲灪爩礖軉") },
{ QString::fromLocal8Bit("y"), QString::fromLocal8Bit("yun"), QString::fromLocal8Bit("晕蒀缊蒕煴氲氳熅奫蝹赟馧贇匀勻云伝芸员妘沄纭囩昀秐眃畇郧涢耺耘紜雲鄖蒷溳愪筠筼熉澐蕓鋆篔縜橒允阭狁抎夽陨荺殒隕喗鈗馻殞磒賱霣齫齳孕运郓枟恽酝鄆傊運愠惲慍暈韫腪韵褞熨蕴薀縕醖醞餫韞韗藴蘊韻抣") },

{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("za"), QString::fromLocal8Bit("帀扎匝沞咂拶桚鉔魳臜臢杂沯砸韴雑襍雜囃囋雥咋乽橴") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zan"), QString::fromLocal8Bit("兂糌橵篸簪簮鵤鐟鐕咱偺喒拶昝寁揝撍噆儧攅攒儹攢趱趲暂暫賛赞錾鄼酂濽蹔鏨贊瓉瓒酇囋灒讃瓚禶襸讚饡") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zao"), QString::fromLocal8Bit("傮遭糟醩蹧凿鑿早枣蚤棗澡璪薻藻灶皂皁造唣唕梍慥煰喿艁簉噪燥竃竈譟趮躁栆") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zang"), QString::fromLocal8Bit("匨赃牂脏羘賍賘臧贓髒贜驵駔奘弉塟葬蔵銺藏臓臟欌") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zai"), QString::fromLocal8Bit("灾災甾哉烖栽渽溨睵賳仔宰载崽再扗在洅傤載酨儎縡岾") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("ze"), QString::fromLocal8Bit("则沢泽泎责迮咋择則帻啧啫舴笮責矠滜溭箦嘖嫧幘蔶赜樍歵諎擇瞔皟簀賾礋襗謮蠌齚齰鸅仄庂汄昃昗侧捑崱択硳") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zeng"), QString::fromLocal8Bit("曽曾増鄫缯增憎橧璔磳矰罾繒譄综锃鋥赠熷甑鬵贈囎") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zen"), QString::fromLocal8Bit("怎谮譖") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zei"), QString::fromLocal8Bit("贼戝賊鲗蠈鰂鱡") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zha"), QString::fromLocal8Bit("扎吒咋抯挓查柤奓紥哳偧紮渣溠喳猹揸楂劄摣皶觰樝皻譇齄齇轧札闸炸铡蚻喋牐閘箚耫鍘譗厏苲拃眨砟鲊鲝鮓鮺乍诈灹咤栅柞痄宱蚱詐搾槎榨蜡霅醡蓙") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zhai"), QString::fromLocal8Bit("侧夈捚斋斎摘榸齋宅择翟檡窄鉙责柴债砦祭債寨粂瘵") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zhan"), QString::fromLocal8Bit("占沾枬毡旃栴蛅粘飦趈詀惉詹閚谵薝邅噡嶦霑氊氈瞻鹯旜譫饘鳣魙驙鸇鱣讝斩飐盏展崭斬琖盞搌辗嶄嶃榐颭醆嫸橏輾黵佔战栈桟站绽偡菚湛棧戦綻輚嶘戰虥虦襢覱轏譧驏蘸") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zhao"), QString::fromLocal8Bit("佋钊妱招巶昭釗着啁朝鉊鼌駋嘲鍣皽爫爪找沼瑵召兆诏枛炤狣垗赵笊肁棹旐詔罩照肇肈箌趙曌燳鮡瞾櫂羄罀") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zhang"), QString::fromLocal8Bit("仉张張章鄣傽蔁遧粻嫜獐彰漳慞樟暲璋餦蟑騿麞鱆长涨掌漲礃丈仗扙帐杖胀账涱帳脹障痮幛嶂墇賬瘴瘬瞕粀幥鏱") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zhe"), QString::fromLocal8Bit("折蜇遮嗻嫬螫厇歽矺砓虴籷袩埑哲啠辄晢晣悊喆詟蛰谪摺輒輙銸磔辙蟄鮿謫謺嚞轍讁讋者锗褚赭踷鍺褶襵这柘這浙淛蔗樜鹧蟅鷓粍") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zhei"), QString::fromLocal8Bit("这") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zhong"), QString::fromLocal8Bit("中伀汷彸刣忪妐炂忠泈终钟柊盅衳舯衷終鈡蜙锺幒蔠銿鴤螤螽鍾鼨蹱鐘籦肿种冢喠尰煄腫歱塚種瘇徸踵众仲妕狆祌衶重茽蚛眾偅堹媑筗衆諥") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zheng"), QString::fromLocal8Bit("丁正争佂诤征姃怔爭糽埩炡政挣狰峥烝脀钲眐症聇睁铮掙崝崢猙揁媜筝踭鉦睜徰蒸錚箏篜鲭鬇癥鏳氶抍拯掟晸愸撜整证郑証幁塣諍靕鄭鴊證") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zhi"), QString::fromLocal8Bit("之氏支只卮汁芝汦汥吱巵知肢泜织枝栀祗胝胑秓衼疷隻脂祬栺倁梔椥臸綕禔稙搘馶蜘榰憄鳷鴲織鼅蘵执侄妷直姪值値聀釞职淔埴執殖戠植犆禃跖絷瓡馽摭潪嬂漐慹踯膱樴縶蹢蹠職蟙軄躑夂止阯劧旨帋芷扺沚纸址坁坧抧茋祉秖恉轵枳砋衹咫指洔淽茝紙疻訨趾黹軹酯徴墌徵藢襧芖至豸扻伿识忮志炙质治垁郅迣厔制帜帙挃庢庤陟峙洷栉柣祑挚桎晊歭秩贽轾徏娡狾致袟紩畤窒痔痓铚鸷貭翐觗袠猘徝掷乿剬偫秷梽智滞崻傂骘痣彘蛭置锧跱輊筫雉寘搱廌滍稚滯墆銍製覟誌瘈疐觯踬質鋕熫稺膣摯摨幟擳隲璏旘瀄鴙駤緻螲懥櫛穉儨劕擿擲懫贄觶騭鯯櫍瓆豑礩騺驇鷙躓鑕豒俧潌") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zhou"), QString::fromLocal8Bit("州舟诌侜周洲诪炿烐珘调郮辀婤淍啁週徟鸼矪粥喌赒輈銂輖賙霌鵃謅盩嚋騆譸妯轴軸肘疛帚菷晭睭箒鯞纣伷咒呪绉宙冑祝昼咮荮紂胄皱酎粙舳晝葤詋甃僽駎皺縐噣骤繇籀籕籒驟碡駲") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zhua"), QString::fromLocal8Bit("抓挝撾檛膼簻髽爪") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zhu"), QString::fromLocal8Bit("朱邾侏诛茱洙诸珠株猪秼铢硃袾蛛絑誅跦銖槠蝫潴蕏橥諸豬駯鴸鮢鼄藸瀦鯺櫫櫧蠩术竹竺笁柚茿炢烛逐窋笜逫蓫瘃篴燭蠋躅鱁劚孎灟爥斸欘曯蠾钃丶主劯宔拄柱罜陼帾渚煮煑属詝褚濐嘱燝麈瞩囑鸀矚宁伫住佇芧苎助纻坾贮驻迬杼拀注祝柷炷殶壴莇祩竚眝疰砫蛀紵紸著庶羜铸筑貯軴註跓嵀鉒筯飳馵箸翥樦鋳駐麆築篫簗鑄墸") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zhen"), QString::fromLocal8Bit("贞针侦帧浈胗珍珎貞針祯桢真眞砧帪偵酙葴幀寊湞遉斟溱嫃獉搸蓁蒖甄椹楨禎鉁禛瑧榛碪殝潧箴臻樼澵薽錱轃鍼籈鱵诊枕抮轸昣弫姫屒眕疹畛袗聄紾裖軫覙診缜駗稹縝縥辴鬒黰阵圳纼甽鸩陣侲挋振栚朕紖眹赈塦揕絼賑誫镇震鴆鎭鎮鋴") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zhuai"), QString::fromLocal8Bit("拽转跩") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zhui"), QString::fromLocal8Bit("隹追骓椎锥錐騅鵻沝坠笍娷缀缒甀腏惴畷膇硾墜綴赘縋諈醊錣礈贅鑆") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zhuang"), QString::fromLocal8Bit("庄妆妝庒荘莊娤桩梉粧装湷裝樁糚奘壮壯状狀壵焋僮幢撞戆") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zhuan"), QString::fromLocal8Bit("专叀専砖專鄟嫥塼甎瑼膞磗颛磚諯顓蟤鱄转孨竱轉传沌灷啭転堟蒃瑑腞赚僎馔撰篆篹襈縳賺譔饌籑囀") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zhun"), QString::fromLocal8Bit("屯迍宒肫窀谆啍諄衠准埻凖準綧訰稕") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zhuo"), QString::fromLocal8Bit("拙炪捉倬桌棁梲涿棳焯槕穛擢鐯穱彴犳汋圴灼妰卓叕茁浊斫烵浞诼丵酌娺啄啅着椓晫斮斱琢琸硺罬窡禚斲撯擆劅諑諁鋜篧缴濁濯斵斀謶镯櫡鵫躅蠗灂鐲鷟籗蠿籱窧") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zou"), QString::fromLocal8Bit("邹驺陬郰诹菆掫棷棸鄒緅箃諏鲰鄹黀鯫騶齱齺赱走奏揍") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zong"), QString::fromLocal8Bit("宗枞倧骔综堫惾腙葼猣嵏嵕棕椶朡稯嵸潈綜緃翪踪踨緵熧蝬磫繌鍐鬃騌蹤騣鯮鬉鬷鯼鑁总倊偬捴揔搃惣焧傯蓗摠総縂緫燪總纵昮疭猔碂粽糉瘲縦縱豵糭") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zi"), QString::fromLocal8Bit("仔孖孜吱甾茊茲兹姿姕咨赀资玆栥紎赼缁秶崰淄谘菑葘鄑滋湽嵫椔粢辎嗞孳孶锱禌趑觜訾資貲緇緕龇鈭稵镃輜鼒鲻髭輺錙諮趦澬鍿鎡頾頿齍鶅鯔鰦纃齜蓻子吇杍姊姉胏秄矷虸耔籽秭呰茈笫釨梓啙紫滓訿榟字芓自荢茡剚倳牸恣眦眥渍胾胔漬嗭魸鯑") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zu"), QString::fromLocal8Bit("苴租菹葅蒩卆足卒哫崒崪族椊箤踤镞鏃阻诅组祖珇爼俎唨組詛靻鼡乼") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zun"), QString::fromLocal8Bit("尊嶟遵樽罇繜鐏鳟鷷鱒僔噂撙譐捘銌") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zui"), QString::fromLocal8Bit("咀厜脧嗺樶蟕纗觜嶊嘴噿璻栬冣絊酔晬祽最稡罪辠酻槜醉蕞嶵鋷錊檇檌") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zuan"), QString::fromLocal8Bit("钻鉆劗鑚躜躦鑽篹繤缵纂纉纘籫赚攥") },
{ QString::fromLocal8Bit("z"), QString::fromLocal8Bit("zuo"), QString::fromLocal8Bit("作嘬穝昨莋秨笮捽琢筰鈼稓左佐撮繓阼坐怍岞岝侳祚胙袏座唑做葃葄飵糳咗") }

};



int getComPingyinForStr(const QString & inStr, QString & outFrist_py, QString & outFull_py)
{
    // --- 条件返回
    outFrist_py.clear();
    outFull_py.clear();
    if (inStr.isEmpty())
    {
        return -1;
    }


    // --- 获取每个字的所有读音
    int numOfWord = inStr.size();
    QVector<QStringList> fristPys;
    QVector<QStringList> fullPys;
    for (int i_word = 0; i_word < numOfWord; i_word++)
    {
        QStringList fristPy;
        QStringList fullPy;
        getAllPingyinForWord(inStr.at(i_word), fristPy, fullPy);

        fristPys.push_back(fristPy);
        fullPys.push_back(fullPy);
    }


    // --- 开始排列组合
    QVector<int> nowIndexList;
    QVector<int> maxIndexList;
    int sum_maxIndexList = 0;
    for (size_t i = 0; i < numOfWord; i++)
    {
        nowIndexList.push_back(0);
        maxIndexList.push_back(fullPys[i].size() - 1);
        sum_maxIndexList += maxIndexList[i];
    }


    // --- 第一次组合（所有采用第一个）
    bool mustCombination = sum_maxIndexList > 0 ? true : false;
    for (size_t i = 0; i < numOfWord; i++)
    {
        outFrist_py += fristPys[i][0];
        outFull_py += fullPys[i][0];
    }


    // --- 循环遍历
    while (mustCombination)
    {
        // --- 组合排列
        bool alreadyRunOnce = false;
        for (size_t i = 0; i < numOfWord; i++)
        {
            if (alreadyRunOnce)
            {
                break;
            }

            if (maxIndexList[i] != 0)
            {
                if (nowIndexList[i] < maxIndexList[i])
                {
                    alreadyRunOnce = true;
                    nowIndexList[i]++;
                }
                else if (nowIndexList[i] == maxIndexList[i])
                {
                    nowIndexList[i] = 0;
                }
            }
        }

        // --- 组合输出字符
        outFrist_py += " ";
        outFull_py += " ";
        for (size_t i = 0; i < numOfWord; i++)
        {
            outFrist_py += fristPys[i][nowIndexList[i]];
            outFull_py += fullPys[i][nowIndexList[i]];
        }

        // --- 退出条件
        bool canOut = true;
        for (size_t i = 0; i < numOfWord; i++)
        {
            if (nowIndexList[i] != maxIndexList[i])
            {
                canOut = false;
                break;
            }
        }
        if (canOut)
        {
            break;
        }
    }


    // --- 返回
    return 0;
}

QString getNamePingyin(const QString & inStr, bool isLastName)
{
    QString outStr;

    // ----- 姓氏
    if (isLastName)
    {
        // --- 在百家姓中查找
        for (size_t i = 0; i < g_length_lastNameTable; i++)
        {
            if (inStr == lastNameTable[i].hanzi)
            {
                outStr = lastNameTable[i].pinyi;
                break;
            }
        }
    }

    // --- 直接汉字库查找
    if (outStr.isEmpty())
    {
        for (int i = 0; i < inStr.size(); i++)
        {
            outStr += getNoRepeatPingyinForWord(inStr[i]);
        }
    }


    return outStr;
}

void myNameSplit(const QString & inFullName, QString & outLastName, QString & outFirstName)
{
    const int doubleLastNameLength = 90;
    static QString doubleLastName[doubleLastNameLength] =
    {
        QString::fromLocal8Bit("欧阳") , QString::fromLocal8Bit("太史") , QString::fromLocal8Bit("端木") , QString::fromLocal8Bit("上官") , QString::fromLocal8Bit("司马") , QString::fromLocal8Bit("东方") , QString::fromLocal8Bit("独孤") , QString::fromLocal8Bit("南宫") , QString::fromLocal8Bit("万俟") , QString::fromLocal8Bit("闻人") ,
        QString::fromLocal8Bit("夏侯") , QString::fromLocal8Bit("诸葛") , QString::fromLocal8Bit("尉迟") , QString::fromLocal8Bit("公羊") , QString::fromLocal8Bit("赫连") , QString::fromLocal8Bit("澹台") , QString::fromLocal8Bit("皇甫") , QString::fromLocal8Bit("宗政") , QString::fromLocal8Bit("濮阳") , QString::fromLocal8Bit("公冶") ,
        QString::fromLocal8Bit("太叔") , QString::fromLocal8Bit("申屠") , QString::fromLocal8Bit("公孙") , QString::fromLocal8Bit("慕容") , QString::fromLocal8Bit("仲孙") , QString::fromLocal8Bit("钟离") , QString::fromLocal8Bit("长孙") , QString::fromLocal8Bit("宇文") , QString::fromLocal8Bit("司徒") , QString::fromLocal8Bit("鲜于") ,
        QString::fromLocal8Bit("司空") , QString::fromLocal8Bit("闾丘") , QString::fromLocal8Bit("子车") , QString::fromLocal8Bit("亓官") , QString::fromLocal8Bit("司寇") , QString::fromLocal8Bit("巫马") , QString::fromLocal8Bit("公西") , QString::fromLocal8Bit("颛孙") , QString::fromLocal8Bit("壤驷") , QString::fromLocal8Bit("公良") ,
        QString::fromLocal8Bit("漆雕") , QString::fromLocal8Bit("乐正") , QString::fromLocal8Bit("宰父") , QString::fromLocal8Bit("谷梁") , QString::fromLocal8Bit("拓跋") , QString::fromLocal8Bit("夹谷") , QString::fromLocal8Bit("轩辕") , QString::fromLocal8Bit("令狐") , QString::fromLocal8Bit("段干") , QString::fromLocal8Bit("百里") ,
        QString::fromLocal8Bit("呼延") , QString::fromLocal8Bit("东郭") , QString::fromLocal8Bit("南门") , QString::fromLocal8Bit("羊舌") , QString::fromLocal8Bit("微生") , QString::fromLocal8Bit("公户") , QString::fromLocal8Bit("公玉") , QString::fromLocal8Bit("公仪") , QString::fromLocal8Bit("梁丘") , QString::fromLocal8Bit("公仲") ,
        QString::fromLocal8Bit("公上") , QString::fromLocal8Bit("公门") , QString::fromLocal8Bit("公山") , QString::fromLocal8Bit("公坚") , QString::fromLocal8Bit("左丘") , QString::fromLocal8Bit("公伯") , QString::fromLocal8Bit("西门") , QString::fromLocal8Bit("公祖") , QString::fromLocal8Bit("第五") , QString::fromLocal8Bit("公乘") ,
        QString::fromLocal8Bit("贯丘") , QString::fromLocal8Bit("公皙") , QString::fromLocal8Bit("南荣") , QString::fromLocal8Bit("东里") , QString::fromLocal8Bit("东宫") , QString::fromLocal8Bit("仲长") , QString::fromLocal8Bit("子书") , QString::fromLocal8Bit("子桑") , QString::fromLocal8Bit("即墨") , QString::fromLocal8Bit("达奚") ,
        QString::fromLocal8Bit("褚师") , QString::fromLocal8Bit("吴铭") , QString::fromLocal8Bit("纳兰") , QString::fromLocal8Bit("归海") , QString::fromLocal8Bit("东皇") , QString::fromLocal8Bit("泽翁") , QString::fromLocal8Bit("阿扎") , QString::fromLocal8Bit("泽朗") , QString::fromLocal8Bit("索朗") , QString::fromLocal8Bit("邓真")
    };

    // --- 如果有非汉字字符，直接返回
    for (size_t i = 0; i < inFullName.length(); i++)
    {
        ushort uni = inFullName.at(i).unicode();
        if (uni < 0x4E00 || uni > 0x9FA5)
        {
            outLastName = "";
            outFirstName = inFullName;
            return;
        }
    }


    //
    outLastName = "";
    outFirstName = "";

    if (inFullName.isEmpty())
    {
    }
    else if (inFullName.length() == 1)
    {
        outFirstName = inFullName;
    }
    else if (inFullName.length() == 2)
    {
        outLastName = inFullName.at(0);
        outFirstName = inFullName.at(1);
    }
    else
    {
        QString guessLastName = inFullName.mid(0,2);
        for (int i = 0; i < doubleLastNameLength; i++)
        {
            if (guessLastName == doubleLastName[i])
            {
                outLastName = doubleLastName[i];
                outFirstName = inFullName.mid(2);
                break;
            }
        }

        if (outLastName.isEmpty())
        {
            if (inFullName.length() == 4)
            {
                outLastName = inFullName.mid(0,2);
                outFirstName = inFullName.mid(2);
            }
            else
            {
                outLastName = inFullName.at(0);
                outFirstName = inFullName.mid(1);
            }
        }

    }

}



int getAllPingyinForWord(const QString& inWord, QStringList& outFrist_py, QStringList& outFull_py)
{
    //
    static Qt::CaseSensitivity cs = Qt::CaseSensitive;

    // 只能输入一个字符
    if (inWord.size() > 1)
    {
        return -1;
    }


    //
    outFrist_py.clear();
    outFull_py.clear();

    ushort uni = inWord[0].unicode();
    if (uni >= 0x4E00 && uni <= 0x9FA5)
    {
        for (int index_table = 0; index_table < g_length_hanziTables; index_table++)
        {
            if (hanziTables[index_table].hanzis.indexOf(uni, 0, cs) != -1)
            {
                outFrist_py.append(hanziTables[index_table].first_py);
                outFull_py.append(hanziTables[index_table].full_py);
            }
        }
    }

    if (outFrist_py.isEmpty())
    {
        outFrist_py.append(inWord);
    }
    if (outFull_py.isEmpty())
    {
        outFull_py.append(inWord);
    }

    return 0;
}

QString getNoRepeatPingyinForWord(const QString& inWord)
{
    QString outPingyin;

    // 只能输入一个字符
    if (inWord.size() > 1)
    {
        return inWord;
    }


    // ----- 先在多音字里面查询
    for (int i = 0; i < g_length_multiToneWordTable; i++)
    {
        if (inWord == multiToneWordTable[i].hanzi)
        {
            outPingyin = multiToneWordTable[i].pinyi;
            break;
        }
    }

    // ----- 继续查询
    if (!outPingyin.isEmpty())
    {
        return outPingyin;
    }

    // ----- 在全字库查找
    static Qt::CaseSensitivity cs = Qt::CaseSensitive;
    ushort uni = inWord[0].unicode();
    if (uni >= 0x4E00 && uni <= 0x9FA5)
    {
        for (int index_table = 0; index_table < g_length_hanziTables; index_table++)
        {
            if (hanziTables[index_table].hanzis.indexOf(uni, 0, cs) != -1)   // QString.contains() 内部调用indexOf(),  所以这里直接使用indexOf()
            {
                outPingyin = hanziTables[index_table].full_py;
                break;
            }
        }
    }

    //
    if (outPingyin.isEmpty())
    {
        outPingyin = inWord;
    }

    // ----- 返回结果
    return outPingyin;
}

