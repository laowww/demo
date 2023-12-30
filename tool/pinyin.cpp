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
    { QString::fromUtf8("赵") , QString::fromUtf8("zhao") },
    { QString::fromUtf8("钱") , QString::fromUtf8("qian") },
    { QString::fromUtf8("孙") , QString::fromUtf8("sun") },
    { QString::fromUtf8("李") , QString::fromUtf8("li") },
    { QString::fromUtf8("周") , QString::fromUtf8("zhou") },
    { QString::fromUtf8("吴") , QString::fromUtf8("wu") },
    { QString::fromUtf8("郑") , QString::fromUtf8("zheng") },
    { QString::fromUtf8("王") , QString::fromUtf8("wang") },
    { QString::fromUtf8("冯") , QString::fromUtf8("feng") },
    { QString::fromUtf8("陈") , QString::fromUtf8("chen") },
    { QString::fromUtf8("褚") , QString::fromUtf8("chu") },
    { QString::fromUtf8("卫") , QString::fromUtf8("wei") },
    { QString::fromUtf8("蒋") , QString::fromUtf8("jiang") },
    { QString::fromUtf8("沈") , QString::fromUtf8("shen") },
    { QString::fromUtf8("韩") , QString::fromUtf8("han") },
    { QString::fromUtf8("杨") , QString::fromUtf8("yang") },
    { QString::fromUtf8("朱") , QString::fromUtf8("zhu") },
    { QString::fromUtf8("秦") , QString::fromUtf8("qin") },
    { QString::fromUtf8("尤") , QString::fromUtf8("you") },
    { QString::fromUtf8("许") , QString::fromUtf8("xu") },
    { QString::fromUtf8("何") , QString::fromUtf8("he") },
    { QString::fromUtf8("吕") , QString::fromUtf8("lv") },
    { QString::fromUtf8("施") , QString::fromUtf8("shi") },
    { QString::fromUtf8("张") , QString::fromUtf8("zhang") },
    { QString::fromUtf8("孔") , QString::fromUtf8("kong") },
    { QString::fromUtf8("曹") , QString::fromUtf8("cao") },
    { QString::fromUtf8("严") , QString::fromUtf8("yan") },
    { QString::fromUtf8("华") , QString::fromUtf8("hua") },
    { QString::fromUtf8("金") , QString::fromUtf8("jin") },
    { QString::fromUtf8("魏") , QString::fromUtf8("wei") },
    { QString::fromUtf8("陶") , QString::fromUtf8("tao") },
    { QString::fromUtf8("姜") , QString::fromUtf8("jiang") },
    { QString::fromUtf8("戚") , QString::fromUtf8("qi") },
    { QString::fromUtf8("谢") , QString::fromUtf8("xie") },
    { QString::fromUtf8("邹") , QString::fromUtf8("zou") },
    { QString::fromUtf8("喻") , QString::fromUtf8("yu") },
    { QString::fromUtf8("柏") , QString::fromUtf8("bai") },
    { QString::fromUtf8("水") , QString::fromUtf8("shui") },
    { QString::fromUtf8("窦") , QString::fromUtf8("dou") },
    { QString::fromUtf8("章") , QString::fromUtf8("zhang") },
    { QString::fromUtf8("云") , QString::fromUtf8("yun") },
    { QString::fromUtf8("苏") , QString::fromUtf8("su") },
    { QString::fromUtf8("潘") , QString::fromUtf8("pan") },
    { QString::fromUtf8("葛") , QString::fromUtf8("ge") },
    { QString::fromUtf8("奚") , QString::fromUtf8("xi") },
    { QString::fromUtf8("范") , QString::fromUtf8("fan") },
    { QString::fromUtf8("彭") , QString::fromUtf8("peng") },
    { QString::fromUtf8("郎") , QString::fromUtf8("lang") },
    { QString::fromUtf8("鲁") , QString::fromUtf8("lu") },
    { QString::fromUtf8("韦") , QString::fromUtf8("wei") },
    { QString::fromUtf8("昌") , QString::fromUtf8("chang") },
    { QString::fromUtf8("马") , QString::fromUtf8("ma") },
    { QString::fromUtf8("苗") , QString::fromUtf8("miao") },
    { QString::fromUtf8("凤") , QString::fromUtf8("feng") },
    { QString::fromUtf8("花") , QString::fromUtf8("hua") },
    { QString::fromUtf8("方") , QString::fromUtf8("fang") },
    { QString::fromUtf8("俞") , QString::fromUtf8("yu") },
    { QString::fromUtf8("任") , QString::fromUtf8("ren") },
    { QString::fromUtf8("袁") , QString::fromUtf8("yuan") },
    { QString::fromUtf8("柳") , QString::fromUtf8("liu") },
    { QString::fromUtf8("酆") , QString::fromUtf8("feng") },
    { QString::fromUtf8("鲍") , QString::fromUtf8("bao") },
    { QString::fromUtf8("史") , QString::fromUtf8("shi") },
    { QString::fromUtf8("唐") , QString::fromUtf8("tang") },
    { QString::fromUtf8("费") , QString::fromUtf8("fei") },
    { QString::fromUtf8("廉") , QString::fromUtf8("lian") },
    { QString::fromUtf8("岑") , QString::fromUtf8("cen") },
    { QString::fromUtf8("薛") , QString::fromUtf8("xue") },
    { QString::fromUtf8("雷") , QString::fromUtf8("lei") },
    { QString::fromUtf8("贺") , QString::fromUtf8("he") },
    { QString::fromUtf8("倪") , QString::fromUtf8("ni") },
    { QString::fromUtf8("汤") , QString::fromUtf8("tang") },
    { QString::fromUtf8("滕") , QString::fromUtf8("teng") },
    { QString::fromUtf8("殷") , QString::fromUtf8("yin") },
    { QString::fromUtf8("罗") , QString::fromUtf8("luo") },
    { QString::fromUtf8("毕") , QString::fromUtf8("bi") },
    { QString::fromUtf8("郝") , QString::fromUtf8("hao") },
    { QString::fromUtf8("邬") , QString::fromUtf8("wu") },
    { QString::fromUtf8("安") , QString::fromUtf8("an") },
    { QString::fromUtf8("常") , QString::fromUtf8("chang") },
    { QString::fromUtf8("乐") , QString::fromUtf8("yue") },
    { QString::fromUtf8("于") , QString::fromUtf8("yu") },
    { QString::fromUtf8("时") , QString::fromUtf8("shi") },
    { QString::fromUtf8("傅") , QString::fromUtf8("fu") },
    { QString::fromUtf8("皮") , QString::fromUtf8("pi") },
    { QString::fromUtf8("卞") , QString::fromUtf8("bian") },
    { QString::fromUtf8("齐") , QString::fromUtf8("qi") },
    { QString::fromUtf8("康") , QString::fromUtf8("kang") },
    { QString::fromUtf8("伍") , QString::fromUtf8("wu") },
    { QString::fromUtf8("余") , QString::fromUtf8("yu") },
    { QString::fromUtf8("元") , QString::fromUtf8("yuan") },
    { QString::fromUtf8("卜") , QString::fromUtf8("bu") },
    { QString::fromUtf8("顾") , QString::fromUtf8("gu") },
    { QString::fromUtf8("孟") , QString::fromUtf8("meng") },
    { QString::fromUtf8("平") , QString::fromUtf8("ping") },
    { QString::fromUtf8("黄") , QString::fromUtf8("huang") },
    { QString::fromUtf8("和") , QString::fromUtf8("he") },
    { QString::fromUtf8("穆") , QString::fromUtf8("mu") },
    { QString::fromUtf8("萧") , QString::fromUtf8("xiao") },
    { QString::fromUtf8("尹") , QString::fromUtf8("yin") },
    { QString::fromUtf8("姚") , QString::fromUtf8("yao") },
    { QString::fromUtf8("邵") , QString::fromUtf8("shao") },
    { QString::fromUtf8("湛") , QString::fromUtf8("zhan") },
    { QString::fromUtf8("汪") , QString::fromUtf8("wang") },
    { QString::fromUtf8("祁") , QString::fromUtf8("qi") },
    { QString::fromUtf8("毛") , QString::fromUtf8("mao") },
    { QString::fromUtf8("禹") , QString::fromUtf8("yu") },
    { QString::fromUtf8("狄") , QString::fromUtf8("di") },
    { QString::fromUtf8("米") , QString::fromUtf8("mi") },
    { QString::fromUtf8("贝") , QString::fromUtf8("bei") },
    { QString::fromUtf8("明") , QString::fromUtf8("ming") },
    { QString::fromUtf8("臧") , QString::fromUtf8("zang") },
    { QString::fromUtf8("计") , QString::fromUtf8("ji") },
    { QString::fromUtf8("伏") , QString::fromUtf8("fu") },
    { QString::fromUtf8("成") , QString::fromUtf8("cheng") },
    { QString::fromUtf8("戴") , QString::fromUtf8("dai") },
    { QString::fromUtf8("谈") , QString::fromUtf8("tan") },
    { QString::fromUtf8("宋") , QString::fromUtf8("song") },
    { QString::fromUtf8("茅") , QString::fromUtf8("mao") },
    { QString::fromUtf8("庞") , QString::fromUtf8("pang") },
    { QString::fromUtf8("熊") , QString::fromUtf8("xiong") },
    { QString::fromUtf8("纪") , QString::fromUtf8("ji") },
    { QString::fromUtf8("舒") , QString::fromUtf8("shu") },
    { QString::fromUtf8("屈") , QString::fromUtf8("qu") },
    { QString::fromUtf8("项") , QString::fromUtf8("xiang") },
    { QString::fromUtf8("祝") , QString::fromUtf8("zhu") },
    { QString::fromUtf8("董") , QString::fromUtf8("dong") },
    { QString::fromUtf8("梁") , QString::fromUtf8("liang") },
    { QString::fromUtf8("杜") , QString::fromUtf8("du") },
    { QString::fromUtf8("阮") , QString::fromUtf8("ruan") },
    { QString::fromUtf8("蓝") , QString::fromUtf8("lan") },
    { QString::fromUtf8("闵") , QString::fromUtf8("min") },
    { QString::fromUtf8("席") , QString::fromUtf8("xi") },
    { QString::fromUtf8("季") , QString::fromUtf8("ji") },
    { QString::fromUtf8("麻") , QString::fromUtf8("ma") },
    { QString::fromUtf8("强") , QString::fromUtf8("qiang") },
    { QString::fromUtf8("贾") , QString::fromUtf8("jia") },
    { QString::fromUtf8("路") , QString::fromUtf8("lu") },
    { QString::fromUtf8("娄") , QString::fromUtf8("lou") },
    { QString::fromUtf8("危") , QString::fromUtf8("wei") },
    { QString::fromUtf8("江") , QString::fromUtf8("jiang") },
    { QString::fromUtf8("童") , QString::fromUtf8("tong") },
    { QString::fromUtf8("颜") , QString::fromUtf8("yan") },
    { QString::fromUtf8("郭") , QString::fromUtf8("guo") },
    { QString::fromUtf8("梅") , QString::fromUtf8("mei") },
    { QString::fromUtf8("盛") , QString::fromUtf8("sheng") },
    { QString::fromUtf8("林") , QString::fromUtf8("lin") },
    { QString::fromUtf8("刁") , QString::fromUtf8("diao") },
    { QString::fromUtf8("钟") , QString::fromUtf8("zhong") },
    { QString::fromUtf8("徐") , QString::fromUtf8("xu") },
    { QString::fromUtf8("邱") , QString::fromUtf8("qiu") },
    { QString::fromUtf8("骆") , QString::fromUtf8("luo") },
    { QString::fromUtf8("高") , QString::fromUtf8("gao") },
    { QString::fromUtf8("夏") , QString::fromUtf8("xia") },
    { QString::fromUtf8("蔡") , QString::fromUtf8("cai") },
    { QString::fromUtf8("田") , QString::fromUtf8("tian") },
    { QString::fromUtf8("樊") , QString::fromUtf8("fan") },
    { QString::fromUtf8("胡") , QString::fromUtf8("hu") },
    { QString::fromUtf8("凌") , QString::fromUtf8("ling") },
    { QString::fromUtf8("霍") , QString::fromUtf8("huo") },
    { QString::fromUtf8("虞") , QString::fromUtf8("yu") },
    { QString::fromUtf8("万") , QString::fromUtf8("wan") },
    { QString::fromUtf8("支") , QString::fromUtf8("zhi") },
    { QString::fromUtf8("柯") , QString::fromUtf8("ke") },
    { QString::fromUtf8("昝") , QString::fromUtf8("zan") },
    { QString::fromUtf8("管") , QString::fromUtf8("guan") },
    { QString::fromUtf8("卢") , QString::fromUtf8("lu") },
    { QString::fromUtf8("莫") , QString::fromUtf8("mo") },
    { QString::fromUtf8("经") , QString::fromUtf8("jing") },
    { QString::fromUtf8("房") , QString::fromUtf8("fang") },
    { QString::fromUtf8("裘") , QString::fromUtf8("qiu") },
    { QString::fromUtf8("缪") , QString::fromUtf8("miao") },
    { QString::fromUtf8("干") , QString::fromUtf8("gan") },
    { QString::fromUtf8("解") , QString::fromUtf8("xie") },
    { QString::fromUtf8("应") , QString::fromUtf8("ying") },
    { QString::fromUtf8("宗") , QString::fromUtf8("zong") },
    { QString::fromUtf8("丁") , QString::fromUtf8("ding") },
    { QString::fromUtf8("宣") , QString::fromUtf8("xuan") },
    { QString::fromUtf8("贲") , QString::fromUtf8("ben") },
    { QString::fromUtf8("邓") , QString::fromUtf8("deng") },
    { QString::fromUtf8("郁") , QString::fromUtf8("yu") },
    { QString::fromUtf8("单") , QString::fromUtf8("shan") },
    { QString::fromUtf8("杭") , QString::fromUtf8("hang") },
    { QString::fromUtf8("洪") , QString::fromUtf8("hong") },
    { QString::fromUtf8("包") , QString::fromUtf8("bao") },
    { QString::fromUtf8("诸") , QString::fromUtf8("zhu") },
    { QString::fromUtf8("左") , QString::fromUtf8("zuo") },
    { QString::fromUtf8("石") , QString::fromUtf8("shi") },
    { QString::fromUtf8("崔") , QString::fromUtf8("cui") },
    { QString::fromUtf8("吉") , QString::fromUtf8("ji") },
    { QString::fromUtf8("钮") , QString::fromUtf8("niu") },
    { QString::fromUtf8("龚") , QString::fromUtf8("gong") },
    { QString::fromUtf8("程") , QString::fromUtf8("cheng") },
    { QString::fromUtf8("嵇") , QString::fromUtf8("ji") },
    { QString::fromUtf8("邢") , QString::fromUtf8("xing") },
    { QString::fromUtf8("滑") , QString::fromUtf8("hua") },
    { QString::fromUtf8("裴") , QString::fromUtf8("pei") },
    { QString::fromUtf8("陆") , QString::fromUtf8("lu") },
    { QString::fromUtf8("荣") , QString::fromUtf8("rong") },
    { QString::fromUtf8("翁") , QString::fromUtf8("weng") },
    { QString::fromUtf8("荀") , QString::fromUtf8("xun") },
    { QString::fromUtf8("羊") , QString::fromUtf8("yang") },
    { QString::fromUtf8("於") , QString::fromUtf8("yu") },
    { QString::fromUtf8("惠") , QString::fromUtf8("hui") },
    { QString::fromUtf8("甄") , QString::fromUtf8("zhen") },
    { QString::fromUtf8("曲") , QString::fromUtf8("qu") },
    { QString::fromUtf8("家") , QString::fromUtf8("jia") },
    { QString::fromUtf8("封") , QString::fromUtf8("feng") },
    { QString::fromUtf8("芮") , QString::fromUtf8("rui") },
    { QString::fromUtf8("羿") , QString::fromUtf8("yi") },
    { QString::fromUtf8("储") , QString::fromUtf8("chu") },
    { QString::fromUtf8("靳") , QString::fromUtf8("jin") },
    { QString::fromUtf8("汲") , QString::fromUtf8("ji") },
    { QString::fromUtf8("邴") , QString::fromUtf8("bing") },
    { QString::fromUtf8("糜") , QString::fromUtf8("mi") },
    { QString::fromUtf8("松") , QString::fromUtf8("song") },
    { QString::fromUtf8("井") , QString::fromUtf8("jing") },
    { QString::fromUtf8("段") , QString::fromUtf8("duan") },
    { QString::fromUtf8("富") , QString::fromUtf8("fu") },
    { QString::fromUtf8("巫") , QString::fromUtf8("wu") },
    { QString::fromUtf8("乌") , QString::fromUtf8("wu") },
    { QString::fromUtf8("焦") , QString::fromUtf8("jiao") },
    { QString::fromUtf8("巴") , QString::fromUtf8("ba") },
    { QString::fromUtf8("弓") , QString::fromUtf8("gong") },
    { QString::fromUtf8("牧") , QString::fromUtf8("mu") },
    { QString::fromUtf8("隗") , QString::fromUtf8("kui") },
    { QString::fromUtf8("山") , QString::fromUtf8("shan") },
    { QString::fromUtf8("谷") , QString::fromUtf8("gu") },
    { QString::fromUtf8("车") , QString::fromUtf8("che") },
    { QString::fromUtf8("侯") , QString::fromUtf8("hou") },
    { QString::fromUtf8("宓") , QString::fromUtf8("mi") },
    { QString::fromUtf8("蓬") , QString::fromUtf8("peng") },
    { QString::fromUtf8("全") , QString::fromUtf8("quan") },
    { QString::fromUtf8("郗") , QString::fromUtf8("xi") },
    { QString::fromUtf8("班") , QString::fromUtf8("ban") },
    { QString::fromUtf8("仰") , QString::fromUtf8("yang") },
    { QString::fromUtf8("秋") , QString::fromUtf8("qiu") },
    { QString::fromUtf8("仲") , QString::fromUtf8("zhong") },
    { QString::fromUtf8("伊") , QString::fromUtf8("yi") },
    { QString::fromUtf8("宫") , QString::fromUtf8("gong") },
    { QString::fromUtf8("宁") , QString::fromUtf8("ning") },
    { QString::fromUtf8("仇") , QString::fromUtf8("qiu") },
    { QString::fromUtf8("栾") , QString::fromUtf8("luan") },
    { QString::fromUtf8("暴") , QString::fromUtf8("bao") },
    { QString::fromUtf8("甘") , QString::fromUtf8("gan") },
    { QString::fromUtf8("钭") , QString::fromUtf8("tou") },
    { QString::fromUtf8("厉") , QString::fromUtf8("li") },
    { QString::fromUtf8("戎") , QString::fromUtf8("rong") },
    { QString::fromUtf8("祖") , QString::fromUtf8("zu") },
    { QString::fromUtf8("武") , QString::fromUtf8("wu") },
    { QString::fromUtf8("符") , QString::fromUtf8("fu") },
    { QString::fromUtf8("刘") , QString::fromUtf8("liu") },
    { QString::fromUtf8("景") , QString::fromUtf8("jing") },
    { QString::fromUtf8("詹") , QString::fromUtf8("zhan") },
    { QString::fromUtf8("束") , QString::fromUtf8("shu") },
    { QString::fromUtf8("龙") , QString::fromUtf8("long") },
    { QString::fromUtf8("叶") , QString::fromUtf8("ye") },
    { QString::fromUtf8("幸") , QString::fromUtf8("xing") },
    { QString::fromUtf8("司") , QString::fromUtf8("si") },
    { QString::fromUtf8("韶") , QString::fromUtf8("shao") },
    { QString::fromUtf8("郜") , QString::fromUtf8("gao") },
    { QString::fromUtf8("黎") , QString::fromUtf8("li") },
    { QString::fromUtf8("蓟") , QString::fromUtf8("ji") },
    { QString::fromUtf8("薄") , QString::fromUtf8("bo") },
    { QString::fromUtf8("印") , QString::fromUtf8("yin") },
    { QString::fromUtf8("宿") , QString::fromUtf8("su") },
    { QString::fromUtf8("白") , QString::fromUtf8("bai") },
    { QString::fromUtf8("怀") , QString::fromUtf8("huai") },
    { QString::fromUtf8("蒲") , QString::fromUtf8("pu") },
    { QString::fromUtf8("邰") , QString::fromUtf8("tai") },
    { QString::fromUtf8("从") , QString::fromUtf8("cong") },
    { QString::fromUtf8("鄂") , QString::fromUtf8("e") },
    { QString::fromUtf8("索") , QString::fromUtf8("suo") },
    { QString::fromUtf8("咸") , QString::fromUtf8("xian") },
    { QString::fromUtf8("籍") , QString::fromUtf8("ji") },
    { QString::fromUtf8("赖") , QString::fromUtf8("lai") },
    { QString::fromUtf8("卓") , QString::fromUtf8("zhuo") },
    { QString::fromUtf8("蔺") , QString::fromUtf8("lin") },
    { QString::fromUtf8("屠") , QString::fromUtf8("tu") },
    { QString::fromUtf8("蒙") , QString::fromUtf8("meng") },
    { QString::fromUtf8("池") , QString::fromUtf8("chi") },
    { QString::fromUtf8("乔") , QString::fromUtf8("qiao") },
    { QString::fromUtf8("阴") , QString::fromUtf8("yin") },
    { QString::fromUtf8("郁") , QString::fromUtf8("yu") },
    { QString::fromUtf8("胥") , QString::fromUtf8("xu") },
    { QString::fromUtf8("能") , QString::fromUtf8("nai") },
    { QString::fromUtf8("苍") , QString::fromUtf8("cang") },
    { QString::fromUtf8("双") , QString::fromUtf8("shuang") },
    { QString::fromUtf8("闻") , QString::fromUtf8("wen") },
    { QString::fromUtf8("莘") , QString::fromUtf8("shen") },
    { QString::fromUtf8("党") , QString::fromUtf8("dang") },
    { QString::fromUtf8("翟") , QString::fromUtf8("zhai") },
    { QString::fromUtf8("谭") , QString::fromUtf8("tan") },
    { QString::fromUtf8("贡") , QString::fromUtf8("gong") },
    { QString::fromUtf8("劳") , QString::fromUtf8("lao") },
    { QString::fromUtf8("逄") , QString::fromUtf8("pang") },
    { QString::fromUtf8("姬") , QString::fromUtf8("ji") },
    { QString::fromUtf8("申") , QString::fromUtf8("shen") },
    { QString::fromUtf8("扶") , QString::fromUtf8("fu") },
    { QString::fromUtf8("堵") , QString::fromUtf8("du") },
    { QString::fromUtf8("冉") , QString::fromUtf8("ran") },
    { QString::fromUtf8("宰") , QString::fromUtf8("zai") },
    { QString::fromUtf8("郦") , QString::fromUtf8("li") },
    { QString::fromUtf8("雍") , QString::fromUtf8("yong") },
    { QString::fromUtf8("郤") , QString::fromUtf8("xi") },
    { QString::fromUtf8("璩") , QString::fromUtf8("qu") },
    { QString::fromUtf8("桑") , QString::fromUtf8("sang") },
    { QString::fromUtf8("桂") , QString::fromUtf8("gui") },
    { QString::fromUtf8("濮") , QString::fromUtf8("pu") },
    { QString::fromUtf8("牛") , QString::fromUtf8("niu") },
    { QString::fromUtf8("寿") , QString::fromUtf8("shou") },
    { QString::fromUtf8("通") , QString::fromUtf8("tong") },
    { QString::fromUtf8("边") , QString::fromUtf8("bian") },
    { QString::fromUtf8("扈") , QString::fromUtf8("hu") },
    { QString::fromUtf8("燕") , QString::fromUtf8("yan") },
    { QString::fromUtf8("冀") , QString::fromUtf8("ji") },
    { QString::fromUtf8("郏") , QString::fromUtf8("jia") },
    { QString::fromUtf8("浦") , QString::fromUtf8("pu") },
    { QString::fromUtf8("尚") , QString::fromUtf8("shang") },
    { QString::fromUtf8("农") , QString::fromUtf8("nong") },
    { QString::fromUtf8("温") , QString::fromUtf8("wen") },
    { QString::fromUtf8("别") , QString::fromUtf8("bie") },
    { QString::fromUtf8("庄") , QString::fromUtf8("zhuang") },
    { QString::fromUtf8("晏") , QString::fromUtf8("yan") },
    { QString::fromUtf8("柴") , QString::fromUtf8("chai") },
    { QString::fromUtf8("瞿") , QString::fromUtf8("qu") },
    { QString::fromUtf8("阎") , QString::fromUtf8("yan") },
    { QString::fromUtf8("充") , QString::fromUtf8("chong") },
    { QString::fromUtf8("慕") , QString::fromUtf8("mu") },
    { QString::fromUtf8("连") , QString::fromUtf8("lian") },
    { QString::fromUtf8("茹") , QString::fromUtf8("ru") },
    { QString::fromUtf8("习") , QString::fromUtf8("xi") },
    { QString::fromUtf8("宦") , QString::fromUtf8("huan") },
    { QString::fromUtf8("艾") , QString::fromUtf8("ai") },
    { QString::fromUtf8("鱼") , QString::fromUtf8("yu") },
    { QString::fromUtf8("容") , QString::fromUtf8("rong") },
    { QString::fromUtf8("向") , QString::fromUtf8("xiang") },
    { QString::fromUtf8("古") , QString::fromUtf8("gu") },
    { QString::fromUtf8("易") , QString::fromUtf8("yi") },
    { QString::fromUtf8("慎") , QString::fromUtf8("shen") },
    { QString::fromUtf8("戈") , QString::fromUtf8("ge") },
    { QString::fromUtf8("廖") , QString::fromUtf8("liao") },
    { QString::fromUtf8("庾") , QString::fromUtf8("yu") },
    { QString::fromUtf8("终") , QString::fromUtf8("zhong") },
    { QString::fromUtf8("暨") , QString::fromUtf8("ji") },
    { QString::fromUtf8("居") , QString::fromUtf8("ju") },
    { QString::fromUtf8("衡") , QString::fromUtf8("heng") },
    { QString::fromUtf8("步") , QString::fromUtf8("bu") },
    { QString::fromUtf8("都") , QString::fromUtf8("du") },
    { QString::fromUtf8("耿") , QString::fromUtf8("geng") },
    { QString::fromUtf8("满") , QString::fromUtf8("man") },
    { QString::fromUtf8("弘") , QString::fromUtf8("hong") },
    { QString::fromUtf8("匡") , QString::fromUtf8("kuang") },
    { QString::fromUtf8("国") , QString::fromUtf8("guo") },
    { QString::fromUtf8("文") , QString::fromUtf8("wen") },
    { QString::fromUtf8("寇") , QString::fromUtf8("kou") },
    { QString::fromUtf8("广") , QString::fromUtf8("guang") },
    { QString::fromUtf8("禄") , QString::fromUtf8("lu") },
    { QString::fromUtf8("阙") , QString::fromUtf8("que") },
    { QString::fromUtf8("东") , QString::fromUtf8("dong") },
    { QString::fromUtf8("欧") , QString::fromUtf8("ou") },
    { QString::fromUtf8("殳") , QString::fromUtf8("shu") },
    { QString::fromUtf8("沃") , QString::fromUtf8("wo") },
    { QString::fromUtf8("利") , QString::fromUtf8("li") },
    { QString::fromUtf8("蔚") , QString::fromUtf8("wei") },
    { QString::fromUtf8("越") , QString::fromUtf8("yue") },
    { QString::fromUtf8("夔") , QString::fromUtf8("kui") },
    { QString::fromUtf8("隆") , QString::fromUtf8("long") },
    { QString::fromUtf8("师") , QString::fromUtf8("shi") },
    { QString::fromUtf8("巩") , QString::fromUtf8("gong") },
    { QString::fromUtf8("厍") , QString::fromUtf8("she") },
    { QString::fromUtf8("聂") , QString::fromUtf8("nie") },
    { QString::fromUtf8("晁") , QString::fromUtf8("chao") },
    { QString::fromUtf8("勾") , QString::fromUtf8("gou") },
    { QString::fromUtf8("句") , QString::fromUtf8("gou") },
    { QString::fromUtf8("敖") , QString::fromUtf8("ao") },
    { QString::fromUtf8("融") , QString::fromUtf8("rong") },
    { QString::fromUtf8("冷") , QString::fromUtf8("leng") },
    { QString::fromUtf8("訾") , QString::fromUtf8("zi") },
    { QString::fromUtf8("辛") , QString::fromUtf8("xin") },
    { QString::fromUtf8("阚") , QString::fromUtf8("kan") },
    { QString::fromUtf8("那") , QString::fromUtf8("na") },
    { QString::fromUtf8("简") , QString::fromUtf8("jian") },
    { QString::fromUtf8("饶") , QString::fromUtf8("rao") },
    { QString::fromUtf8("空") , QString::fromUtf8("kong") },
    { QString::fromUtf8("曾") , QString::fromUtf8("zeng") },
    { QString::fromUtf8("母") , QString::fromUtf8("mu") },
    { QString::fromUtf8("沙") , QString::fromUtf8("sha") },
    { QString::fromUtf8("乜") , QString::fromUtf8("nie") },
    { QString::fromUtf8("养") , QString::fromUtf8("yang") },
    { QString::fromUtf8("鞠") , QString::fromUtf8("ju") },
    { QString::fromUtf8("须") , QString::fromUtf8("xu") },
    { QString::fromUtf8("丰") , QString::fromUtf8("feng") },
    { QString::fromUtf8("巢") , QString::fromUtf8("chao") },
    { QString::fromUtf8("关") , QString::fromUtf8("guan") },
    { QString::fromUtf8("蒯") , QString::fromUtf8("kuai") },
    { QString::fromUtf8("相") , QString::fromUtf8("xiang") },
    { QString::fromUtf8("查") , QString::fromUtf8("zha") },
    { QString::fromUtf8("后") , QString::fromUtf8("hou") },
    { QString::fromUtf8("荆") , QString::fromUtf8("jing") },
    { QString::fromUtf8("红") , QString::fromUtf8("hong") },
    { QString::fromUtf8("游") , QString::fromUtf8("you") },
    { QString::fromUtf8("竺") , QString::fromUtf8("zhu") },
    { QString::fromUtf8("权") , QString::fromUtf8("quan") },
    { QString::fromUtf8("逯") , QString::fromUtf8("lu") },
    { QString::fromUtf8("盖") , QString::fromUtf8("gai") },
    { QString::fromUtf8("益") , QString::fromUtf8("yi") },
    { QString::fromUtf8("桓") , QString::fromUtf8("huan") },
    { QString::fromUtf8("公") , QString::fromUtf8("gong") },
    { QString::fromUtf8("万俟") , QString::fromUtf8("moqi") },
    { QString::fromUtf8("司马") , QString::fromUtf8("sima") },
    { QString::fromUtf8("上官") , QString::fromUtf8("shangguan") },
    { QString::fromUtf8("欧阳") , QString::fromUtf8("ouyang") },
    { QString::fromUtf8("夏侯") , QString::fromUtf8("xiahou") },
    { QString::fromUtf8("诸葛") , QString::fromUtf8("zhuge") },
    { QString::fromUtf8("闻人") , QString::fromUtf8("wenren") },
    { QString::fromUtf8("东方") , QString::fromUtf8("dongfang") },
    { QString::fromUtf8("赫连") , QString::fromUtf8("helian") },
    { QString::fromUtf8("皇甫") , QString::fromUtf8("huangpu") },
    { QString::fromUtf8("尉迟") , QString::fromUtf8("yuchi") },
    { QString::fromUtf8("公羊") , QString::fromUtf8("gongyang") },
    { QString::fromUtf8("澹台") , QString::fromUtf8("tantai") },
    { QString::fromUtf8("公冶") , QString::fromUtf8("gongye") },
    { QString::fromUtf8("宗政") , QString::fromUtf8("zongzheng") },
    { QString::fromUtf8("濮阳") , QString::fromUtf8("puyang") },
    { QString::fromUtf8("淳于") , QString::fromUtf8("chunyu") },
    { QString::fromUtf8("单于") , QString::fromUtf8("chanyu") },
    { QString::fromUtf8("太叔") , QString::fromUtf8("taishu") },
    { QString::fromUtf8("申屠") , QString::fromUtf8("shentu") },
    { QString::fromUtf8("公孙") , QString::fromUtf8("gongsun") },
    { QString::fromUtf8("仲孙") , QString::fromUtf8("zhongsun") },
    { QString::fromUtf8("轩辕") , QString::fromUtf8("xuanyuan") },
    { QString::fromUtf8("令狐") , QString::fromUtf8("linghu") },
    { QString::fromUtf8("钟离") , QString::fromUtf8("zhongli") },
    { QString::fromUtf8("宇文") , QString::fromUtf8("yuwen") },
    { QString::fromUtf8("长孙") , QString::fromUtf8("zhangsun") },
    { QString::fromUtf8("慕容") , QString::fromUtf8("murong") },
    { QString::fromUtf8("鲜于") , QString::fromUtf8("xianyu") },
    { QString::fromUtf8("闾丘") , QString::fromUtf8("luqiu") },
    { QString::fromUtf8("司徒") , QString::fromUtf8("situ") },
    { QString::fromUtf8("司空") , QString::fromUtf8("sikong") },
    { QString::fromUtf8("亓官") , QString::fromUtf8("qiguan") },
    { QString::fromUtf8("司寇") , QString::fromUtf8("sikou") },
    { QString::fromUtf8("仉督") , QString::fromUtf8("zhangdu") },
    { QString::fromUtf8("子车") , QString::fromUtf8("ziju") },
    { QString::fromUtf8("颛孙") , QString::fromUtf8("zhuansun") },
    { QString::fromUtf8("端木") , QString::fromUtf8("duanmu") },
    { QString::fromUtf8("巫马") , QString::fromUtf8("wuma") },
    { QString::fromUtf8("公西") , QString::fromUtf8("gongxi") },
    { QString::fromUtf8("漆雕") , QString::fromUtf8("qidiao") },
    { QString::fromUtf8("乐正") , QString::fromUtf8("yuezheng") },
    { QString::fromUtf8("壤驷") , QString::fromUtf8("rangsi") },
    { QString::fromUtf8("公良") , QString::fromUtf8("gongliang") },
    { QString::fromUtf8("拓跋") , QString::fromUtf8("tuoba") },
    { QString::fromUtf8("夹谷") , QString::fromUtf8("jiagu") },
    { QString::fromUtf8("宰父") , QString::fromUtf8("zaifu") },
    { QString::fromUtf8("榖梁") , QString::fromUtf8("guliang") },
    { QString::fromUtf8("晋") , QString::fromUtf8("jin") },
    { QString::fromUtf8("楚") , QString::fromUtf8("chu") },
    { QString::fromUtf8("闫") , QString::fromUtf8("yan") },
    { QString::fromUtf8("法") , QString::fromUtf8("fa") },
    { QString::fromUtf8("汝") , QString::fromUtf8("ru") },
    { QString::fromUtf8("鄢") , QString::fromUtf8("yan") },
    { QString::fromUtf8("涂") , QString::fromUtf8("tu") },
    { QString::fromUtf8("钦") , QString::fromUtf8("qin") },
    { QString::fromUtf8("段干") , QString::fromUtf8("duangan") },
    { QString::fromUtf8("百里") , QString::fromUtf8("baili") },
    { QString::fromUtf8("东郭") , QString::fromUtf8("dongguo") },
    { QString::fromUtf8("南门") , QString::fromUtf8("nanmen") },
    { QString::fromUtf8("呼延") , QString::fromUtf8("huyan") },
    { QString::fromUtf8("归") , QString::fromUtf8("gui") },
    { QString::fromUtf8("海") , QString::fromUtf8("hai") },
    { QString::fromUtf8("羊舌") , QString::fromUtf8("yangshe") },
    { QString::fromUtf8("微") , QString::fromUtf8("wei") },
    { QString::fromUtf8("生") , QString::fromUtf8("sheng") },
    { QString::fromUtf8("岳") , QString::fromUtf8("yue") },
    { QString::fromUtf8("帅") , QString::fromUtf8("shuai") },
    { QString::fromUtf8("缑") , QString::fromUtf8("gou") },
    { QString::fromUtf8("亢") , QString::fromUtf8("kang") },
    { QString::fromUtf8("况") , QString::fromUtf8("kuang") },
    { QString::fromUtf8("后") , QString::fromUtf8("hou") },
    { QString::fromUtf8("有") , QString::fromUtf8("you") },
    { QString::fromUtf8("琴") , QString::fromUtf8("qin") },
    { QString::fromUtf8("梁丘") , QString::fromUtf8("liangqiu") },
    { QString::fromUtf8("左丘") , QString::fromUtf8("zuoqiu") },
    { QString::fromUtf8("东门") , QString::fromUtf8("dongmen") },
    { QString::fromUtf8("西门") , QString::fromUtf8("ximen") },
    { QString::fromUtf8("商") , QString::fromUtf8("shang") },
    { QString::fromUtf8("牟") , QString::fromUtf8("mou") },
    { QString::fromUtf8("佘") , QString::fromUtf8("she") },
    { QString::fromUtf8("佴") , QString::fromUtf8("nai") },
    { QString::fromUtf8("伯") , QString::fromUtf8("bo") },
    { QString::fromUtf8("赏") , QString::fromUtf8("shang") },
    { QString::fromUtf8("南宫") , QString::fromUtf8("nangong") },
    { QString::fromUtf8("墨") , QString::fromUtf8("mo") },
    { QString::fromUtf8("哈") , QString::fromUtf8("ha") },
    { QString::fromUtf8("谯") , QString::fromUtf8("qiao") },
    { QString::fromUtf8("笪") , QString::fromUtf8("da") },
    { QString::fromUtf8("年") , QString::fromUtf8("nian") },
    { QString::fromUtf8("爱") , QString::fromUtf8("ai") },
    { QString::fromUtf8("阳") , QString::fromUtf8("yang") },
    { QString::fromUtf8("佟") , QString::fromUtf8("tong") },
    { QString::fromUtf8("第五") , QString::fromUtf8("diwu") },
    { QString::fromUtf8("言") , QString::fromUtf8("yan") },
    { QString::fromUtf8("福") , QString::fromUtf8("fu") },
    { QString::fromUtf8("黑") , QString::fromUtf8("he") },
    { QString::fromUtf8("区") , QString::fromUtf8("ou") },
    { QString::fromUtf8("朴") , QString::fromUtf8("piao") },
    { QString::fromUtf8("繁") , QString::fromUtf8("po") },
    { QString::fromUtf8("员") , QString::fromUtf8("yun") },
    { QString::fromUtf8("蕃") , QString::fromUtf8("pi") },
    { QString::fromUtf8("种") , QString::fromUtf8("chong") },
    { QString::fromUtf8("秘") , QString::fromUtf8("bi") },
    { QString::fromUtf8("谌") , QString::fromUtf8("chen") },
    { QString::fromUtf8("啜") , QString::fromUtf8("chuai") },
    { QString::fromUtf8("邸") , QString::fromUtf8("di") },
    { QString::fromUtf8("苻") , QString::fromUtf8("fu") },
    { QString::fromUtf8("甫") , QString::fromUtf8("fu") },
    { QString::fromUtf8("杲") , QString::fromUtf8("gao") },
    { QString::fromUtf8("艮") , QString::fromUtf8("gen") },
    { QString::fromUtf8("冠") , QString::fromUtf8("guan") },
    { QString::fromUtf8("妫") , QString::fromUtf8("gui") },
    { QString::fromUtf8("过") , QString::fromUtf8("guo") },
    { QString::fromUtf8("晟") , QString::fromUtf8("cheng") },
    { QString::fromUtf8("隽") , QString::fromUtf8("juan") },
    { QString::fromUtf8("逢") , QString::fromUtf8("pang") },
    { QString::fromUtf8("邳") , QString::fromUtf8("pi") },
    { QString::fromUtf8("莆") , QString::fromUtf8("pu") },
    { QString::fromUtf8("溥") , QString::fromUtf8("pu") },
    { QString::fromUtf8("亓") , QString::fromUtf8("qi") },
    { QString::fromUtf8("少") , QString::fromUtf8("shao") },
    { QString::fromUtf8("召") , QString::fromUtf8("shao") },
    { QString::fromUtf8("折") , QString::fromUtf8("she") },
    { QString::fromUtf8("彤") , QString::fromUtf8("tong") },
    { QString::fromUtf8("庹") , QString::fromUtf8("tuo") },
    { QString::fromUtf8("宛") , QString::fromUtf8("wan") },
    { QString::fromUtf8("尉") , QString::fromUtf8("wei") },
    { QString::fromUtf8("冼") , QString::fromUtf8("xian") },
    { QString::fromUtf8("洗") , QString::fromUtf8("xian") },
    { QString::fromUtf8("郇") , QString::fromUtf8("xun") },
    { QString::fromUtf8("幺") , QString::fromUtf8("yao") },
    { QString::fromUtf8("郧") , QString::fromUtf8("yun") },
    { QString::fromUtf8("恽") , QString::fromUtf8("yun") },
    { QString::fromUtf8("郓") , QString::fromUtf8("yun") },
    { QString::fromUtf8("羊角") , QString::fromUtf8("yangjue") },
    { QString::fromUtf8("妘") , QString::fromUtf8("yun") },
    { QString::fromUtf8("祭") , QString::fromUtf8("zhai") },
    { QString::fromUtf8("砦") , QString::fromUtf8("zhai") },
    { QString::fromUtf8("占") , QString::fromUtf8("zhan") },
    { QString::fromUtf8("仉") , QString::fromUtf8("zhang") },
    { QString::fromUtf8("中行") , QString::fromUtf8("zhonghang") },
    { QString::fromUtf8("禚") , QString::fromUtf8("zhuo") },
    { QString::fromUtf8("迮") , QString::fromUtf8("ze") },
    { QString::fromUtf8("覃") , QString::fromUtf8("qin") },
};


/*
0. 多音字表
1. 后面的注释表示的是：这个字剩余的其他读音 （日、韩分别表示汉字是日语或韩语）
2. 来源于 hanziTables[]，（遍历的所有，没有遗漏）
3. 多音字选中读音规则：
   a. 选择常用读音 ：
        { QString::fromUtf8("红") , QString::fromUtf8("hong") },      // gong
        { QString::fromUtf8("薄") , QString::fromUtf8("bo") },        // bao
        { QString::fromUtf8("拆") , QString::fromUtf8("chai") },      // ca
   b. 选择根据拼音可以猜出汉字的读音。这种字大家知道是多音字，如果我输出'ju'你基本可以猜到汉字'句'，但是我输出'gou'你还能猜到汉字是'句'就...
        { QString::fromUtf8("句") , QString::fromUtf8("ju") },        // gou
        { QString::fromUtf8("旁") , QString::fromUtf8("pang") },      // bang
        { QString::fromUtf8("给") , QString::fromUtf8("gei") },       // ji
        { QString::fromUtf8("艾") , QString::fromUtf8("ai") },        // yi
        { QString::fromUtf8("大") , QString::fromUtf8("da") },        // dai
        { QString::fromUtf8("炮") , QString::fromUtf8("pao") },       // bao
   c. 选中非姓氏读音
        { QString::fromUtf8("仇") , QString::fromUtf8("chou") },      // qiu ，仇：作姓氏时读qiú
        { QString::fromUtf8("解") , QString::fromUtf8("jie") },       // xie ，解：作姓氏时读xiè
        { QString::fromUtf8("曾") , QString::fromUtf8("ceng") },      // zeng，曾：作姓氏时读zēng
   d. 选中姓名中比较可能出现的字,下面的例子可能恰好符合其他的规则，但是在我手动筛选多音字时确实考虑到这方面的情况，因为有些多音字的其中一些读音代表的意义明显不可能被当名字来使用，因为筛选时没记录，下面的例子可能不贴切
        { QString::fromUtf8("盛") , QString::fromUtf8("sheng") },     // cheng ， 茂盛（maoSheng），盛饭(chengFan)
        { QString::fromUtf8("石") , QString::fromUtf8("shi") },       // dan    ， 潘石屹
        { QString::fromUtf8("矜") , QString::fromUtf8("jin") },       // qin guan
        { QString::fromUtf8("强") , QString::fromUtf8("qiang") },     // jiang , 坚强（qiang），倔强（jiang）
   e. 需要上下文联系的，这种字没法了，只能查表，这里的输出原则遵循（abcd）
        { QString::fromUtf8("屏") , QString::fromUtf8("ping") },      // bing ， 屏幕、屏弃
        { QString::fromUtf8("卜") , QString::fromUtf8("bu") },        // bo ，   占卜、萝卜
*/
multiToneWordTableS multiToneWordTable[g_length_multiToneWordTable] =
{
    { QString::fromUtf8("厑") , QString::fromUtf8("e") },         // si a
    { QString::fromUtf8("吖") , QString::fromUtf8("ya") },        // a
    { QString::fromUtf8("阿") , QString::fromUtf8("a") },         // e
    { QString::fromUtf8("呵") , QString::fromUtf8("he") },        // ha ke a
    { QString::fromUtf8("腌") , QString::fromUtf8("yan") },       // a
    { QString::fromUtf8("嗄") , QString::fromUtf8("sha") },       // a
    { QString::fromUtf8("閊") , QString::fromUtf8("ci") },        // ka lu ai
    { QString::fromUtf8("魞") , QString::fromUtf8("li") },        // ai
    { QString::fromUtf8("鱛") , QString::fromUtf8("ai") },        // suo
    { QString::fromUtf8("娭") , QString::fromUtf8("xi") },        // ai
    { QString::fromUtf8("佁") , QString::fromUtf8("yi") },        // ai
    { QString::fromUtf8("欸") , QString::fromUtf8("ei") },        // ai
    { QString::fromUtf8("艾") , QString::fromUtf8("ai") },        // yi
    { QString::fromUtf8("嗌") , QString::fromUtf8("yi") },        // ai
    { QString::fromUtf8("噫") , QString::fromUtf8("yi") },        // ai
    { QString::fromUtf8("餲") , QString::fromUtf8("ai") },        // he
    { QString::fromUtf8("厂") , QString::fromUtf8("chang") },     // an
    { QString::fromUtf8("广") , QString::fromUtf8("guang") },     // an
    { QString::fromUtf8("晻") , QString::fromUtf8("yan") },       // an
    { QString::fromUtf8("犴") , QString::fromUtf8("han") },       // an
    { QString::fromUtf8("胺") , QString::fromUtf8("an") },        // e
    { QString::fromUtf8("肮") , QString::fromUtf8("ang") },       // hang
    { QString::fromUtf8("卬") , QString::fromUtf8("yang") },      // ang
    { QString::fromUtf8("仰") , QString::fromUtf8("yang") },      // ang
    { QString::fromUtf8("凹") , QString::fromUtf8("ao") },        // wa
    { QString::fromUtf8("嚣") , QString::fromUtf8("xiao") },      // ao
    { QString::fromUtf8("夭") , QString::fromUtf8("ao") },        // yao
    { QString::fromUtf8("拗") , QString::fromUtf8("ao") },        // niu
    { QString::fromUtf8("鎺") , QString::fromUtf8("ha") },        // ba
    { QString::fromUtf8("鯐") , QString::fromUtf8("li") },        // si xi ba
    { QString::fromUtf8("叭") , QString::fromUtf8("ba") },        // pa
    { QString::fromUtf8("鎺") , QString::fromUtf8("ba") },        // pa
    { QString::fromUtf8("伯") , QString::fromUtf8("bo") },        // bai  ba
    { QString::fromUtf8("杷") , QString::fromUtf8("pa") },        // ba
    { QString::fromUtf8("叭") , QString::fromUtf8("ba") },        // pa
    { QString::fromUtf8("耙") , QString::fromUtf8("pa") },        // ba
    { QString::fromUtf8("瓸") , QString::fromUtf8("bai") },       // wa
    { QString::fromUtf8("兡") , QString::fromUtf8("bai") },       // ke
    { QString::fromUtf8("陌") , QString::fromUtf8("mo") },        // bai
    { QString::fromUtf8("柏") , QString::fromUtf8("bai") },       // bo
    { QString::fromUtf8("伴") , QString::fromUtf8("ban") },       // pan
    { QString::fromUtf8("拌") , QString::fromUtf8("ban") },       // pan
    { QString::fromUtf8("坢") , QString::fromUtf8("pan") },       // ban
    { QString::fromUtf8("柈") , QString::fromUtf8("pan") },       // ban
    { QString::fromUtf8("膀") , QString::fromUtf8("bang") },      // pang
    { QString::fromUtf8("旁") , QString::fromUtf8("pang") },      // bang
    { QString::fromUtf8("蚌") , QString::fromUtf8("bang") },      // beng
    { QString::fromUtf8("棓") , QString::fromUtf8("bang") },      // bei
    { QString::fromUtf8("搒") , QString::fromUtf8("bang") },      // peng
    { QString::fromUtf8("磅") , QString::fromUtf8("bang") },      // pang
    { QString::fromUtf8("炮") , QString::fromUtf8("pao") },       // bao
    { QString::fromUtf8("枹") , QString::fromUtf8("bao") },       // fu
    { QString::fromUtf8("薄") , QString::fromUtf8("bo") },        // bao
    { QString::fromUtf8("堡") , QString::fromUtf8("bao") },       // bu pu
    { QString::fromUtf8("刨") , QString::fromUtf8("pao") },       // bao
    { QString::fromUtf8("袌") , QString::fromUtf8("pao") },       // bao
    { QString::fromUtf8("暴") , QString::fromUtf8("bao") },       // pu
    { QString::fromUtf8("瀑") , QString::fromUtf8("pu") },        // bao
    { QString::fromUtf8("曝") , QString::fromUtf8("bao") },       // pu
    { QString::fromUtf8("陂") , QString::fromUtf8("bei") },       // pi po
    { QString::fromUtf8("椑") , QString::fromUtf8("bei") },       // pi
    { QString::fromUtf8("孛") , QString::fromUtf8("bei") },       // bo
    { QString::fromUtf8("被") , QString::fromUtf8("bei") },       // pi
    { QString::fromUtf8("贲") , QString::fromUtf8("ben") },       // bi
    { QString::fromUtf8("夯") , QString::fromUtf8("hang") },      // ben
    { QString::fromUtf8("萙") , QString::fromUtf8("ta") },        // ku lai bi
    { QString::fromUtf8("蛯") , QString::fromUtf8("bi") },        // e
    { QString::fromUtf8("鎞") , QString::fromUtf8("bi") },        // pi
    { QString::fromUtf8("吡") , QString::fromUtf8("pi") },        // bi
    { QString::fromUtf8("箄") , QString::fromUtf8("pai") },       // bi
    { QString::fromUtf8("芘") , QString::fromUtf8("bi") },        // pi
    { QString::fromUtf8("泌") , QString::fromUtf8("mi") },        // bi
    { QString::fromUtf8("秘") , QString::fromUtf8("mi") },        // bi
    { QString::fromUtf8("裨") , QString::fromUtf8("bi") },        // pi
    { QString::fromUtf8("辟") , QString::fromUtf8("pi") },        // bi
    { QString::fromUtf8("睥") , QString::fromUtf8("pi") },        // bi
    { QString::fromUtf8("扁") , QString::fromUtf8("bian") },      // pian
    { QString::fromUtf8("褊") , QString::fromUtf8("bian") },      // pian
    { QString::fromUtf8("便") , QString::fromUtf8("bian") },      // pian
    { QString::fromUtf8("缏") , QString::fromUtf8("bian") },      // pian
    { QString::fromUtf8("杓") , QString::fromUtf8("shao") },      // biao
    { QString::fromUtf8("骠") , QString::fromUtf8("biao") },      // piao
    { QString::fromUtf8("麃") , QString::fromUtf8("pao") },       // biao
    { QString::fromUtf8("玢") , QString::fromUtf8("fen") },       // bin
    { QString::fromUtf8("槟") , QString::fromUtf8("bing") },      // bin
    { QString::fromUtf8("屏") , QString::fromUtf8("ping") },      // bing
    { QString::fromUtf8("绠") , QString::fromUtf8("geng") },      // bing
    { QString::fromUtf8("卜") , QString::fromUtf8("bu") },        // bo
    { QString::fromUtf8("畓") , QString::fromUtf8("da") },        // bo
    { QString::fromUtf8("泊") , QString::fromUtf8("po") },        // bo
    { QString::fromUtf8("魄") , QString::fromUtf8("po") },        // tuo bo
    { QString::fromUtf8("埔") , QString::fromUtf8("pu") },        // bu
    { QString::fromUtf8("拆") , QString::fromUtf8("chai") },      // ca
    { QString::fromUtf8("嚓") , QString::fromUtf8("ca") },        // cha
    { QString::fromUtf8("偲") , QString::fromUtf8("si") },        // cai
    { QString::fromUtf8("参") , QString::fromUtf8("can") },       // cen san shen
    { QString::fromUtf8("篸") , QString::fromUtf8("can") },       // zan
    { QString::fromUtf8("掺") , QString::fromUtf8("chan") },      // shan can
    { QString::fromUtf8("孱") , QString::fromUtf8("chan") },      // can
    { QString::fromUtf8("臧") , QString::fromUtf8("zang") },      // cang
    { QString::fromUtf8("藏") , QString::fromUtf8("cang") },      // zang
    { QString::fromUtf8("猠") , QString::fromUtf8("o") },         // ce
    { QString::fromUtf8("硛") , QString::fromUtf8("ce") },        // ke o
    { QString::fromUtf8("侧") , QString::fromUtf8("ce") },        // ze zhai
    { QString::fromUtf8("筴") , QString::fromUtf8("ce") },        // jia
    { QString::fromUtf8("噌") , QString::fromUtf8("cheng") },     // ceng
    { QString::fromUtf8("曾") , QString::fromUtf8("ceng") },      // zeng
    { QString::fromUtf8("差") , QString::fromUtf8("cha") },       // chai ci
    { QString::fromUtf8("喳") , QString::fromUtf8("zha") },       // cha
    { QString::fromUtf8("查") , QString::fromUtf8("cha") },       // zha
    { QString::fromUtf8("猹") , QString::fromUtf8("cha") },       // zha
    { QString::fromUtf8("楂") , QString::fromUtf8("zha") },       // cha
    { QString::fromUtf8("槎") , QString::fromUtf8("cha") },       // zha
    { QString::fromUtf8("刹") , QString::fromUtf8("sha") },       // cha
    { QString::fromUtf8("咤") , QString::fromUtf8("zha") },       // cha
    { QString::fromUtf8("柴") , QString::fromUtf8("chai") },      // zhai
    { QString::fromUtf8("茝") , QString::fromUtf8("chai") },      // zhi
    { QString::fromUtf8("瘥") , QString::fromUtf8("cuo") },       // chai
    { QString::fromUtf8("单") , QString::fromUtf8("dan") },       // shan chan
    { QString::fromUtf8("禅") , QString::fromUtf8("chan") },      // shan
    { QString::fromUtf8("长") , QString::fromUtf8("chang") },     // zhang
    { QString::fromUtf8("倘") , QString::fromUtf8("tang") },      // chang
    { QString::fromUtf8("惝") , QString::fromUtf8("chang") },     // tang
    { QString::fromUtf8("绰") , QString::fromUtf8("chuo") },      // chao
    { QString::fromUtf8("焯") , QString::fromUtf8("chao") },      // zhuo
    { QString::fromUtf8("剿") , QString::fromUtf8("chao") },      // jiao
    { QString::fromUtf8("朝") , QString::fromUtf8("chao") },      // zhao
    { QString::fromUtf8("鼌") , QString::fromUtf8("zhao") },      // chao
    { QString::fromUtf8("嘲") , QString::fromUtf8("chao") },      // zhao
    { QString::fromUtf8("车") , QString::fromUtf8("che") },       // ju
    { QString::fromUtf8("尺") , QString::fromUtf8("chi") },       // che
    { QString::fromUtf8("嗔") , QString::fromUtf8("chen") },      // tian
    { QString::fromUtf8("称") , QString::fromUtf8("cheng") },     // chen
    { QString::fromUtf8("铛") , QString::fromUtf8("dang") },      // cheng
    { QString::fromUtf8("樘") , QString::fromUtf8("tang") },      // cheng
    { QString::fromUtf8("乘") , QString::fromUtf8("cheng") },     // sheng
    { QString::fromUtf8("盛") , QString::fromUtf8("sheng") },     // cheng
    { QString::fromUtf8("澄") , QString::fromUtf8("cheng") },     // deng
    { QString::fromUtf8("坻") , QString::fromUtf8("di") },        // chi
    { QString::fromUtf8("瘈") , QString::fromUtf8("zhi") },       // chi
    { QString::fromUtf8("涌") , QString::fromUtf8("yong") },      // chong
    { QString::fromUtf8("虫") , QString::fromUtf8("chong") },     // hui
    { QString::fromUtf8("种") , QString::fromUtf8("zhong") },     // chong
    { QString::fromUtf8("重") , QString::fromUtf8("zhong") },     // chong
    { QString::fromUtf8("仇") , QString::fromUtf8("chou") },      // qiu
    { QString::fromUtf8("帱") , QString::fromUtf8("chou") },      // dao
    { QString::fromUtf8("杻") , QString::fromUtf8("niu") },       // chou
    { QString::fromUtf8("臭") , QString::fromUtf8("chou") },      // xiu
    { QString::fromUtf8("助") , QString::fromUtf8("zhu") },       // chu
    { QString::fromUtf8("褚") , QString::fromUtf8("zhu") },       // chuzhe
    { QString::fromUtf8("畜") , QString::fromUtf8("chu") },       // xu
    { QString::fromUtf8("俶") , QString::fromUtf8("chu") },       // ti
    { QString::fromUtf8("滀") , QString::fromUtf8("chu") },       // xu
    { QString::fromUtf8("欻") , QString::fromUtf8("xu") },        // chua
    { QString::fromUtf8("啜") , QString::fromUtf8("chuo") },      // chuai
    { QString::fromUtf8("传") , QString::fromUtf8("chuan") },     // zhuan
    { QString::fromUtf8("串") , QString::fromUtf8("chuan") },     // guan
    { QString::fromUtf8("幢") , QString::fromUtf8("zhuang") },    // chuang
    { QString::fromUtf8("椎") , QString::fromUtf8("zhui") },      // chui
    { QString::fromUtf8("錞") , QString::fromUtf8("dchun") },     // ui
    { QString::fromUtf8("婼") , QString::fromUtf8("ruo") },       // chuo
    { QString::fromUtf8("茈") , QString::fromUtf8("zi") },        // ci
    { QString::fromUtf8("兹") , QString::fromUtf8("zi") },        // ci
    { QString::fromUtf8("伺") , QString::fromUtf8("si") },        // ci
    { QString::fromUtf8("枞") , QString::fromUtf8("cong") },      // zong
    { QString::fromUtf8("楤") , QString::fromUtf8("song") },      // cong
    { QString::fromUtf8("卒") , QString::fromUtf8("zu") },        // cu
    { QString::fromUtf8("趣") , QString::fromUtf8("qu") },        // cu
    { QString::fromUtf8("菆") , QString::fromUtf8("zou") },       // cuan
    { QString::fromUtf8("攒") , QString::fromUtf8("zan") },       // cuan
    { QString::fromUtf8("粹") , QString::fromUtf8("cui") },       // sui
    { QString::fromUtf8("蹲") , QString::fromUtf8("dun") },       // cun
    { QString::fromUtf8("酂") , QString::fromUtf8("zan") },       // cuo
    { QString::fromUtf8("鶎") , QString::fromUtf8("ku") },        // ta yi da
    { QString::fromUtf8("嗒") , QString::fromUtf8("da") },        // ta
    { QString::fromUtf8("沓") , QString::fromUtf8("ta") },        // da
    { QString::fromUtf8("惮") , QString::fromUtf8("dan") },       // da
    { QString::fromUtf8("大") , QString::fromUtf8("da") },        // dai
    { QString::fromUtf8("汏") , QString::fromUtf8("tai") },       // da
    { QString::fromUtf8("呔") , QString::fromUtf8("dai") },       // tai
    { QString::fromUtf8("骀") , QString::fromUtf8("dai") },       // tai
    { QString::fromUtf8("掸") , QString::fromUtf8("dan") },       // shan
    { QString::fromUtf8("黵") , QString::fromUtf8("dan") },       // zhan
    { QString::fromUtf8("石") , QString::fromUtf8("shi") },       // dan
    { QString::fromUtf8("弹") , QString::fromUtf8("tan") },       // dan
    { QString::fromUtf8("澹") , QString::fromUtf8("dan") },       // tan
    { QString::fromUtf8("乭") , QString::fromUtf8("dao") },       // ri
    { QString::fromUtf8("叨") , QString::fromUtf8("dao") },       // tao
    { QString::fromUtf8("焘") , QString::fromUtf8("dao") },       // tao
    { QString::fromUtf8("的") , QString::fromUtf8("de") },        // di
    { QString::fromUtf8("地") , QString::fromUtf8("di") },        // de
    { QString::fromUtf8("底") , QString::fromUtf8("di") },        // de
    { QString::fromUtf8("得") , QString::fromUtf8("de") },        // dei
    { QString::fromUtf8("嘚") , QString::fromUtf8("de") },        // dei
    { QString::fromUtf8("嚸") , QString::fromUtf8("di") },        // mi
    { QString::fromUtf8("提") , QString::fromUtf8("ti") },        // di
    { QString::fromUtf8("翟") , QString::fromUtf8("di") },        // zhai
    { QString::fromUtf8("蹢") , QString::fromUtf8("di") },        // zhi
    { QString::fromUtf8("杕") , QString::fromUtf8("di") },        // duo
    { QString::fromUtf8("揥") , QString::fromUtf8("ti") },        // di
    { QString::fromUtf8("阽") , QString::fromUtf8("dian") },      // yan
    { QString::fromUtf8("佃") , QString::fromUtf8("dian") },      // tian
    { QString::fromUtf8("钿") , QString::fromUtf8("dian") },      // tian
    { QString::fromUtf8("鸟") , QString::fromUtf8("niao") },      // diao
    { QString::fromUtf8("调") , QString::fromUtf8("tiao") },      // zhou diao
    { QString::fromUtf8("铫") , QString::fromUtf8("diao") },      // yao
    { QString::fromUtf8("咥") , QString::fromUtf8("die") },       // xi
    { QString::fromUtf8("昳") , QString::fromUtf8("die") },       // yi
    { QString::fromUtf8("喋") , QString::fromUtf8("die") },       // zha
    { QString::fromUtf8("揲") , QString::fromUtf8("die") },       // she
    { QString::fromUtf8("螲") , QString::fromUtf8("zhi") },       // die
    { QString::fromUtf8("丁") , QString::fromUtf8("ding") },      // zheng
    { QString::fromUtf8("町") , QString::fromUtf8("ding") },      // ting
    { QString::fromUtf8("铤") , QString::fromUtf8("ting") },      // ding
    { QString::fromUtf8("侗") , QString::fromUtf8("tong") },      // dong
    { QString::fromUtf8("垌") , QString::fromUtf8("dong") },      // tong
    { QString::fromUtf8("恫") , QString::fromUtf8("dong") },      // tong
    { QString::fromUtf8("峒") , QString::fromUtf8("tong") },      // dong
    { QString::fromUtf8("都") , QString::fromUtf8("dou") },       // du
    { QString::fromUtf8("读") , QString::fromUtf8("du") },        // dou
    { QString::fromUtf8("渎") , QString::fromUtf8("du") },        // dou
    { QString::fromUtf8("叾") , QString::fromUtf8("du") },        // ge
    { QString::fromUtf8("阇") , QString::fromUtf8("du") },        // she
    { QString::fromUtf8("度") , QString::fromUtf8("duo") },       // du
    { QString::fromUtf8("斁") , QString::fromUtf8("yi") },        // du
    { QString::fromUtf8("敦") , QString::fromUtf8("dun") },       // dui
    { QString::fromUtf8("镦") , QString::fromUtf8("dui") },       // dun
    { QString::fromUtf8("沌") , QString::fromUtf8("dun") },       // zhuan
    { QString::fromUtf8("囤") , QString::fromUtf8("tun") },       // dun
    { QString::fromUtf8("楯") , QString::fromUtf8("dun") },       // shun
    { QString::fromUtf8("鯲") , QString::fromUtf8("wu") },        // ya duo ji
    { QString::fromUtf8("驮") , QString::fromUtf8("tuo") },       // duo
    { QString::fromUtf8("堕") , QString::fromUtf8("duo") },       // hui
    { QString::fromUtf8("仒") , QString::fromUtf8("o") },         // e
    { QString::fromUtf8("旕") , QString::fromUtf8("o") },         // si e
    { QString::fromUtf8("襨") , QString::fromUtf8("e") },         // ta
    { QString::fromUtf8("欕") , QString::fromUtf8("mi") },        // e
    { QString::fromUtf8("恶") , QString::fromUtf8("e") },         // wu
    { QString::fromUtf8("哦") , QString::fromUtf8("o") },         // e
    { QString::fromUtf8("蛾") , QString::fromUtf8("e") },         // yi
    { QString::fromUtf8("阏") , QString::fromUtf8("e") },         // yan
    { QString::fromUtf8("椧") , QString::fromUtf8("mi") },        // eng
    { QString::fromUtf8("臑") , QString::fromUtf8("nao") },       // er
    { QString::fromUtf8("佴") , QString::fromUtf8("er") },        // nai
    { QString::fromUtf8("发") , QString::fromUtf8("fa") },        // fei
    { QString::fromUtf8("酦") , QString::fromUtf8("fa") },        // po
    { QString::fromUtf8("番") , QString::fromUtf8("fan") },       // pan
    { QString::fromUtf8("袢") , QString::fromUtf8("pan") },       // fan
    { QString::fromUtf8("繁") , QString::fromUtf8("fan") },       // po
    { QString::fromUtf8("仿") , QString::fromUtf8("fang") },      // pang
    { QString::fromUtf8("彷") , QString::fromUtf8("pang") },      // fang
    { QString::fromUtf8("芾") , QString::fromUtf8("fu") },        // fei
    { QString::fromUtf8("怫") , QString::fromUtf8("fu") },        // fei
    { QString::fromUtf8("濆") , QString::fromUtf8("fen") },       // pen
    { QString::fromUtf8("冯") , QString::fromUtf8("feng") },      // ping
    { QString::fromUtf8("佛") , QString::fromUtf8("fo") },        // fu
    { QString::fromUtf8("否") , QString::fromUtf8("fou") },       // pi
    { QString::fromUtf8("莩") , QString::fromUtf8("fu") },        // piao
    { QString::fromUtf8("俛") , QString::fromUtf8("mian") },      // fu
    { QString::fromUtf8("脯") , QString::fromUtf8("pu") },        // fu
    { QString::fromUtf8("乫") , QString::fromUtf8("ga") },        // ri
    { QString::fromUtf8("凩") , QString::fromUtf8("xi") },        // la  ga
    { QString::fromUtf8("軈") , QString::fromUtf8("ya") },        // ga
    { QString::fromUtf8("夹") , QString::fromUtf8("jia") },       // ga
    { QString::fromUtf8("伽") , QString::fromUtf8("ga") },        // jia qie
    { QString::fromUtf8("呷") , QString::fromUtf8("xia") },       // ga
    { QString::fromUtf8("咖") , QString::fromUtf8("ka") },        // ga
    { QString::fromUtf8("轧") , QString::fromUtf8("zha") },       // ya  ga
    { QString::fromUtf8("芥") , QString::fromUtf8("jie") },       // gai
    { QString::fromUtf8("盖") , QString::fromUtf8("gai") },       // ge
    { QString::fromUtf8("奸") , QString::fromUtf8("jian") },      // gan
    { QString::fromUtf8("感") , QString::fromUtf8("gan") },       // han
    { QString::fromUtf8("赣") , QString::fromUtf8("gan") },       // gong
    { QString::fromUtf8("扛") , QString::fromUtf8("kang") },      // gang
    { QString::fromUtf8("戆") , QString::fromUtf8("gang") },      // zhuang
    { QString::fromUtf8("皋") , QString::fromUtf8("gao") },       // hao
    { QString::fromUtf8("羙") , QString::fromUtf8("mei") },       // gao
    { QString::fromUtf8("镐") , QString::fromUtf8("gao") },       // hao
    { QString::fromUtf8("乬") , QString::fromUtf8("ge") },        // ri
    { QString::fromUtf8("巪") , QString::fromUtf8("xi") },        // ge
    { QString::fromUtf8("唟") , QString::fromUtf8("ge") },        // xi
    { QString::fromUtf8("仡") , QString::fromUtf8("yi") },        // ge
    { QString::fromUtf8("纥") , QString::fromUtf8("ge") },        // he
    { QString::fromUtf8("咯") , QString::fromUtf8("ge") },        // ka luo
    { QString::fromUtf8("革") , QString::fromUtf8("ge") },        // ji
    { QString::fromUtf8("鬲") , QString::fromUtf8("ge") },        // li
    { QString::fromUtf8("蛤") , QString::fromUtf8("ge") },        // ha
    { QString::fromUtf8("合") , QString::fromUtf8("he") },        // ge
    { QString::fromUtf8("硌") , QString::fromUtf8("luo") },       // ge
    { QString::fromUtf8("给") , QString::fromUtf8("gei") },       // ji
    { QString::fromUtf8("哏") , QString::fromUtf8("gen") },       // hen
    { QString::fromUtf8("红") , QString::fromUtf8("hong") },      // gong
    { QString::fromUtf8("唝") , QString::fromUtf8("gong") },      // hong
    { QString::fromUtf8("句") , QString::fromUtf8("ju") },        // gou
    { QString::fromUtf8("枸") , QString::fromUtf8("gou") },       // ju
    { QString::fromUtf8("呱") , QString::fromUtf8("gua") },       // gu
    { QString::fromUtf8("家") , QString::fromUtf8("jia") },       // gu
    { QString::fromUtf8("鹘") , QString::fromUtf8("gu") },        // hu
    { QString::fromUtf8("汩") , QString::fromUtf8("gu") },        // yu
    { QString::fromUtf8("谷") , QString::fromUtf8("gu") },        // yu
    { QString::fromUtf8("苦") , QString::fromUtf8("ku") },        // gu
    { QString::fromUtf8("贾") , QString::fromUtf8("jia") },       // gu
    { QString::fromUtf8("鹄") , QString::fromUtf8("gu") },        // he hu
    { QString::fromUtf8("嘏") , QString::fromUtf8("gu") },        // jia
    { QString::fromUtf8("雇") , QString::fromUtf8("gu") },        // hu
    { QString::fromUtf8("栝") , QString::fromUtf8("gua") },       // kuo
    { QString::fromUtf8("纶") , QString::fromUtf8("lun") },       // guan
    { QString::fromUtf8("矜") , QString::fromUtf8("jin") },       // qin guan
    { QString::fromUtf8("莞") , QString::fromUtf8("guan") },      // wan
    { QString::fromUtf8("归") , QString::fromUtf8("gui") },       // kui
    { QString::fromUtf8("龟") , QString::fromUtf8("gui") },       // jun qiu
    { QString::fromUtf8("廆") , QString::fromUtf8("gui") },       // hui wei
    { QString::fromUtf8("鲑") , QString::fromUtf8("gui") },       // hua xie
    { QString::fromUtf8("氿") , QString::fromUtf8("jiu") },       // gui
    { QString::fromUtf8("炅") , QString::fromUtf8("jiong") },     // gui
    { QString::fromUtf8("炔") , QString::fromUtf8("que") },       // gui
    { QString::fromUtf8("柜") , QString::fromUtf8("gui") },       // ju
    { QString::fromUtf8("桧") , QString::fromUtf8("hui") },       // gui
    { QString::fromUtf8("鳜") , QString::fromUtf8("gui") },       // jue
    { QString::fromUtf8("涡") , QString::fromUtf8("wo") },        // guo
    { QString::fromUtf8("乤") , QString::fromUtf8("ha") },        // ri
    { QString::fromUtf8("扖") , QString::fromUtf8("ru") },        // me  ha
    { QString::fromUtf8("溌") , QString::fromUtf8("tu") },        // ha
    { QString::fromUtf8("噺") , QString::fromUtf8("xi") },        // ha na
    { QString::fromUtf8("鱩") , QString::fromUtf8("ta") },        // ha
    { QString::fromUtf8("虾") , QString::fromUtf8("xia") },       // ha
    { QString::fromUtf8("咳") , QString::fromUtf8("ke") },        // hai
    { QString::fromUtf8("嗨") , QString::fromUtf8("hai") },       // hei
    { QString::fromUtf8("还") , QString::fromUtf8("huan") },      // hai
    { QString::fromUtf8("害") , QString::fromUtf8("hai") },       // he
    { QString::fromUtf8("炕") , QString::fromUtf8("kang") },      // hang
    { QString::fromUtf8("行") , QString::fromUtf8("xing") },      // hang heng
    { QString::fromUtf8("吭") , QString::fromUtf8("keng") },      // hang
    { QString::fromUtf8("巷") , QString::fromUtf8("xiang") },     // hang
    { QString::fromUtf8("貉") , QString::fromUtf8("he") },        // hao
    { QString::fromUtf8("遤") , QString::fromUtf8("he") },        // wo
    { QString::fromUtf8("和") , QString::fromUtf8("he") },        // hu huo
    { QString::fromUtf8("核") , QString::fromUtf8("he") },        // hu
    { QString::fromUtf8("吓") , QString::fromUtf8("xia") },       // he
    { QString::fromUtf8("猲") , QString::fromUtf8("xie") },       // he
    { QString::fromUtf8("熇") , QString::fromUtf8("he") },        // kao
    { QString::fromUtf8("嘿") , QString::fromUtf8("hei") },       // mo
    { QString::fromUtf8("戏") , QString::fromUtf8("xi") },        // hu hui
    { QString::fromUtf8("芴") , QString::fromUtf8("wu") },        // hu
    { QString::fromUtf8("浒") , QString::fromUtf8("hu") },        // xu
    { QString::fromUtf8("唬") , QString::fromUtf8("hu") },        // xia
    { QString::fromUtf8("楛") , QString::fromUtf8("ku") },        // hu
    { QString::fromUtf8("砉") , QString::fromUtf8("xu") },        // hua
    { QString::fromUtf8("郇") , QString::fromUtf8("xun") },       // huan
    { QString::fromUtf8("圜") , QString::fromUtf8("yuan") },      // huan
    { QString::fromUtf8("嬛") , QString::fromUtf8("huan") },      // qiong xuan
    { QString::fromUtf8("眩") , QString::fromUtf8("xuan") },      // huan
    { QString::fromUtf8("炜") , QString::fromUtf8("wei") },       // hui
    { QString::fromUtf8("珲") , QString::fromUtf8("hun") },       // hui
    { QString::fromUtf8("睢") , QString::fromUtf8("hui") },       // sui
    { QString::fromUtf8("会") , QString::fromUtf8("hui") },       // kuai
    { QString::fromUtf8("浍") , QString::fromUtf8("hui") },       // kuai
    { QString::fromUtf8("哕") , QString::fromUtf8("yue") },       // hui
    { QString::fromUtf8("荤") , QString::fromUtf8("hun") },       // xun
    { QString::fromUtf8("奇") , QString::fromUtf8("qi") },        // ji
    { QString::fromUtf8("其") , QString::fromUtf8("qi") },        // ji
    { QString::fromUtf8("缉") , QString::fromUtf8("ji") },        // qi
    { QString::fromUtf8("稽") , QString::fromUtf8("ji") },        // qi
    { QString::fromUtf8("亟") , QString::fromUtf8("ji") },        // qi
    { QString::fromUtf8("藉") , QString::fromUtf8("ji") },        // jie
    { QString::fromUtf8("齐") , QString::fromUtf8("qi") },        // ji
    { QString::fromUtf8("系") , QString::fromUtf8("xi") },        // ji
    { QString::fromUtf8("荠") , QString::fromUtf8("ji") },        // qi
    { QString::fromUtf8("祭") , QString::fromUtf8("ji") },        // zhai
    { QString::fromUtf8("偈") , QString::fromUtf8("jie") },       // ji
    { QString::fromUtf8("嗧") , QString::fromUtf8("jia") },       // lun
    { QString::fromUtf8("茄") , QString::fromUtf8("qie") },       // jia
    { QString::fromUtf8("葭") , QString::fromUtf8("jia") },       // xia
    { QString::fromUtf8("假") , QString::fromUtf8("jia") },       // xia
    { QString::fromUtf8("价") , QString::fromUtf8("jia") },       // jie
    { QString::fromUtf8("浅") , QString::fromUtf8("qian") },      // jian
    { QString::fromUtf8("犍") , QString::fromUtf8("jian") },      // qian
    { QString::fromUtf8("囝") , QString::fromUtf8("jian") },      // nan
    { QString::fromUtf8("见") , QString::fromUtf8("jian") },      // xian
    { QString::fromUtf8("槛") , QString::fromUtf8("kan") },       // jian
    { QString::fromUtf8("将") , QString::fromUtf8("jiang") },     // qiang
    { QString::fromUtf8("降") , QString::fromUtf8("jiang") },     // xiang
    { QString::fromUtf8("强") , QString::fromUtf8("qiang") },     // jiang
    { QString::fromUtf8("蕉") , QString::fromUtf8("jiao") },      // qiao
    { QString::fromUtf8("徼") , QString::fromUtf8("jiao") },      // yao
    { QString::fromUtf8("嚼") , QString::fromUtf8("jiao") },      // jue
    { QString::fromUtf8("角") , QString::fromUtf8("jiao") },      // jue
    { QString::fromUtf8("侥") , QString::fromUtf8("jiao") },      // yao
    { QString::fromUtf8("脚") , QString::fromUtf8("jiao") },      // jue
    { QString::fromUtf8("湫") , QString::fromUtf8("jiu") },       // qiu jiao
    { QString::fromUtf8("缴") , QString::fromUtf8("jiao") },      // zhuo
    { QString::fromUtf8("峤") , QString::fromUtf8("qiao") },      // jiao
    { QString::fromUtf8("觉") , QString::fromUtf8("jiao") },      // jue
    { QString::fromUtf8("校") , QString::fromUtf8("xiao") },      // jiao
    { QString::fromUtf8("楷") , QString::fromUtf8("kai") },       // jie
    { QString::fromUtf8("桔") , QString::fromUtf8("jie") },       // ju
    { QString::fromUtf8("絜") , QString::fromUtf8("xie") },       // jie
    { QString::fromUtf8("解") , QString::fromUtf8("jie") },       // xie
    { QString::fromUtf8("廑") , QString::fromUtf8("jin") },       // qin
    { QString::fromUtf8("劲") , QString::fromUtf8("jing") },      // jin
    { QString::fromUtf8("倞") , QString::fromUtf8("liang") },     // jing
    { QString::fromUtf8("靓") , QString::fromUtf8("liang") },     // jing
    { QString::fromUtf8("且") , QString::fromUtf8("qie") },       // ju
    { QString::fromUtf8("苴") , QString::fromUtf8("ju") },        // zu
    { QString::fromUtf8("蛆") , QString::fromUtf8("qu") },        // ju
    { QString::fromUtf8("趄") , QString::fromUtf8("qie") },       // ju
    { QString::fromUtf8("咀") , QString::fromUtf8("ju") },        // zui
    { QString::fromUtf8("籧") , QString::fromUtf8("qu") },        // ju
    { QString::fromUtf8("苣") , QString::fromUtf8("ju") },        // qu
    { QString::fromUtf8("圈") , QString::fromUtf8("quan") },      // juan
    { QString::fromUtf8("卷") , QString::fromUtf8("juan") },      // quan
    { QString::fromUtf8("踡") , QString::fromUtf8("quan") },      // juan
    { QString::fromUtf8("隽") , QString::fromUtf8("jun") },       // juan
    { QString::fromUtf8("阙") , QString::fromUtf8("que") },       // jue
    { QString::fromUtf8("噱") , QString::fromUtf8("xue") },       // jue
    { QString::fromUtf8("筠") , QString::fromUtf8("jun") },       // yun
    { QString::fromUtf8("麇") , QString::fromUtf8("qun") },       // jun
    { QString::fromUtf8("浚") , QString::fromUtf8("jun") },       // xun
    { QString::fromUtf8("焌") , QString::fromUtf8("jun") },       // qu
    { QString::fromUtf8("凧") , QString::fromUtf8("ka") },        // yi
    { QString::fromUtf8("裃") , QString::fromUtf8("ka") },        // mi mo xi 日
    { QString::fromUtf8("聢") , QString::fromUtf8("li") },        // xi ka
    { QString::fromUtf8("鯑") , QString::fromUtf8("ke") },        // nou zi ka
    { QString::fromUtf8("鶍") , QString::fromUtf8("si") },        // yi ka
    { QString::fromUtf8("卡") , QString::fromUtf8("ka") },        // qia
    { QString::fromUtf8("厼") , QString::fromUtf8("mu") },        // wu ke
    { QString::fromUtf8("迲") , QString::fromUtf8("o") },         // pi ke
    { QString::fromUtf8("穒") , QString::fromUtf8("o") },         // ke
    { QString::fromUtf8("壳") , QString::fromUtf8("ke") },        // qiao
    { QString::fromUtf8("隗") , QString::fromUtf8("wei") },       // kui
    { QString::fromUtf8("鮱") , QString::fromUtf8("luo") },       // la
    { QString::fromUtf8("落") , QString::fromUtf8("luo") },       // lao  la
    { QString::fromUtf8("腊") , QString::fromUtf8("la") },        // xi
    { QString::fromUtf8("蜡") , QString::fromUtf8("la") },        // zha
    { QString::fromUtf8("癞") , QString::fromUtf8("lai") },       // la
    { QString::fromUtf8("莨") , QString::fromUtf8("liang") },     // lang
    { QString::fromUtf8("潦") , QString::fromUtf8("liao") },      // lao
    { QString::fromUtf8("姥") , QString::fromUtf8("lao") },       // mu
    { QString::fromUtf8("獠") , QString::fromUtf8("liao") },      // lao
    { QString::fromUtf8("络") , QString::fromUtf8("luo") },       // lao
    { QString::fromUtf8("烙") , QString::fromUtf8("lao") },       // luo
    { QString::fromUtf8("朰") , QString::fromUtf8("te") },        // wu le
    { QString::fromUtf8("榁") , QString::fromUtf8("mu") },        // le
    { QString::fromUtf8("肋") , QString::fromUtf8("lei") },       // le
    { QString::fromUtf8("乐") , QString::fromUtf8("yue") },       // le
    { QString::fromUtf8("勒") , QString::fromUtf8("lei") },       // le
    { QString::fromUtf8("漯") , QString::fromUtf8("luo") },       // ta lei
    { QString::fromUtf8("棱") , QString::fromUtf8("leng") },      // ling
    { QString::fromUtf8("甅") , QString::fromUtf8("li") },        // wa
    { QString::fromUtf8("蠡") , QString::fromUtf8("li") },        // luo
    { QString::fromUtf8("栎") , QString::fromUtf8("li") },        // yue
    { QString::fromUtf8("跞") , QString::fromUtf8("li") },        // luo
    { QString::fromUtf8("俩") , QString::fromUtf8("liang") },     // lia
    { QString::fromUtf8("飂") , QString::fromUtf8("liu") },       // liao
    { QString::fromUtf8("蓼") , QString::fromUtf8("liao") },      // lu
    { QString::fromUtf8("挘") , QString::fromUtf8("lie") },       // ri
    { QString::fromUtf8("六") , QString::fromUtf8("liu") },       // lu
    { QString::fromUtf8("陆") , QString::fromUtf8("lu") },        // liu
    { QString::fromUtf8("碌") , QString::fromUtf8("lu") },        // liu
    { QString::fromUtf8("泷") , QString::fromUtf8("long") },      // shuang
    { QString::fromUtf8("弄") , QString::fromUtf8("nong") },      // long
    { QString::fromUtf8("偻") , QString::fromUtf8("lou") },       // lv
    { QString::fromUtf8("露") , QString::fromUtf8("lu") },        // lou
    { QString::fromUtf8("绿") , QString::fromUtf8("lv") },        // lu
    { QString::fromUtf8("捋") , QString::fromUtf8("luo") },       // lv
    { QString::fromUtf8("率") , QString::fromUtf8("shuai") },     // lv
    { QString::fromUtf8("呣") , QString::fromUtf8("m") },         // mou
    { QString::fromUtf8("姆") , QString::fromUtf8("mu") },        // m
    { QString::fromUtf8("唜") , QString::fromUtf8("si") },        // ma
    { QString::fromUtf8("魸") , QString::fromUtf8("na") },        // zi ma 日
    { QString::fromUtf8("孖") , QString::fromUtf8("zi") },        // ma
    { QString::fromUtf8("抹") , QString::fromUtf8("mo") },        // ma
    { QString::fromUtf8("摩") , QString::fromUtf8("mo") },        // ma
    { QString::fromUtf8("埋") , QString::fromUtf8("mai") },       // man
    { QString::fromUtf8("脉") , QString::fromUtf8("mai") },       // mo
    { QString::fromUtf8("蔓") , QString::fromUtf8("wan") },       // man
    { QString::fromUtf8("尨") , QString::fromUtf8("meng") },      // mang
    { QString::fromUtf8("氓") , QString::fromUtf8("mang") },      // meng
    { QString::fromUtf8("冒") , QString::fromUtf8("mao") },       // mo
    { QString::fromUtf8("乄") , QString::fromUtf8("shi") },       // me 日
    { QString::fromUtf8("匁") , QString::fromUtf8("mo") },        // ne me 日
    { QString::fromUtf8("没") , QString::fromUtf8("mei") },       // mo
    { QString::fromUtf8("糜") , QString::fromUtf8("mi") },        // mei
    { QString::fromUtf8("谜") , QString::fromUtf8("mi") },        // mei
    { QString::fromUtf8("汶") , QString::fromUtf8("wen") },       // men
    { QString::fromUtf8("亹") , QString::fromUtf8("wei") },       // men
    { QString::fromUtf8("黾") , QString::fromUtf8("min") },       // meng
    { QString::fromUtf8("鼡") , QString::fromUtf8("ne") },        // zu mi 日
    { QString::fromUtf8("蓂") , QString::fromUtf8("ming") },      // mi
    { QString::fromUtf8("免") , QString::fromUtf8("mian") },      // wen
    { QString::fromUtf8("渑") , QString::fromUtf8("mian") },      // sheng
    { QString::fromUtf8("缪") , QString::fromUtf8("miu") },       // mou miao
    { QString::fromUtf8("乜") , QString::fromUtf8("mie") },       // nie
    { QString::fromUtf8("丆") , QString::fromUtf8("ne") },        // o ye mo
    { QString::fromUtf8("乮") , QString::fromUtf8("ri") },        // mo 韩
    { QString::fromUtf8("无") , QString::fromUtf8("wu") },        // mo
    { QString::fromUtf8("模") , QString::fromUtf8("mo") },        // mu
    { QString::fromUtf8("万") , QString::fromUtf8("wan") },       // mo
    { QString::fromUtf8("莫") , QString::fromUtf8("mo") },        // mu
    { QString::fromUtf8("袜") , QString::fromUtf8("wa") },        // mo
    { QString::fromUtf8("牟") , QString::fromUtf8("mou") },       // mu
    { QString::fromUtf8("那") , QString::fromUtf8("na") },        // ne nei nuo
    { QString::fromUtf8("南") , QString::fromUtf8("nan") },       // na
    { QString::fromUtf8("哪") , QString::fromUtf8("na") },        // nai ne nei
    { QString::fromUtf8("内") , QString::fromUtf8("nei") },       // na
    { QString::fromUtf8("呐") , QString::fromUtf8("na") },        // ne
    { QString::fromUtf8("娜") , QString::fromUtf8("na") },        // nuo
    { QString::fromUtf8("艿") , QString::fromUtf8("nai") },       // reng
    { QString::fromUtf8("呶") , QString::fromUtf8("nao") },       // nu
    { QString::fromUtf8("縇") , QString::fromUtf8("o") },         // se ne
    { QString::fromUtf8("唔") , QString::fromUtf8("wu") },        // ng
    { QString::fromUtf8("哛") , QString::fromUtf8("po") },        // pu ni
    { QString::fromUtf8("鳰") , QString::fromUtf8("o") },         // ni 日
    { QString::fromUtf8("溺") , QString::fromUtf8("ni") },        // niao
    { QString::fromUtf8("嶷") , QString::fromUtf8("yi") },        // ni
    { QString::fromUtf8("粘") , QString::fromUtf8("zhan") },      // nian
    { QString::fromUtf8("捻") , QString::fromUtf8("nian") },      // nie
    { QString::fromUtf8("辗") , QString::fromUtf8("zhan") },      // nian
    { QString::fromUtf8("尿") , QString::fromUtf8("niao") },      // sui
    { QString::fromUtf8("宁") , QString::fromUtf8("ning") },      // zhu
    { QString::fromUtf8("莻") , QString::fromUtf8("xi") },        // nu 韩
    { QString::fromUtf8("喏") , QString::fromUtf8("nuo") },       // re
    { QString::fromUtf8("疟") , QString::fromUtf8("nve") },       // yao
    { QString::fromUtf8("区") , QString::fromUtf8("qu") },        // ou
    { QString::fromUtf8("巼") , QString::fromUtf8("xi") },        // pa 韩
    { QString::fromUtf8("派") , QString::fromUtf8("pai") },       // pa
    { QString::fromUtf8("闏") , QString::fromUtf8("ying") },      // pai 韩
    { QString::fromUtf8("迫") , QString::fromUtf8("po") },        // pai
    { QString::fromUtf8("胖") , QString::fromUtf8("pang") },      // pan
    { QString::fromUtf8("拚") , QString::fromUtf8("pin") },       // pan
    { QString::fromUtf8("喸") , QString::fromUtf8("xi") },        // pao 韩
    { QString::fromUtf8("朴") , QString::fromUtf8("pu") },        // po  piao
    { QString::fromUtf8("娉") , QString::fromUtf8("pin") },       // ping
    { QString::fromUtf8("乶") , QString::fromUtf8("po") },        // ri 韩
    { QString::fromUtf8("栖") , QString::fromUtf8("qi") },        // xi
    { QString::fromUtf8("踦") , QString::fromUtf8("qi") },        // yi
    { QString::fromUtf8("蹊") , QString::fromUtf8("qi") },        // xi
    { QString::fromUtf8("圻") , QString::fromUtf8("qi") },        // yin
    { QString::fromUtf8("俟") , QString::fromUtf8("si") },        // qi
    { QString::fromUtf8("綮") , QString::fromUtf8("qing") },      // qi
    { QString::fromUtf8("契") , QString::fromUtf8("qi") },        // xie
    { QString::fromUtf8("砌") , QString::fromUtf8("qie") },       // qi
    { QString::fromUtf8("铅") , QString::fromUtf8("qian") },      // yan
    { QString::fromUtf8("嗛") , QString::fromUtf8("xian") },      // qian
    { QString::fromUtf8("荨") , QString::fromUtf8("qian") },      // xun
    { QString::fromUtf8("羬") , QString::fromUtf8("xian") },      // qian
    { QString::fromUtf8("纤") , QString::fromUtf8("xian") },      // qian
    { QString::fromUtf8("茜") , QString::fromUtf8("xi") },        // qian
    { QString::fromUtf8("倩") , QString::fromUtf8("qian") },      // qing
    { QString::fromUtf8("慊") , QString::fromUtf8("qie") },       // qian
    { QString::fromUtf8("雀") , QString::fromUtf8("que") },       // qiao
    { QString::fromUtf8("鞘") , QString::fromUtf8("qiao") },      // shao
    { QString::fromUtf8("亲") , QString::fromUtf8("qin") },       // qing
    { QString::fromUtf8("覃") , QString::fromUtf8("tan") },       // qin
    { QString::fromUtf8("溱") , QString::fromUtf8("qin") },       // zhen
    { QString::fromUtf8("鲭") , QString::fromUtf8("qing") },      // zheng
    { QString::fromUtf8("蝤") , QString::fromUtf8("qiu") },       // you
    { QString::fromUtf8("券") , QString::fromUtf8("quan") },      // xuan
    { QString::fromUtf8("芍") , QString::fromUtf8("shao") },      // que
    { QString::fromUtf8("荛") , QString::fromUtf8("yao") },       // rao
    { QString::fromUtf8("若") , QString::fromUtf8("ruo") },       // re
    { QString::fromUtf8("葚") , QString::fromUtf8("shen") },      // ren
    { QString::fromUtf8("乽") , QString::fromUtf8("za") },        // ri 韩
    { QString::fromUtf8("乼") , QString::fromUtf8("zu") },        // ri 韩
    { QString::fromUtf8("乺") , QString::fromUtf8("sao") },       // ri 韩
    { QString::fromUtf8("鑓") , QString::fromUtf8("ya") },        // ri 日
    { QString::fromUtf8("虄") , QString::fromUtf8("sa") },        // ri 韩
    { QString::fromUtf8("扨") , QString::fromUtf8("te") },        // sa 日
    { QString::fromUtf8("苆") , QString::fromUtf8("su") },        // sa 日
    { QString::fromUtf8("栍") , QString::fromUtf8("ying") },      // sa 韩
    { QString::fromUtf8("摋") , QString::fromUtf8("sa") },        // sha
    { QString::fromUtf8("思") , QString::fromUtf8("si") },        // sai
    { QString::fromUtf8("塞") , QString::fromUtf8("sai") },       // se
    { QString::fromUtf8("糁") , QString::fromUtf8("shen") },      // san
    { QString::fromUtf8("燥") , QString::fromUtf8("zao") },       // sao
    { QString::fromUtf8("色") , QString::fromUtf8("se") },        // shai
    { QString::fromUtf8("杉") , QString::fromUtf8("shan") },      // sha
    { QString::fromUtf8("莎") , QString::fromUtf8("sha") },       // suo
    { QString::fromUtf8("挲") , QString::fromUtf8("sha") },       // suo
    { QString::fromUtf8("噎") , QString::fromUtf8("ye") },        // sha
    { QString::fromUtf8("奢") , QString::fromUtf8("she") },       // sha
    { QString::fromUtf8("啑") , QString::fromUtf8("ti") },        // sha
    { QString::fromUtf8("厦") , QString::fromUtf8("xia") },       // sha
    { QString::fromUtf8("酾") , QString::fromUtf8("shi") },       // shai
    { QString::fromUtf8("栅") , QString::fromUtf8("shan") },      // zha
    { QString::fromUtf8("剡") , QString::fromUtf8("yan") },       // shan
    { QString::fromUtf8("汤") , QString::fromUtf8("tang") },      // shang
    { QString::fromUtf8("蛸") , QString::fromUtf8("xiao") },      // shao
    { QString::fromUtf8("苕") , QString::fromUtf8("shao") },      // tiao
    { QString::fromUtf8("畬") , QString::fromUtf8("she") },       // yu
    { QString::fromUtf8("折") , QString::fromUtf8("zhe") },       // she
    { QString::fromUtf8("蛇") , QString::fromUtf8("she") },       // yi
    { QString::fromUtf8("叶") , QString::fromUtf8("ye") },        // xie she
    { QString::fromUtf8("拾") , QString::fromUtf8("shi") },       // she
    { QString::fromUtf8("歙") , QString::fromUtf8("she") },       // xi
    { QString::fromUtf8("谁") , QString::fromUtf8("shui") },      // shei
    { QString::fromUtf8("籡") , QString::fromUtf8("shi") },       // shen 日
    { QString::fromUtf8("莘") , QString::fromUtf8("shen") },      // xin
    { QString::fromUtf8("什") , QString::fromUtf8("shen") },      // shi
    { QString::fromUtf8("椹") , QString::fromUtf8("shen") },      // zhen
    { QString::fromUtf8("狌") , QString::fromUtf8("sheng") },     // xing
    { QString::fromUtf8("省") , QString::fromUtf8("sheng") },     // xing
    { QString::fromUtf8("嘘") , QString::fromUtf8("xu") },        // shi
    { QString::fromUtf8("识") , QString::fromUtf8("shi") },       // zhi
    { QString::fromUtf8("食") , QString::fromUtf8("shi") },       // si yi
    { QString::fromUtf8("氏") , QString::fromUtf8("shi") },       // zhi
    { QString::fromUtf8("似") , QString::fromUtf8("si") },        // shi
    { QString::fromUtf8("峙") , QString::fromUtf8("zhi") },       // shi
    { QString::fromUtf8("螫") , QString::fromUtf8("shi") },       // zhe
    { QString::fromUtf8("熟") , QString::fromUtf8("shu") },       // shou
    { QString::fromUtf8("荼") , QString::fromUtf8("tu") },        // shu
    { QString::fromUtf8("属") , QString::fromUtf8("shu") },       // zhu
    { QString::fromUtf8("术") , QString::fromUtf8("shu") },       // zhu
    { QString::fromUtf8("庶") , QString::fromUtf8("shu") },       // zhu
    { QString::fromUtf8("说") , QString::fromUtf8("shuo") },      // tuo yue shui
    { QString::fromUtf8("忪") , QString::fromUtf8("song") },      // zhong
    { QString::fromUtf8("宿") , QString::fromUtf8("su") },        // xiu
    { QString::fromUtf8("缩") , QString::fromUtf8("suo") },       // su
    { QString::fromUtf8("燵") , QString::fromUtf8("tui") },       // ta 日
    { QString::fromUtf8("拓") , QString::fromUtf8("tuo") },       // ta
    { QString::fromUtf8("潭") , QString::fromUtf8("tan") },       // xun
    { QString::fromUtf8("陶") , QString::fromUtf8("tao") },       // yao
    { QString::fromUtf8("罀") , QString::fromUtf8("yo") },        // zhao te 日
    { QString::fromUtf8("忒") , QString::fromUtf8("tui") },       // te
    { QString::fromUtf8("擿") , QString::fromUtf8("ti") },        // zhi
    { QString::fromUtf8("荑") , QString::fromUtf8("yi") },        // ti
    { QString::fromUtf8("裼") , QString::fromUtf8("xi") },        // ti
    { QString::fromUtf8("僮") , QString::fromUtf8("tong") },      // zhuang
    { QString::fromUtf8("侻") , QString::fromUtf8("tuo") },       // tui
    { QString::fromUtf8("褪") , QString::fromUtf8("tui") },       // tun
    { QString::fromUtf8("屯") , QString::fromUtf8("tun") },       // zhun
    { QString::fromUtf8("崴") , QString::fromUtf8("wei") },       // wai
    { QString::fromUtf8("菀") , QString::fromUtf8("wan") },       // yu
    { QString::fromUtf8("尢") , QString::fromUtf8("you") },       // wang
    { QString::fromUtf8("亡") , QString::fromUtf8("wang") },      // wu
    { QString::fromUtf8("圩") , QString::fromUtf8("wei") },       // xu
    { QString::fromUtf8("尾") , QString::fromUtf8("wei") },       // yi
    { QString::fromUtf8("尉") , QString::fromUtf8("wei") },       // yu
    { QString::fromUtf8("遗") , QString::fromUtf8("yi") },        // wei
    { QString::fromUtf8("蔚") , QString::fromUtf8("wei") },       // yu
    { QString::fromUtf8("挝") , QString::fromUtf8("wo") },        // zhua
    { QString::fromUtf8("涴") , QString::fromUtf8("wan") },       // yuan wo
    { QString::fromUtf8("於") , QString::fromUtf8("yu") },        // wu
    { QString::fromUtf8("铻") , QString::fromUtf8("wu") },        // yu
    { QString::fromUtf8("夞") , QString::fromUtf8("yi") },        // xi 韩
    { QString::fromUtf8("硳") , QString::fromUtf8("ze") },        // xi 韩
    { QString::fromUtf8("褶") , QString::fromUtf8("zhe") },       // xi
    { QString::fromUtf8("洗") , QString::fromUtf8("xi") },        // xian
    { QString::fromUtf8("铣") , QString::fromUtf8("xi") },        // xian
    { QString::fromUtf8("县") , QString::fromUtf8("xian") },      // xuan
    { QString::fromUtf8("削") , QString::fromUtf8("xiao") },      // xue
    { QString::fromUtf8("邪") , QString::fromUtf8("xie") },        // ye
    { QString::fromUtf8("荥") , QString::fromUtf8("ying") },       // xing
    { QString::fromUtf8("褎") , QString::fromUtf8("you") },        // xiu
    { QString::fromUtf8("吁") , QString::fromUtf8("yu") },         // xu
    { QString::fromUtf8("芧") , QString::fromUtf8("zhu") },        // xu
    { QString::fromUtf8("窨") , QString::fromUtf8("yin") },        // xun
    { QString::fromUtf8("厌") , QString::fromUtf8("yan") },        // ya
    { QString::fromUtf8("咽") , QString::fromUtf8("yan") },        // ye
    { QString::fromUtf8("殷") , QString::fromUtf8("yin") },        // yan
    { QString::fromUtf8("芫") , QString::fromUtf8("yuan") },       // yan
    { QString::fromUtf8("约") , QString::fromUtf8("yue") },        // yao
    { QString::fromUtf8("繇") , QString::fromUtf8("yao") },        // you zhou
    { QString::fromUtf8("钥") , QString::fromUtf8("yao") },        // yue
    { QString::fromUtf8("拽") , QString::fromUtf8("zhuai") },      // ye
    { QString::fromUtf8("育") , QString::fromUtf8("yu") },         // yo
    { QString::fromUtf8("喁") , QString::fromUtf8("yong") },       // yu
    { QString::fromUtf8("柚") , QString::fromUtf8("you") },        // zhu
    { QString::fromUtf8("粥") , QString::fromUtf8("zhou") },       // yu
    { QString::fromUtf8("熨") , QString::fromUtf8("yun") },        // yu
    { QString::fromUtf8("员") , QString::fromUtf8("yuan") },       // yun
    { QString::fromUtf8("扎") , QString::fromUtf8("zha") },        // za
    { QString::fromUtf8("拶") , QString::fromUtf8("zan") },        // za
    { QString::fromUtf8("囋") , QString::fromUtf8("za") },         // zan
    { QString::fromUtf8("咋") , QString::fromUtf8("za") },         // ze zha
    { QString::fromUtf8("甾") , QString::fromUtf8("zai") },        // zi
    { QString::fromUtf8("仔") , QString::fromUtf8("zi") },         // zai
    { QString::fromUtf8("奘") , QString::fromUtf8("zang") },       // zhuang
    { QString::fromUtf8("责") , QString::fromUtf8("ze") },         // zhai
    { QString::fromUtf8("择") , QString::fromUtf8("ze") },         // zhai
    { QString::fromUtf8("综") , QString::fromUtf8("zong") },       // zeng
    { QString::fromUtf8("着") , QString::fromUtf8("zhuo") },       // zhao
    { QString::fromUtf8("啁") , QString::fromUtf8("zhou") },       // zhao
    { QString::fromUtf8("爪") , QString::fromUtf8("zhua") },       // zhao
    { QString::fromUtf8("这") , QString::fromUtf8("zhe") },        // zhei
    { QString::fromUtf8("吱") , QString::fromUtf8("zhi") },        // zi
    { QString::fromUtf8("祝") , QString::fromUtf8("zhu") },        // zhou
    { QString::fromUtf8("躅") , QString::fromUtf8("zhuo") },       // zhu
    { QString::fromUtf8("转") , QString::fromUtf8("zhuan") },      // zhuai
    { QString::fromUtf8("赚") , QString::fromUtf8("zhuan") },      // zuan
    { QString::fromUtf8("篹") , QString::fromUtf8("zuan") },       // zhuan
    { QString::fromUtf8("觜") , QString::fromUtf8("zui") },        // zi

    { QString::fromUtf8("鲅"), QString::fromUtf8("ba") },           // bo
    { QString::fromUtf8(""), QString::fromUtf8("pa") },           // ba
    { QString::fromUtf8("扳"), QString::fromUtf8("ban") },          // pan
    { QString::fromUtf8("般"), QString::fromUtf8("ban") },          // bo pan
    { QString::fromUtf8("剥"), QString::fromUtf8("bao") },          // bo
    { QString::fromUtf8("趵"), QString::fromUtf8("bao") },          // bo
    { QString::fromUtf8("蕃"), QString::fromUtf8("fan") },          // bo
    { QString::fromUtf8("嗀"), QString::fromUtf8("gu") },           // hu
    { QString::fromUtf8("桁"), QString::fromUtf8("heng") },         // hang
    { QString::fromUtf8("珩"), QString::fromUtf8("heng") },         // hang
    { QString::fromUtf8("牙"), QString::fromUtf8("ya") },           // he
    { QString::fromUtf8(""), QString::fromUtf8("song") },         // yu
    { QString::fromUtf8("嘬"), QString::fromUtf8("zuo") },          // chuai
    { QString::fromUtf8("撮"), QString::fromUtf8("cuo") },          // zuo
    { QString::fromUtf8("笮"), QString::fromUtf8("zuo") },          // ze
    { QString::fromUtf8("琢"), QString::fromUtf8("zhuo") },         // zuo
};


/*
0. 汉字拼音表，来源于 http://xh.5156edu.com/pinyi.html （需要自己获取数据）
1. 在'bo'添加'卜' ; 'de'添加'的' ; 'wan'添加'涴' ; 'ta'添加'他'
  （获取到的数据有缺失，是网站的问题，这里直接补全）
2. ü 用 v 代替
*/
hanziTableS hanziTables[g_length_hanziTables] =
{
{ QString::fromUtf8("a"), QString::fromUtf8("a"), QString::fromUtf8("吖阿呵啊腌锕錒嗄厑") },
{ QString::fromUtf8("a"), QString::fromUtf8("ao"), QString::fromUtf8("凹柪梎軪熬爊敖厫隞蔜遨廒嗷嗸獓嶅滶獒摮璈磝螯聱翱翶謷謸鳌翺嚣鏖鷔鰲鼇艹夭芺抝拗袄镺媪媼襖岙岰垇坳傲奡奥奧骜嫯慠懊墺澳嶴擙鏊驁澚鱜") },
{ QString::fromUtf8("a"), QString::fromUtf8("ang"), QString::fromUtf8("肮骯卬仰岇昂昻枊盎醠") },
{ QString::fromUtf8("a"), QString::fromUtf8("ai"), QString::fromUtf8("哎哀诶唉娭挨埃溾嗳锿鎄捱皑啀凒溰敱敳嘊皚癌騃佁毐昹欸娾矮蔼躷噯濭藹譪霭靄艾阨伌爱砹硋隘嗌嫒塧碍愛叆暧瑷僾噫壒懓嬡薆鴱餲璦曖懝皧瞹馤礙譺鑀靉閊魞﨟鱛鱫") },
{ QString::fromUtf8("a"), QString::fromUtf8("an"), QString::fromUtf8("厂广安侒峖桉氨庵偣谙菴萻葊媕腤痷鹌誝蓭鞍鞌諳盦馣鮟盫鵪鶕韽玵啽雸儑垵俺唵埯铵晻揞罯銨屵犴岸按洝荌胺豻案婩隌堓暗貋錌闇黯") },

{ QString::fromUtf8("b"), QString::fromUtf8("bai"), QString::fromUtf8("挀掰白犤百伯佰陌柏栢捭絔摆擺襬庍呗拝败拜敗猈稗粺薭贁韛瓸竡粨兡") },
{ QString::fromUtf8("b"), QString::fromUtf8("ba"), QString::fromUtf8("丷八仈巴叭朳玐吧岜扷芭夿疤柭釟蚆粑笆捌哵羓豝鲃叐茇妭拔炦胈癹菝軷詙跋颰魃鼥把钯鈀靶伯弝坝爸杷垻罢耙跁鲅罷鮁覇矲霸壩灞欛抜鎺鯐") },
{ QString::fromUtf8("b"), QString::fromUtf8("ban"), QString::fromUtf8("扳肦攽班般颁斑斒搬頒鳻瘢螌褩癍辬阪岅坂板版昄瓪钣粄舨鈑蝂魬闆办半伴扮拌姅绊坢怑柈秚絆湴鉡靽辦瓣螁") },
{ QString::fromUtf8("b"), QString::fromUtf8("bang"), QString::fromUtf8("邦帮垹梆捠浜邫幇幚縍幫鞤绑綁榜牓膀玤挷旁蚌棒棓傍谤蒡搒塝稖蜯镑磅艕謗鎊") },
{ QString::fromUtf8("b"), QString::fromUtf8("bao"), QString::fromUtf8("勹包苞孢炮枹胞剥剝笣龅煲裦褒蕔襃闁齙窇雹薄宝饱怉鸨保宲珤葆堡堢媬寚飽飹褓駂鳵鴇緥賲寳寶靌勽刨报抱铇豹趵蚫菢袌報鉋鲍骲髱暴虣鮑曓儤瀑爆犦曝忁鑤佨藵") },
{ QString::fromUtf8("b"), QString::fromUtf8("ben"), QString::fromUtf8("奔泍贲犇锛錛本苯奙畚翉楍夯坌倴逩桳笨捹渀撪") },
{ QString::fromUtf8("b"), QString::fromUtf8("bei"), QString::fromUtf8("陂卑杯柸背盃桮椑揹悲鹎碑藣鵯北鉳贝狈孛邶貝牬昁苝备郥钡被倍俻狽悖梖偝偹鄁珼琲惫軰備僃棓辈焙蓓蛽碚愂禙犕褙誖鞁骳鋇輩糒憊鞴鐾唄") },
{ QString::fromUtf8("b"), QString::fromUtf8("beng"), QString::fromUtf8("伻祊奟崩绷閍絣痭嵭嘣綳繃甭甮埄埲菶琫琣鞛迸泵蚌逬揼塴甏镚蹦鏰") },
{ QString::fromUtf8("b"), QString::fromUtf8("bi"), QString::fromUtf8("皀屄偪逼毴楅榌豍鵖螕鲾鎞鰏荸鼻匕比朼夶吡妣沘佊疕彼毞柀秕笔粃舭俾啚筆鄙箄聛貏币必毕闭庇佖诐芘邲迊坒怭怶苾妼咇泌畀畁哔荜陛贲毖柲珌疪秘铋毙狴畢袐粊笓閉閇婢庳萆萞梐敝赑堛愊愎皕禆弼弻湢詖筚賁貱蜌裨辟跸閟飶鉍滗滭嗶彃蓖蓽腷睥睤痹痺煏熚碧蔽弊鄪獙幣綼箅箆馝髲駜襅幤潷罼獘壁廦嬖避薜篦篳縪觱鮅蹕髀濞斃臂奰鏎饆鄨璧繴襣襞鞸魓韠躄躃驆鷝鐴贔朇鷩鼊萙蛯嬶") },
{ QString::fromUtf8("b"), QString::fromUtf8("bian"), QString::fromUtf8("边炞砭笾萹编猵煸牑甂箯蝙糄編鞕鍽鳊獱邉邊鞭鯿鯾籩贬扁窆匾貶惼褊稨碥鴘藊卞弁抃汳汴苄釆忭玣变変昪便覍徧遍缏揙閞辡諚緶艑辨辩辧辫辮辯變峅") },
{ QString::fromUtf8("b"), QString::fromUtf8("biao"), QString::fromUtf8("杓标飑骉髟彪淲猋脿颮滮摽骠蔈幖墂麃標熛膘镖瘭磦飙飚儦颷謤藨瀌爂鏢贆臕穮镳飆飇飈飊鑣驫嫑表婊裱諘錶褾檦俵鳔鋲") },
{ QString::fromUtf8("b"), QString::fromUtf8("bie"), QString::fromUtf8("憋瘪蟞鳖癟鱉鼈虌龞别別莂蛂徶襒蹩彆") },
{ QString::fromUtf8("b"), QString::fromUtf8("bin"), QString::fromUtf8("邠玢宾彬梹椕傧斌滨缤賓賔豩槟瑸镔儐濒頻豳濱濵虨璸檳瀕霦繽蠙鑌顮摈殡膑髩鬂擯殯臏髌鬓髕鬢") },
{ QString::fromUtf8("b"), QString::fromUtf8("bing"), QString::fromUtf8("冫仌氷并冰兵屏栟掤槟丙邴陃苪怲抦秉昞昺炳柄饼绠眪蛃偋寎棅鈵禀稟鉼餅餠鞞幷並併庰倂栤竝病窉傡摒誁鮩靐垪鞆") },
{ QString::fromUtf8("b"), QString::fromUtf8("bo"), QString::fromUtf8("卜癶癷波拨玻饽钵盋砵哱剥般趵缽紴袰菠啵溊碆鉢鲅僠蕃嶓播撥餑礡蹳驋鱍仢伯驳孛肑瓝泊狛帛郣勃侼胉柏袯瓟秡钹铂浡挬亳萡淿脖袹舶鹁渤葧博猼馎愽搏鈸鉑鲌魄馛駁艊箔牔煿膊僰镈踣鋍馞駮鮊薄謈襏簙餺鵓鎛嚗懪髆髉糪襮欂礴鑮跛簸孹檗擘譒蘗畓蔔") },
{ QString::fromUtf8("b"), QString::fromUtf8("bu"), QString::fromUtf8("逋庯峬钸晡鈽誧餔錻鳪轐醭卜卟补哺捕堡補鵏鸔不布吥佈步歨歩怖咘钚柨悑部勏捗埔埗荹埠瓿鈈蔀廍踄郶餢篰簿巭") },

{ QString::fromUtf8("c"), QString::fromUtf8("ca"), QString::fromUtf8("拆擦攃嚓礤礸遪乲") },
{ QString::fromUtf8("c"), QString::fromUtf8("cai"), QString::fromUtf8("偲猜才财材財裁纔毝采倸啋寀婇彩採埰棌睬跴綵踩宷菜蔡縩") },
{ QString::fromUtf8("c"), QString::fromUtf8("can"), QString::fromUtf8("参參叄骖飡湌叅喰傪嬠餐驂残蚕惭殘慚蝅慙蠺蠶惨朁慘憯穇篸黪黲灿掺孱粲薒澯燦璨謲儏爘") },
{ QString::fromUtf8("c"), QString::fromUtf8("cang"), QString::fromUtf8("仓仺伧苍沧鸧舱倉傖凔滄蒼獊嵢螥艙鶬臧藏鑶賶濸") },
{ QString::fromUtf8("c"), QString::fromUtf8("cao"), QString::fromUtf8("撡操糙曺曹蓸嘈嶆漕慒槽褿螬艚鏪艸草愺懆騲肏鄵襙鼜") },
{ QString::fromUtf8("c"), QString::fromUtf8("ce"), QString::fromUtf8("夨册冊侧厕荝拺测恻敇粣笧萗厠側萴策測廁惻筴筞蓛箣憡簎猠硛") },
{ QString::fromUtf8("c"), QString::fromUtf8("cen"), QString::fromUtf8("参嵾岑涔埁笒梣") },
{ QString::fromUtf8("c"), QString::fromUtf8("ceng"), QString::fromUtf8("噌层曾層嶒竲驓蹭") },
{ QString::fromUtf8("c"), QString::fromUtf8("cha"), QString::fromUtf8("叉扱扠杈臿差挿偛馇插揷嗏喳锸碴銟艖疀嚓鍤餷茬茶垞查査秅猹嵖搽靫詧楂槎察檫衩蹅镲鑔奼汊岔刹侘诧剎姹咤紁詫") },
{ QString::fromUtf8("c"), QString::fromUtf8("chai"), QString::fromUtf8("芆肞钗拆差釵犲侪柴豺祡喍儕茝虿訍袃瘥蠆囆") },
{ QString::fromUtf8("c"), QString::fromUtf8("chan"), QString::fromUtf8("辿觇梴掺搀覘裧摻鋓幨襜攙苂单谗婵馋湹孱棎禅煘缠蝉獑僝誗鋋儃廛嬋潺潹緾澶磛鄽螹毚蟬瀍酁儳蟾劖壥嚵瀺巉欃纏纒躔镵艬讒鑱饞产刬旵丳斺浐剗谄阐铲產産蒇剷摌滻蕆幝諂閳骣燀簅冁醦繟鏟譂闡囅灛讇忏硟摲懴颤懺羼韂顫") },
{ QString::fromUtf8("c"), QString::fromUtf8("chang"), QString::fromUtf8("伥昌倡倀菖阊娼猖淐琩锠裮錩閶鲳鯧鼚长仧仩场兏肠苌镸長尝倘偿萇徜常瓺場腸甞裳塲嫦嘗膓瑺嚐償鲿鱨厂昶惝敞厰僘廠氅鋹怅玚畅鬯唱悵焻暢畼誯韔椙蟐") },
{ QString::fromUtf8("c"), QString::fromUtf8("che"), QString::fromUtf8("车伡車俥砗莗唓硨蛼尺扯偖撦屮彻迠坼烢聅硩掣頙撤澈徹瞮勶爡") },
{ QString::fromUtf8("c"), QString::fromUtf8("chao"), QString::fromUtf8("吵抄弨怊欩钞绰訬超鈔焯剿窼牊晁巢巣朝鼌鄛漅潮樔嘲窲罺鼂轈謿炒眧焣煼麨巐仦仯耖觘") },
{ QString::fromUtf8("c"), QString::fromUtf8("chen"), QString::fromUtf8("抻郴捵棽琛嗔綝賝諃瞋謓尘臣辰忱沉陈迧茞莀莐宸陳栕桭谌訦軙敐晨鈂愖煁蔯樄塵敶瘎霃諶螴薼麎曟鷐趻硶碜墋夦踸磣鍖贂衬疢称龀趁趂榇齓齔儭谶嚫櫬襯讖烥") },
{ QString::fromUtf8("c"), QString::fromUtf8("cheng"), QString::fromUtf8("阷泟爯柽棦称秤浾琤偁铛碀蛏晿牚赪靗憆稱摚撑撐噌樘緽頳赬瞠橕檉竀罉蟶穪鏿鐣饓丞成朾呈郕诚枨承荿宬娍峸洆城乗乘埕挰珹珵窚掁脭铖盛程揨堘裎絾筬惩椉棖誠塍塖溗酲鋮畻澄澂憕橙檙瀓懲騬侱徎逞骋悜庱睈騁鯎") },
{ QString::fromUtf8("c"), QString::fromUtf8("chi"), QString::fromUtf8("吃妛彨哧胵鸱蚩粚笞眵瓻喫訵絺嗤媸摛痴瞝殦噄誺螭鴟鵄魑癡齝攡彲黐弛驰池迟迡茌坻竾荎持匙蚳赿貾遅筂遟馳箎墀漦遲踟篪鍉謘尺叺伬呎肔齿侈卶垑胣蚇耻恥豉袳歯欼袲裭鉹齒褫彳叱斥杘赤饬灻抶侙勅恜炽勑翅翄敕烾湁啻飭雴傺腟痸鉓銐翤瘈遫憏瘛慗翨熾趩懘鶒鷘麶") },
{ QString::fromUtf8("c"), QString::fromUtf8("chong"), QString::fromUtf8("冲充沖忡茺涌浺珫翀舂嘃摏憧衝憃罿艟蹖虫种重隀崇崈漴褈蝩緟蟲爞宠埫寵铳揰銃") },
{ QString::fromUtf8("c"), QString::fromUtf8("chou"), QString::fromUtf8("抽紬搊篘瘳犨犫仇俦帱栦菗绸惆絒椆畴愁皗稠筹詶酬酧裯踌綢雔儔薵懤幬嬦檮燽雠疇籌醻躊讎讐雦丑丒吜杻杽偢瞅醜矁魗臭臰遚殠鮘") },
{ QString::fromUtf8("c"), QString::fromUtf8("chua"), QString::fromUtf8("欻") },
{ QString::fromUtf8("c"), QString::fromUtf8("chu"), QString::fromUtf8("出岀初摴樗貙齣刍处助除芻厨蒢豠滁锄雏鉏趎蒭媰蜍耡犓鋤篨廚橱櫉幮躇雛蹰櫥鶵躕杵础處椘楮储禇楚褚濋儲檚礎齭齼亍処竌豖绌怵泏竐欪畜俶敊埱絀珿傗鄐滀搐触閦諔儊嘼憷斶黜臅歜觸矗榋璴蟵") },
{ QString::fromUtf8("c"), QString::fromUtf8("chuan"), QString::fromUtf8("巛川氚穿瑏传舡舩船剶遄椽傳暷篅輲舛荈喘歂僢踳汌玔串钏釧猭賗鶨") },
{ QString::fromUtf8("c"), QString::fromUtf8("chuang"), QString::fromUtf8("刅创疮窓窗牎摐牕瘡窻床牀幢噇闯傸磢闖怆刱剏剙創愴") },
{ QString::fromUtf8("c"), QString::fromUtf8("chuai"), QString::fromUtf8("揣搋膗啜嘬膪踹") },
{ QString::fromUtf8("c"), QString::fromUtf8("chui"), QString::fromUtf8("吹炊龡垂埀陲倕桘菙捶搥棰椎圌腄锤槌箠錘鎚顀") },
{ QString::fromUtf8("c"), QString::fromUtf8("chun"), QString::fromUtf8("旾杶春萅媋堾椿槆暙瑃蝽箺輴橁櫄鶞鰆纯陙莼唇浱純脣淳湻犉鹑滣蒓蓴漘醇醕錞鶉鯙偆萶惷睶賰蠢") },
{ QString::fromUtf8("c"), QString::fromUtf8("cong"), QString::fromUtf8("匆苁囱囪忩茐枞怱悤棇葱楤蔥蓯骢漗聡聪聦熜潨樅樬暰瑽璁瞛蟌聰篵鍯繱鏦鏓騘驄从丛徔従從徖婃淙悰孮琮潀漎賨賩誴錝樷藂叢灇欉爜愡憁謥") },
{ QString::fromUtf8("c"), QString::fromUtf8("ci"), QString::fromUtf8("刺差呲玼疵趀偨跐骴縒髊蠀齹词珁茈茨垐柌祠兹瓷辝詞辞慈甆鹚磁雌餈飺糍辤薋嬨濨鴜礠辭鷀鶿此佌泚皉鮆朿次伺佽刾庛茦栨莿赐蛓絘賜螆閊") },
{ QString::fromUtf8("c"), QString::fromUtf8("chuo"), QString::fromUtf8("逴趠踔戳繛辶辵哾娖娕婼婥啜涰绰惙辍酫踀綽輟龊擉餟磭歠嚽齪鑡") },
{ QString::fromUtf8("c"), QString::fromUtf8("cu"), QString::fromUtf8("怚粗觕麁麄橻麤徂殂卒促脨猝酢媨瘄蔟趗誎醋憱趣踧噈瘯踿縬簇鼀蹙蹴蹵顣") },
{ QString::fromUtf8("c"), QString::fromUtf8("cou"), QString::fromUtf8("凑湊辏楱腠輳") },
{ QString::fromUtf8("c"), QString::fromUtf8("cun"), QString::fromUtf8("邨村皴踆澊墫竴膥存侟拵蹲刌忖寸籿") },
{ QString::fromUtf8("c"), QString::fromUtf8("cuan"), QString::fromUtf8("汆撺镩蹿攛躥鑹菆攒櫕巑欑穳窜殩熶篡簒竄爨") },
{ QString::fromUtf8("c"), QString::fromUtf8("cui"), QString::fromUtf8("崔脺嵟凗催缞墔慛榱獕摧槯磪縗鏙漼璀趡皠伜忰疩脆脃倅粋紣翆萃啐啛淬悴焠毳琗瘁翠綷粹膵膬竁襊濢顇臎") },
{ QString::fromUtf8("c"), QString::fromUtf8("cuo"), QString::fromUtf8("搓遳瑳磋撮醝蹉鎈虘嵯嵳睉痤蒫矬蔖瘥鹾酂鹺脞剉剒莝莡厝挫夎措逪锉错蓌銼錯") },

{ QString::fromUtf8("d"), QString::fromUtf8("da"), QString::fromUtf8("咑哒耷笚答嗒搭褡撘墶噠鎝鎉打达迏迖迚怛呾妲沓荙荅炟羍畗畣惮匒剳逹笪詚達跶靼瘩薘鞑蟽鐽韃龖龘大亣汏垯眔畓繨躂鶎") },
{ QString::fromUtf8("d"), QString::fromUtf8("dang"), QString::fromUtf8("当珰裆铛筜當儅噹澢璫襠蟷艡簹鐺闣挡党谠擋譡黨攩灙欓讜氹凼圵宕砀荡垱档菪婸逿愓瓽雼嵣潒碭瞊趤蕩壋檔璗盪礑簜蘯") },
{ QString::fromUtf8("d"), QString::fromUtf8("dan"), QString::fromUtf8("丹妉担单単眈砃耽耼郸聃躭酖單殚媅瘅匰鄲頕褝箪勯儋殫擔甔襌簞聸刐伔抌瓭玬胆衴紞疸掸赕亶馾撣撢賧黕膽黮黵旦石帎但诞狚泹沊柦唌疍蛋弹惮啖啗淡萏啿弾氮蜑腅觛誕窞蓞僤噉髧嘾彈憚憺禫澹駳鴠餤癉癚繵贉嚪饏霮") },
{ QString::fromUtf8("d"), QString::fromUtf8("dai"), QString::fromUtf8("呆呔待獃懛歹歺逮傣大代轪甙侢迨帒骀岱绐垈贷带玳殆柋怠軑貣帯帶埭蚮紿軚袋軩貸瑇跢廗叇曃蝳緿鴏黛艜戴簤瀻霴黱襶靆") },
{ QString::fromUtf8("d"), QString::fromUtf8("de"), QString::fromUtf8("的嘚恴得淂棏惪悳锝徳德鍀地底") },
{ QString::fromUtf8("d"), QString::fromUtf8("dao"), QString::fromUtf8("刀刂叨忉朷氘舠釖鱽魛螩捯导岛陦島捣倒祷禂搗隝嶋嶌導隯嶹擣壔蹈禱辺到帱悼焘菿盗盜道翢稲稻噵艔衜衟檤燾翿軇瓙纛乭﨩椡槝") },
{ QString::fromUtf8("d"), QString::fromUtf8("dei"), QString::fromUtf8("嘚得") },
{ QString::fromUtf8("d"), QString::fromUtf8("deng"), QString::fromUtf8("灯登豋僜噔嬁燈璒竳簦蹬等戥邓鄧隥凳嶝澄墱镫瞪磴櫈覴鐙艠") },
{ QString::fromUtf8("d"), QString::fromUtf8("den"), QString::fromUtf8("扥扽") },
{ QString::fromUtf8("d"), QString::fromUtf8("dia"), QString::fromUtf8("嗲") },
{ QString::fromUtf8("d"), QString::fromUtf8("di"), QString::fromUtf8("氐仾低彽奃岻秪袛隄羝埞啲堤提趆滴嘀镝磾鞮廸狄苖迪的籴唙荻涤敌梑啇笛靮觌滌髢馰頔翟嫡蔋蔐樀敵藡嚁豴蹢鏑覿糴鸐厎邸阺诋坘坻弤底呧抵拞柢牴砥掋菧軧觝詆骶聜鯳地坔杕旳弟玓苐枤怟埅帝俤娣递逓埊焍谛梊祶菂偙眱珶第釱睇揥媂蒂棣缔楴禘遞僀腣鉪碲蝃摕遰蔕墬墑甋蝭締慸諦踶嶳螮嚸") },
{ QString::fromUtf8("d"), QString::fromUtf8("die"), QString::fromUtf8("爹跌褺苵迭咥峌挕绖垤恎昳胅瓞眣耊谍眰戜絰臷镻詄趃跕畳喋耋惵堞揲殜叠楪牃牒跮碟褋蜨嵽蝶艓諜蹀鴩疂螲鲽蹛曡疉鰈疊氎哋幉") },
{ QString::fromUtf8("d"), QString::fromUtf8("diao"), QString::fromUtf8("刁叼汈刟虭凋彫奝弴蛁貂琱鳭碉鮉瞗錭鲷雕簓鼦鯛鵰鸟扚屌弔吊伄钓盄窎訋调铞铫掉釣鈟竨蓧銱銚雿魡調窵瘹鋽藋鑃") },
{ QString::fromUtf8("d"), QString::fromUtf8("dian"), QString::fromUtf8("敁掂厧傎嵮滇槇槙瘨颠蹎顛顚巅癫巓攧巔癲齻典奌点婰敟碘蒧蕇踮點电甸阽佃店坫垫扂玷钿惦婝淀琔奠殿鈿蜔電墊壂澱橂靛磹癜簟驔椣") },
{ QString::fromUtf8("d"), QString::fromUtf8("diu"), QString::fromUtf8("丢丟铥颩銩") },
{ QString::fromUtf8("d"), QString::fromUtf8("ding"), QString::fromUtf8("丁仃帄叮玎钉盯疔町虰耵酊釘靪艼奵顶頂鼎鼑嵿濎薡鐤订饤忊矴定訂飣铤萣啶椗腚锭碇碠錠顁磸") },
{ QString::fromUtf8("d"), QString::fromUtf8("du"), QString::fromUtf8("厾剢都阇督嘟醏闍独毒读渎牍椟犊裻読錖獨凟匵嬻瀆殰犢櫝牘瓄皾騳黩髑韣讀贕豄鑟韇韥黷讟肚笃堵赌琽睹賭覩篤芏杜妒妬度荰秺靯渡镀螙鍍殬斁蠧蠹叾獤") },
{ QString::fromUtf8("d"), QString::fromUtf8("dou"), QString::fromUtf8("吺剅都唗兜兠蔸橷篼唞斗阧抖枓钭陡蚪鈄吋豆郖读荳逗饾浢鬥渎酘毭梪脰痘閗窦鬦餖斣闘竇鬪鬬鬭乧") },
{ QString::fromUtf8("d"), QString::fromUtf8("dong"), QString::fromUtf8("东冬東咚苳岽昸氡鸫倲菄崬崠涷埬娻笗氭蝀鮗鼕鯟鶇董蕫嬞懂箽諌动冻侗垌恫栋胨迵姛峒挏洞凍胴戙動硐湩腖棟働駧霘鶫") },
{ QString::fromUtf8("d"), QString::fromUtf8("dui"), QString::fromUtf8("垖堆塠痽磓鴭鐜鐓頧队对兊兌対兑祋怼陮隊敦碓綐對憞憝錞镦薱濧懟瀩譈譵轛") },
{ QString::fromUtf8("d"), QString::fromUtf8("duan"), QString::fromUtf8("耑偳媏端褍鍴短段断葮缎塅煅瑖腶椴锻碫緞毈簖鍛斷躖籪") },
{ QString::fromUtf8("d"), QString::fromUtf8("duo"), QString::fromUtf8("多夛咄哆剟掇毲敠敪裰嚉夺度铎敚敓剫喥痥奪凙澤踱鐸驮朵朶杕饳剁沲哚挆柮柂垛垜埵缍舵崜惰媠椯躲躱趓跺綞亸鬌軃嚲奲刴陊陏挅尮桗堕跥飿墮憜墯鵽﨣鈬鯲") },
{ QString::fromUtf8("d"), QString::fromUtf8("dun"), QString::fromUtf8("吨惇敦蜳撴墩墪噸撉犜镦礅蹲蹾驐盹趸躉伅庉沌囤炖逇钝盾砘顿鈍遁頓楯遯潡燉踲碷壿") },

{ QString::fromUtf8("e"), QString::fromUtf8("e"), QString::fromUtf8("阿妸妿娿婀屙讹迗吪囮俄峉峨峩涐恶娥莪哦珴訛鈋皒锇睋鹅蛾誐磀噁鋨頟魤额額鵝鵞譌厄阸苊呃扼轭枙垩砨饿胺阏鄂谔萼遌遏崿愕頋腭锷鹗頞餩噩鳄騀戹岋呝砐砈咹咢姶匎蚅軛硆悪卾偔堊堨堮湂惡軶豟鈪琧廅搤搹僫蝁蕚遻餓颚閼擜諤覨鍔顎歞礘櫮鶚鰐鰪齃讍齶鑩鱷仒厑蛯旕鵈襨欕") },
{ QString::fromUtf8("e"), QString::fromUtf8("en"), QString::fromUtf8("奀恩蒽煾峎摁") },
{ QString::fromUtf8("e"), QString::fromUtf8("ei"), QString::fromUtf8("欸誒") },
{ QString::fromUtf8("e"), QString::fromUtf8("eng"), QString::fromUtf8("鞥椧") },
{ QString::fromUtf8("e"), QString::fromUtf8("er"), QString::fromUtf8("乻儿而児陑侕荋耏峏洏栭胹唲鸸袻聏輀鲕髵隭鴯鮞臑轜尔尒尓耳迩饵洱毦栮珥铒鉺餌爾駬薾邇二弍弐佴刵咡贰貮貳衈誀髶樲粫趰") },

{ QString::fromUtf8("f"), QString::fromUtf8("fa"), QString::fromUtf8("发冹沷発發酦彂乏伐姂坺垡茷阀疺罚栰笩筏傠瞂罰閥罸墢橃藅佱法峜砝灋珐琺髪髮蕟浌鍅") },
{ QString::fromUtf8("f"), QString::fromUtf8("fang"), QString::fromUtf8("匚方邡芳汸坊枋牥钫蚄淓趽鈁錺鴋防妨房肪鲂魴访仿彷纺昉昘瓬眆紡舫旊倣訪髣鶭放堏") },
{ QString::fromUtf8("f"), QString::fromUtf8("fan"), QString::fromUtf8("帆忛畨番勫蕃幡噃嬏憣旙旛繙翻藩轓颿飜籓鱕凡凣凢匥杋柉钒矾籵舤舧袢烦笲釩棥煩緐墦樊璠膰薠燔襎繁羳蹯鐇礬蘩瀿蠜鷭反払仮返橎犯氾汎奿饭泛贩范畈軓訉販笵盕梵軬飯飰滼嬎範輽瀪") },
{ QString::fromUtf8("f"), QString::fromUtf8("feng"), QString::fromUtf8("丰风凨仹凬妦沣凮枫盽疯砜封風峰峯偑桻烽堼葑崶渢猦锋犎楓蜂碸瘋篈僼鄷鋒檒豐鎽鏠酆蘴寷灃蠭靊飌麷冯夆沨浲逢溄堸馮艂漨缝摓綘縫讽覂唪諷凤奉俸湗焨煈赗鳯鳳鴌賵琒") },
{ QString::fromUtf8("f"), QString::fromUtf8("fen"), QString::fromUtf8("分芬帉吩纷氛昐玢衯紛翂躮訜酚棻梤鈖雰馚餴朆饙妢岎汾坟炃朌枌羒蚠蚡焚棼蒶隫魵蕡幩獖墳濆燌燓橨豮鼢羵鼖豶轒鐼馩黂粉黺份弅坋忿奋秎偾粪愤僨憤膹奮糞鲼瀵鱝竕瞓") },
{ QString::fromUtf8("f"), QString::fromUtf8("fei"), QString::fromUtf8("飞妃非飛菲啡婓婔渄绯扉猆暃靟裶蜚緋鲱霏馡餥騑騛鯡飝肥淝腓蜰朏胐匪诽奜悱棐斐翡榧蕜誹篚发芾吠狒沸怫杮废肺胇昲费厞剕陫俷疿萉屝廃費痱镄廢曊癈鼣蟦濷櫠鐨靅") },
{ QString::fromUtf8("f"), QString::fromUtf8("fou"), QString::fromUtf8("紑缶否妚缻缹雬殕鴀") },
{ QString::fromUtf8("f"), QString::fromUtf8("fo"), QString::fromUtf8("仏佛坲梻") },
{ QString::fromUtf8("f"), QString::fromUtf8("fu"), QString::fromUtf8("夫伕邞孚呋妋姇玞肤胕砆衭怤柎荂荴尃娐旉麸趺紨跗鈇稃綒筟鄜孵粰膚鳺麩敷麬糐麱懯乀巿弗凫伏甶佛刜芾芙芣扶拂泭岪绂绋咈帗苻茀枎怫服韨氟祓玸枹柫炥畐畉罘茯郛鳬俘垘洑浮哹莩蚨袚栿砩翇桴烰琈袱虙艴紱紼符笰菔匐涪幅葍絥罦棴鳧艀鉘鉜颫辐福蜉綍箙稪榑韍豧髴鴔蝠幞澓輻踾鮄諨黻襆癁鮲襥鵩鶝阝父甫抚拊弣府斧郙俛俌俯釜釡捬脯辅腑盙焤蜅滏腐輔頫嘸撫鬴簠鯱黼讣付妇负附彿咐驸坿竎阜訃負赴复祔峊袝蚥蚹副婦婏冨偩傅復萯媍富赋蛗秿覄詂鲋腹椱缚赙複褔蝮蝜緮蕧賦駙鮒輹嬔縛賻鳆鍑鍢馥覆鰒酜﨓椨禣") },

{ QString::fromUtf8("g"), QString::fromUtf8("ga"), QString::fromUtf8("夹旮伽呷咖嘎嘠轧钆釓尜噶錷玍尕尬魀乫凩軈") },
{ QString::fromUtf8("g"), QString::fromUtf8("gai"), QString::fromUtf8("侅该陔郂荄姟峐垓赅晐祴畡絯隑賅賌豥該忋改絠丐乢匃匄芥钙盖鈣摡溉葢蓋戤概槩漑槪瓂") },
{ QString::fromUtf8("g"), QString::fromUtf8("gang"), QString::fromUtf8("冈冮刚扛纲岗杠肛疘矼牨岡钢缸罡剛堈掆釭犅棡摃堽罁綱鋼鎠崗港焵焹筻槓戆戅戇") },
{ QString::fromUtf8("g"), QString::fromUtf8("gan"), QString::fromUtf8("干甘迀奸忓杆攼玕肝姏泔苷坩矸竿柑酐疳粓凲尴尲筸鳱漧尶尷魐仠芉皯衦秆赶笴桿敢稈感澉趕橄澸擀簳鳡鱤汵旰盰绀凎倝淦紺詌骭幹榦檊贑赣贛灨") },
{ QString::fromUtf8("g"), QString::fromUtf8("gao"), QString::fromUtf8("羔皋高羙髙皐臯膏睾槔槹橰糕篙餻韟櫜鼛鷎鷱夰杲菒稁搞缟槁槀暠稿稾镐縞藁藳檺鎬告郜勂诰峼祮祰锆筶誥禞鋯吿") },
{ QString::fromUtf8("g"), QString::fromUtf8("gei"), QString::fromUtf8("给給") },
{ QString::fromUtf8("g"), QString::fromUtf8("ge"), QString::fromUtf8("戈仡犵扢纥圪戓肐牫疙饹咯哥胳格鸽袼搁割滒歌戨鴚鴿謌擱鎶呄匌佮茖阁挌革鬲敋葛隔裓蛤蛒臵愅觡嗝滆塥搿槅膈閤閣鞈骼韐镉獦諽輵鮯鎘韚騔鞷轕个合各哿盖舸嗰虼個铬硌箇鉻乬巪叾唟彁櫊") },
{ QString::fromUtf8("g"), QString::fromUtf8("geng"), QString::fromUtf8("更刯庚畊耕浭菮赓焿絚鹒縆緪賡羮鶊羹郠莄哽峺挭绠埂耿颈梗綆鲠骾鯁堩暅椩") },
{ QString::fromUtf8("g"), QString::fromUtf8("gen"), QString::fromUtf8("根跟哏艮亘亙茛揯搄") },
{ QString::fromUtf8("g"), QString::fromUtf8("gu"), QString::fromUtf8("估杚姑沽泒孤苽咕呱轱柧骨鸪罛唂唃家菰菇蛄笟軱軲觚辜酤蓇鈲毂稒箍箛篐嫴橭鴣鮕鹘夃古诂汩谷股苦牯羖贾钴罟蛊啒淈愲尳詁鹄馉鈷榾嗀鼓鼔榖嘏皷穀縎糓薣濲臌皼餶轂盬瞽瀔鶻蠱固故顾凅牿梏崮崓堌棝雇祻锢痼僱錮鲴鯝顧逧脵傦") },
{ QString::fromUtf8("g"), QString::fromUtf8("gou"), QString::fromUtf8("勾句沟佝枸钩痀袧鈎缑鉤溝褠緱篝簼鞲韝芶苟狗岣耇耉玽蚼笱耈豿诟坸购构姤垢冓够夠啂訽詬雊遘彀媾搆煹觏構撀購覯") },
{ QString::fromUtf8("g"), QString::fromUtf8("gong"), QString::fromUtf8("工弓公厷功共红杛攻供侊肱糼糿宫宮恭蚣躬龚匑幊愩塨觥躳慐匔碽髸觵龏龔廾巩汞拱栱拲珙輁鞏贡唝貢嗊熕赣") },
{ QString::fromUtf8("g"), QString::fromUtf8("guai"), QString::fromUtf8("乖摑叏拐柺枴罫箉夬怪恠") },
{ QString::fromUtf8("g"), QString::fromUtf8("gua"), QString::fromUtf8("瓜刮呱胍栝桰鸹歄煱趏劀緺踻颳鴰騧冎叧剐剮寡卦诖坬挂掛啩罣絓詿褂颪") },
{ QString::fromUtf8("g"), QString::fromUtf8("guan"), QString::fromUtf8("关观纶官冠矜覌倌莞蒄棺窤関瘝癏観闗鳏關鰥鱞觀馆琯筦痯管輨錧館璭舘鳤卝毌丱串贯泴掼涫惯悺貫悹祼慣潅摜遦樌盥罆雚躀鏆灌瓘爟矔鹳礶罐鑵鸛鱹欟") },
{ QString::fromUtf8("g"), QString::fromUtf8("gui"), QString::fromUtf8("归圭妫龟邽规茥闺皈胿珪帰亀硅袿規廆椝媯郌瑰摫閨鲑嫢嬀槻槼龜璝瞡鮭歸雟鬶嶲騩瓌鬹蘬宄氿轨庋匦陒佹诡姽垝恑攱癸軌鬼祪庪匭晷湀蛫觤詭厬簋蟡攰昋刿刽炅炔柜贵桂桧椢猤筀貴跪蓕瞆螝撌劌劊槶樻檜禬瞶癐襘櫃鐀鳜鞼鑎鱖鱥櫷") },
{ QString::fromUtf8("g"), QString::fromUtf8("guang"), QString::fromUtf8("光灮炗炚炛茪咣姯洸垙烡桄珖胱輄僙銧黆广広犷廣獷臩俇逛臦") },
{ QString::fromUtf8("g"), QString::fromUtf8("gun"), QString::fromUtf8("丨衮袞绲惃辊棍蓘滚滾蔉緄緷輥鲧磙鮌鯀睔謴") },
{ QString::fromUtf8("g"), QString::fromUtf8("guo"), QString::fromUtf8("过呙咶涡埚郭堝啯猓崞锅楇聒鈛瘑墎濄蝈彉嘓鍋彍蟈懖囯国囶囻圀國帼掴腘漍聝幗蔮慖虢膕馘簂果菓馃淉惈褁椁槨蜾粿綶裹輠餜過腂鐹") },

{ QString::fromUtf8("h"), QString::fromUtf8("han"), QString::fromUtf8("犴佄顸哻蚶酣頇谽嫨憨馠魽鼾邗汗邯含函凾虷唅娢浛圅焓梒晗琀涵崡嵅寒韩甝筨蜬鋡澏韓罕浫喊蔊豃厈汉屽扞闬旱垾悍猂莟捍涆菡焊晘釬閈皔睅蛿傼馯感颔漢撖蜭熯銲鋎暵頷憾螒翰撼顄駻雗譀瀚鶾兯爳") },
{ QString::fromUtf8("h"), QString::fromUtf8("hai"), QString::fromUtf8("咍咳嗨还孩骸海胲烸酼醢亥妎骇害氦餀嗐駭駴饚塰") },
{ QString::fromUtf8("h"), QString::fromUtf8("ha"), QString::fromUtf8("呵哈紦铪鉿虾蛤奤乤扖溌噺鎺鱩") },
{ QString::fromUtf8("h"), QString::fromUtf8("hao"), QString::fromUtf8("茠蒿薅薧嚆乚毜皋蚝毫椃嗥獆貉豪獔噑嘷獋儫濠壕嚎蠔籇譹好郝号昊昦侴秏悎耗哠浩恏晧淏傐皓鄗聕號滈暤暭皞皜澔镐薃皡曍皥颢顥鰝灏灝竓") },
{ QString::fromUtf8("h"), QString::fromUtf8("hang"), QString::fromUtf8("夯炕行苀迒吭斻杭肮绗桁珩蚢航笐颃貥裄絎筕頏魧沆巷垳") },
{ QString::fromUtf8("h"), QString::fromUtf8("hen"), QString::fromUtf8("拫痕鞎佷很哏狠詪恨") },
{ QString::fromUtf8("h"), QString::fromUtf8("hei"), QString::fromUtf8("黒黑嗨嘿潶") },
{ QString::fromUtf8("h"), QString::fromUtf8("he"), QString::fromUtf8("诃呵抲欱牙合訶喝嗬蠚禾纥何和咊郃劾姀河盇柇狢峆饸阂曷籺紇釛荷核敆盍盉害涸渮盒菏萂啝龁訸颌惒楁澕毼阖鲄詥貉貈鉌閡餄麧熆鹖頜魺螛翮篕餲鞨齕闔礉覈鶡皬鑉龢吓佫贺垎哬袔寉焃鹄猲賀碋嗃煂熇褐赫鹤翯癋謞壑嚇燺爀鶴鶮鸖靍粭遤靎靏") },
{ QString::fromUtf8("h"), QString::fromUtf8("hong"), QString::fromUtf8("叿吽呍灴轰哄訇烘軣焢硡揈渹谾薨輷鍧嚝轟仜弘妅屸红纮玒汯吰闳宏宖苰泓玜垬沗虹紅洪娂荭羾翃浤紘耾竑鸿硔紭谹鈜閎粠竤渱葓葒綋谼翝鉷鞃魟潂鋐篊黉霐彋蕻霟鴻黌唝晎讧訌閧銾撔澒闂鬨闀") },
{ QString::fromUtf8("h"), QString::fromUtf8("heng"), QString::fromUtf8("亨哼涥悙脝行恒恆姮珩胻烆桁鸻撗横橫衡鴴蘅鑅鵆啈") },
{ QString::fromUtf8("h"), QString::fromUtf8("hu"), QString::fromUtf8("乎匢戏虍芴苸呼泘垀昒忽曶恗烀轷匫唿惚淴虖軤雽雐滹嘑寣幠糊歑膴謼抇囫狐弧和瓳胡核壶隺壷斛焀鹄絗壺猢搰湖喖葫媩煳楜瑚鹘鹕蔛嘝蝴箶槲魱衚頶醐螜縠鍸餬觳鵠鬍瀫鶘鶦鰗乕汻虎浒俿萀唬虝琥滸錿互弖户戶戸冱芐护沪沍帍戽岵怙枑昈祜怘笏瓠扈婟楛雇綔嗀嗀鄠嫭嫮蔰滬摢槴熩鳸鍙豰簄嚛鹱護鳠頀鸌鱯粐") },
{ QString::fromUtf8("h"), QString::fromUtf8("hua"), QString::fromUtf8("化华花哗砉錵蘤划呚骅姡華铧釫釪猾滑嘩搳撶劃磆鲑螖鋘蕐譁鏵驊鷨夻话杹枠画桦崋婳畫畵嬅觟話摦樺槬澅嫿諙諣黊舙繣譮婲埖椛硴蒊糀誮") },
{ QString::fromUtf8("h"), QString::fromUtf8("huan"), QString::fromUtf8("欢犿狟歓鴅鵍酄嚾孉獾懽歡讙貛驩还郇环荁峘洹桓萑萈寏堚雈絙綄貆獂羦锾圜澴缳寰嬛還阛鍰環豲镮鹮糫繯轘鐶闤鬟瓛缓睆緩幻肒奂奐宦唤换涣浣眩烉焕梙逭患嵈喛喚渙換愌痪豢瑍煥瘓漶鲩槵澣擐藧鯇攌鯶鰀") },
{ QString::fromUtf8("h"), QString::fromUtf8("huai"), QString::fromUtf8("怀徊淮槐褢踝褱懐懷瀤櫰耲蘹坏壊壞蘾") },
{ QString::fromUtf8("h"), QString::fromUtf8("hou"), QString::fromUtf8("齁侯矦鄇葔帿喉猴睺瘊銗篌骺糇翭翵鍭餱鯸吼犼后郈厚茩後逅洉垕候堠豞鲎鲘鮜鱟") },
{ QString::fromUtf8("h"), QString::fromUtf8("hun"), QString::fromUtf8("昏昬荤阍婚涽惛殙棔葷睧睯蔒閽轋忶浑珲混馄渾魂琿餛鼲诨俒圂溷慁倱婫掍焝睴觨尡諢") },
{ QString::fromUtf8("h"), QString::fromUtf8("huang"), QString::fromUtf8("巟肓荒衁宺朚塃慌皇隍凰偟黄黃葟徨遑喤媓崲揘湟堭惶煌楻瑝锽墴潢獚熿蝗璜艎篁諻穔癀磺蟥簧餭鳇鍠韹趪騜鐄鰉鱑鷬怳恍炾晃晄谎奛幌詤熀縨謊兤櫎滉愰榥曂皝鎤皩") },
{ QString::fromUtf8("h"), QString::fromUtf8("huo"), QString::fromUtf8("吙秴耠锪劐嚄豁騞攉佸和活秮秳灬火邩伙钬鈥煷漷夥沎货或咟俰获捇眓閄貨掝祸喐剨湱禍惑旤蒦窢鍃霍濩獲奯擭檴雘謋穫镬矆彟瀖嚯藿蠖耯艧嚿曤臛矐癨鑊韄靃彠") },
{ QString::fromUtf8("h"), QString::fromUtf8("hui"), QString::fromUtf8("戏灰灳炜诙咴挥拻洃恢袆虺珲烣晖豗堕婎媈揮隓辉翚暉禈睢煇楎詼睳褘幑噅噕撝翬輝麾徽隳瀈蘳鰴囘回囬佪廻廽茴迴恛洄蚘烠逥痐蛔蛕蜖鮰虫悔毁毀毇燬檓譭卉屶屷汇讳会泋浍绘哕诲荟芔贿烩桧恚恵晦彗秽絵翙廆惠喙缋阓湏滙匯會彚彙賄詯誨瘣僡嘒蔧蕙潓寭圚憓槥暳慧橞諱嬒獩濊薈薉徻頮餯藱篲檅燴璯繢穢瞺蟪嚖懳繪翽譓櫘鏸儶闠靧鐬譿顪颒璤") },

{ QString::fromUtf8("j"), QString::fromUtf8("ji"), QString::fromUtf8("几讥叽击刉饥圾机刏乩芨玑肌鸡矶奇其枅咭唧剞姬屐积畟笄飢基庴喞嵇嵆幾赍犄筓缉朞稘畸嗘跻鳮銈僟綨緁箕毄稽鹡觭躸諆緝畿嘰槣齑錤機禨墼激隮襀積璣磯羁賷簊擊櫅耭雞韲鶏譏譤鐖饑躋鷄鞿魕癪羇虀鑇鑙齏覉羈鸄覊亼亽及伋彶吉汲岌级忣极即亟郆佶卽姞叝急皍級笈革觙揤疾堲楖焏偮卙谻集殛戢棘極湒塉嵴楫辑愱蒺嫉蝍趌銡耤膌槉嶯潗濈蕺蕀瘠箿踑踖輯螏檝藉磼襋蹐鍓艥籍鏶霵轚鶺齎躤雧己丮妀犱纪泲虮济给挤脊掎鱾戟麂魢撠橶穖擠蟣彑计旡记伎齐系忌坖际芰妓技剂季迹垍既紀荠茤茍洎哜計記剤紒觊继绩悸梞旣祭偈徛寄寂済葪蔇惎臮跡鬾魝裚痵継蓟際兾勣漈漃禝穊稩暨魥鲚霁跽誋諅鲫暩稷穄曁冀劑薊髻覬薺嚌濟檕績罽繋璾檵蹟鵋鯽齌鯚懻癠穧骥蘎蘮瀱繼鱀鰶鰿鷑霽蘻鱭驥﨤樭撃鯲廭") },
{ QString::fromUtf8("j"), QString::fromUtf8("jiang"), QString::fromUtf8("江茳将姜浆畕豇將葁畺摪翞僵螀漿薑缰壃殭橿螿鳉礓疅疆繮韁鱂讲奖桨蒋傋塂奨奬蔣槳獎膙耩講顜匞匠弜夅降洚绛弶强絳酱勥滰嵹摾犟糡醤醬糨謽櫤") },
{ QString::fromUtf8("j"), QString::fromUtf8("jie"), QString::fromUtf8("节阶疖皆结階接掲秸痎街揭嗟喈喼媘嫅堦椄湝脻楷煯稭鞂蝔擑謯癤鶛卩卪孑尐讦刧劫岊刦杢昅杰疌衱劼刼诘狤洁拮迼桔桀訐莭倢偈偼菨婕崨捷掶袺蛣絜結媫傑颉鉣嵥搩滐節睫詰蜐楬楶榤截鲒碣竭蓵潔镼鞊頡誱踕羯幯嶻擮鮚礍鍻巀蠞蠘蠽毑姐媎解觧飷檞丯介价芥岕庎吤戒届屆玠疥砎界畍衸诫借蚧悈徣唶堺楐琾骱蛶誡犗褯魪鎅藉桝") },
{ QString::fromUtf8("j"), QString::fromUtf8("jiao"), QString::fromUtf8("艽交郊茭茮骄娇姣峧浇胶教焦椒蛟跤虠鲛僬蕉澆憍嶕嶣嬌膠膲徼鮫穚鹪礁鵁簥轇蟭鐎驕鷦鷮矫嚼臫角侥佼狡饺挢绞烄晈捁笅皎脚铰搅湫絞筊賋勦剿腳敫煍暞僥摷踋鉸餃撟撹儌徺劋敽缴憿敿矯曒璬蟜皦繳譑孂灚攪鱎龣叫呌挍峤觉訆珓校轿较敎窌窖較滘漖嘄嘂嘦斠酵嶠噍潐嬓獥噭藠轎醮趭譥皭釂") },
{ QString::fromUtf8("j"), QString::fromUtf8("jian"), QString::fromUtf8("戋尖幵奸间歼坚浅戔冿玪肩艰姦姧兼监笺豜菅菺猏惤渐堅缄溅湔葌間雃犍牋瑊椷椾睷碊蒹搛缣煎蔪箋鲣緘鹣樫蕑蕳熞鳽熸縑鋻餰馢鞬艱鞯鳒瀐鵑鵳殱礛瀸鰔鰜鶼殲櫼譼韀礷鰹囏虃韉鑯暕囝枧拣俭茧柬笕倹捡挸湕帴减剪检梘趼詃検锏睑硷裥堿減揃揀谫弿瑐絸筧简戬戩碱儉翦篯撿藆襇襉檢謇蹇謭簡繭礆瞼鬋鹸鰎蠒鐧鐗瀽鹻譾籛襺鹼见件見建饯贱洊荐剑牮珔舰剣健俴涧栫剱谏徤袸毽臶腱践跈寋楗旔賎鉴键監槛榗漸僭劎劍澗箭糋諓賤踺踐趝餞諫鍵薦劒劔鍳瞷磵礀繝濺檻擶瀳譛鏩覵覸艦轞鐱鑑鑒鑬鑳豣彅墹麉") },
{ QString::fromUtf8("j"), QString::fromUtf8("jia"), QString::fromUtf8("加夹夾伽抸拁泇佳茄迦珈浃毠枷浹家痂耞笳袈梜葭傢跏猳腵筴鉫犌嘉镓豭貑鴐鎵麚甲扴圿忦郏郟荚莢唊恝脥铗戛戞裌蛱颊蛺跲頬鋏頰鴶鵊岬叚玾胛钾贾斚假婽徦斝椵賈鉀槚榎嘏瘕檟价驾架嫁幏榢價駕稼嗧糘") },
{ QString::fromUtf8("j"), QString::fromUtf8("jiu"), QString::fromUtf8("丩勼纠朻牞鸠究糺糾赳阄萛啾揪揂湫鳩揫摎樛鬏鬮九久乆乣氿汣奺灸玖舏韭紤镹酒韮匛旧臼疚咎柩柾桕倃匓厩救就廄廐舅廏僦慦殧舊鹫鯦麔匶齨鷲杦欍") },
{ QString::fromUtf8("j"), QString::fromUtf8("ju"), QString::fromUtf8("车凥且抅拘泃匊狙岨苴驹居陱毩捄挶眗疽砠罝梮蛆掬据涺崌娵婮毱趄跔跙椐琚腒锔裾雎蜛艍躹諊踘鋦駒鴡鮈鞠檋鞫鶋局泦侷狊桔郹焗菊啹婅淗湨椈輂犑閰跼粷趜橘駶鵙繘鵴蹫鶪鼰巈蘜鼳驧弆咀沮柜枸举莒矩挙椇筥龃榉榘蒟聥舉踽擧櫸齟欅襷籧巨句讵苣邭姖岠拒洰怇炬歫拠具昛秬钜剧俱倨倶袓蚷耟粔詎距埧埾惧犋鉅飓虡豦锯窭寠聚愳駏鮔踞屦劇勮遽據澽懅窶壉鋸颶屨貗簴醵躆鐻懼﨔") },
{ QString::fromUtf8("j"), QString::fromUtf8("jiong"), QString::fromUtf8("冂冋坰扃埛駉駫蘏蘔囧冏迥泂炅炯逈侰浻烱絅颎煚窘綗僒煛熲褧澃顈燛") },
{ QString::fromUtf8("j"), QString::fromUtf8("jing"), QString::fromUtf8("巠坕坙泾茎京径经亰荆荊秔涇婛猄惊旌旍菁経稉葏晶腈睛經粳精綡聙兢鲸麖鶄鶁鯨鼱驚麠井丼阱刭宑汫坓汬肼穽剄殌景儆頚幜澋憬璄璟璥憼暻頸蟼警劲妌迳弪净浄俓婙胫莖弳逕倞徑凈竞痉竟竫淨桱梷婧脛靓敬竧痙傹靖静獍誩踁境靚靜镜曔瀞鵛鏡競竸橸") },
{ QString::fromUtf8("j"), QString::fromUtf8("jin"), QString::fromUtf8("巾今仐斤钅金釒觔矜衿荕津珒紟矝琎惍釿堻筋禁璡黅鹶襟仅尽卺侭巹紧堇菫厪谨僅锦嫤馑漌蓳廑緊槿瑾儘錦謹饉伒劤妗劲进近枃浕勁荩浸赆烬晋晉祲進唫煡缙溍寖搢靳盡墐瑨歏殣凚僸觐縉賮噤濅濜嚍藎嬧燼璶覲贐齽兓砛琻壗") },
{ QString::fromUtf8("j"), QString::fromUtf8("jun"), QString::fromUtf8("军君汮均龟袀軍姰钧莙蚐桾菌皲鈞碅筠覠銞皸皹銁鲪頵麇鍕鮶麏麕呁郡陖俊骏峻馂捃浚埈隽焌晙珺葰竣畯棞雋蜠箘箟賐儁寯懏餕燇駿濬鵔鵕鵘攈攟") },
{ QString::fromUtf8("j"), QString::fromUtf8("juan"), QString::fromUtf8("姢娟捐涓圈焆朘鹃裐勬镌鋑鎸鐫蠲呟卷帣埍菤捲锩踡錈臇奆劵巻狷勌倦桊绢悁隽眷鄄淃瓹腃睊罥絭絹睠慻蔨餋獧羂讂") },
{ QString::fromUtf8("j"), QString::fromUtf8("jue"), QString::fromUtf8("噘撅撧屩屫亅孓孒决刔诀氒角芵弡決抉泬玦玨珏觉疦砄虳绝挗捔倔蚗欮脚桷斍覐觖訣赽掘崛崫趹鈌焳傕厥趉覚絶絕阙劂谲瑴駃鴃鴂瘚爴觮獗噊蕨蕝熦憰嶡嶥噱憠橛橜镢臄爵櫭蟩蟨譎爑蹶蹻蹷鐍鐝矍鳜嚼匷覺觼爝灍戄攫玃彏鷢矡貜躩钁") },

{ QString::fromUtf8("k"), QString::fromUtf8("ka"), QString::fromUtf8("咖咔喀卡佧咯胩鉲凧垰桛裃閊綛聢鯑鶍") },
{ QString::fromUtf8("k"), QString::fromUtf8("kai"), QString::fromUtf8("开奒開揩锎鐦凯剀闿恺垲铠慨剴蒈凱嘅嵦愷楷塏輆锴暟鍇鎧闓颽忾炌烗欬勓愾鎎") },
{ QString::fromUtf8("k"), QString::fromUtf8("ken"), QString::fromUtf8("肎肯肻垦恳啃豤貇錹墾懇掯硍裉褃") },
{ QString::fromUtf8("k"), QString::fromUtf8("kao"), QString::fromUtf8("尻嵪髛丂考攷拷洘烤栲铐熇犒銬鲓靠鮳鯌廤") },
{ QString::fromUtf8("k"), QString::fromUtf8("kan"), QString::fromUtf8("刊看栞龛勘嵁堪戡龕凵冚坎侃砍莰偘惂欿歁槛輡顑轗竷衎崁墈阚磡瞰闞鬫矙") },
{ QString::fromUtf8("k"), QString::fromUtf8("ke"), QString::fromUtf8("匼苛坷呵牱牁珂科轲柯钶疴砢趷蚵痾軻颏棵萪稞犐搕鈳窠颗薖榼樖頦瞌蝌磕顆髁醘礚壳咳殻殼翗揢可岢炣渇渴敤嵑嶱克刻勀勊客峇恪娔课骒氪堁衉愘缂溘愙锞嗑碦緙艐課錁騍礊厼迲硛嵙兡穒鯑") },
{ QString::fromUtf8("k"), QString::fromUtf8("kang"), QString::fromUtf8("忼砊粇康閌嫝嵻漮慷槺穅糠躿鏮鱇扛亢匟邟伉闶犺抗囥炕钪鈧") },
{ QString::fromUtf8("k"), QString::fromUtf8("kua"), QString::fromUtf8("夸咵姱誇侉垮銙挎胯趶跨骻舿") },
{ QString::fromUtf8("k"), QString::fromUtf8("ku"), QString::fromUtf8("刳郀矻枯桍哭堀圐跍窟骷鮬苦狜楛库绔俈秙庫焅袴裤絝喾瘔酷褲嚳萙鶎") },
{ QString::fromUtf8("k"), QString::fromUtf8("kou"), QString::fromUtf8("芤抠眍剾摳彄瞘口劶叩扣怐敂宼冦寇釦窛筘蔻蔲滱瞉簆鷇") },
{ QString::fromUtf8("k"), QString::fromUtf8("kong"), QString::fromUtf8("空倥崆涳埪悾硿箜躻錓鵼孔恐控鞚") },
{ QString::fromUtf8("k"), QString::fromUtf8("keng"), QString::fromUtf8("阬劥吭妔坑挳硁牼铿硜硻誙摼銵鍞鏗") },
{ QString::fromUtf8("k"), QString::fromUtf8("kuan"), QString::fromUtf8("宽寛寬臗髋髖梡欵款歀窽窾鑧") },
{ QString::fromUtf8("k"), QString::fromUtf8("kuai"), QString::fromUtf8("蒯擓巜凷会块快侩郐浍哙狯脍欳塊筷鲙墤鄶儈廥澮獪噲膾糩旝鱠圦") },
{ QString::fromUtf8("k"), QString::fromUtf8("kui"), QString::fromUtf8("亏岿刲悝盔窥聧窺虧顝闚巋奎晆隗鄈逵馗揆葵喹骙暌戣楏楑魁睽蝰頯鍨鍷櫆藈騤夔蘷虁巙犪躨傀煃跬頍磈蹞归尯匮蒉喟媿馈溃愦愧匱蕢嬇嘳憒潰聩聭篑謉殨膭餽簣聵籄饋") },
{ QString::fromUtf8("k"), QString::fromUtf8("kuang"), QString::fromUtf8("匡邼劻诓哐洭恇匩硄筐筺軭誆狂狅抂忹诳軖軠誑鵟夼儣懭邝纩圹况旷岲況矿昿贶眖砿框絋眶絖貺軦鉱鋛鄺壙黋爌曠懬穬矌礦纊鑛") },
{ QString::fromUtf8("k"), QString::fromUtf8("kun"), QString::fromUtf8("坤昆晜裈堃菎猑崑崐焜琨髠髡锟鹍裩褌蜫髨醌瑻熴錕鲲騉鵾鯤鶤捆悃阃壸梱祵稇硱裍綑稛壼閫閸困涃睏堒潉") },
{ QString::fromUtf8("k"), QString::fromUtf8("kuo"), QString::fromUtf8("扩拡括挄栝蛞筈萿葀阔廓頢髺韕鞟闊擴濶霩鞹鬠") },

{ QString::fromUtf8("l"), QString::fromUtf8("lan"), QString::fromUtf8("兰岚拦栏惏婪嵐阑葻蓝谰澜褴斓儖篮镧闌藍襕懢燷燣璼襤幱譋繿籃蘭蘫瀾灆攔欄斕襴灡囒籣讕躝欗襽鑭韊览浨揽缆榄漤罱醂覧壈懒擥懶嬾孄覽孏攬爦欖顲纜烂滥燗濫嚂爁爛瓓灠爤糷钄") },
{ QString::fromUtf8("l"), QString::fromUtf8("la"), QString::fromUtf8("拉垃柆菈啦喇搚邋旯剌砬揦磖嚹藞翋落腊楋揧蜡蝋辣辢瘌蝲臈癞鬎臘攋爉瓎櫴镴鯻蠟鑞凩溂鞡鮱") },
{ QString::fromUtf8("l"), QString::fromUtf8("lai"), QString::fromUtf8("来俫莱徕崃涞梾铼來倈郲徠逨庲唻婡猍崍淶萊赉棶琜睐筙赖箂錸濑癞騋麳鶆鯠籁襰睞賫賚賴頼顂鵣藾瀨瀬癩籟萙") },
{ QString::fromUtf8("l"), QString::fromUtf8("lang"), QString::fromUtf8("啷勆郎郞郎欴莨狼桹蓈廊嫏琅斏稂锒硠瑯榔蜋艆筤郒躴螂樃鋃鎯朗朖烺蓢塱誏朤阆崀浪埌蒗閬") },
{ QString::fromUtf8("l"), QString::fromUtf8("lao"), QString::fromUtf8("捞撈劳労牢窂涝浶唠哰崂勞铹痨僗嶗潦憥癆磱蟧簩醪鐒顟髝耂老佬荖咾姥狫恅栳珯铑銠獠轑络烙閖落嗠酪耢嫪嘮澇憦躼橯耮軂硓粩朥") },
{ QString::fromUtf8("l"), QString::fromUtf8("leng"), QString::fromUtf8("棱唥塄楞稜碐薐冷倰堎愣睖踜") },
{ QString::fromUtf8("l"), QString::fromUtf8("le"), QString::fromUtf8("肋嘞仂阞忇艻叻扐氻乐玏泐竻砳勒楽餎韷樂簕鳓鰳鱳朰榁") },
{ QString::fromUtf8("l"), QString::fromUtf8("li"), QString::fromUtf8("哩刕丽厘骊剓荲狸离梨梸犁琍悡菞喱犂棃鹂缡蜊艃筣漓蓠剺嫠孷樆璃盠貍鋫鲡黎褵犛蔾縭篱罹錅謧醨蟍釐離藜嚟邌斄瓈鏫鵹鯬蟸黧蠡蠫灕囄蘺孋廲劙鑗籬穲纚驪鱺鸝礼礼里李俚峛峢峲逦娌理锂裡裏裏豊鋰鲤澧禮鯉醴鳢邐鱧鱱欚力历厉屴立朸吏呖励利叓苈坜沥沴岦枥苙例戾疠隶疬砅赲俪俐荔茘郦栎栃轹猁悧珕栗栛涖浰莉莅娳砺砾秝鬲蛎蚸粝粒笠婯唳脷悷棙傈凓厤跞詈蛠痢雳鳨睙鉝厯蒞蒚搮溧塛慄暦歴瑮厲綟蜧蝷篥鴗隷勵歷曆巁濿檪隸鬁磿癘犡爄蠇櫔曞禲擽儮嚦攊藶瓅櫟瀝壢礪麗礫蠣爏糲盭櫪瓑皪酈儷癧礰麜鷅轢觻躒囇攦欐讈轣靂瓥攭靋唎甅睝粴魞聢竰糎鯏鯐") },
{ QString::fromUtf8("l"), QString::fromUtf8("lei"), QString::fromUtf8("勒累傫雷蔂缧嫘畾樏擂儡縲攂镭礌櫑瓃羸礧罍纍蘲鐳轠鑘靁虆欙纝鼺厽耒诔洡垒絫塁誄漯蕌磊磥蕾藟壘癗櫐礨蠝灅蘽讄儽壨鑸鸓肋泪类涙淚酹銇頛頪錑檑颣類纇蘱禷矋") },
{ QString::fromUtf8("l"), QString::fromUtf8("lia"), QString::fromUtf8("俩") },
{ QString::fromUtf8("l"), QString::fromUtf8("lian"), QString::fromUtf8("连奁怜帘涟連莲梿裢联廉慩蓮亷漣溓嗹匲奩槤熑覝鲢聨聫磏褳憐匳劆噒嫾濂濓薕螊聮縺翴聯謰蹥燫櫣臁镰鎌簾蠊瀮鬑鰱鐮籢籨敛琏脸裣摙璉蔹嬚鄻斂歛臉襝羷蘞蘝练炼恋殓堜僆萰媡湅链煉楝瑓潋練澰錬鍊殮鏈鰊瀲戀纞") },
{ QString::fromUtf8("l"), QString::fromUtf8("liang"), QString::fromUtf8("良俍莨凉凉梁涼椋辌量粮粱踉墚樑輬駺糧両两兩俩倆唡啢掚脼裲蜽緉魉魎亮谅哴悢倞辆晾喨湸靓輌諒輛鍄") },
{ QString::fromUtf8("l"), QString::fromUtf8("liao"), QString::fromUtf8("撩蹽辽疗聊尞憀膋僚寥嵺漻潦缭嘹嶚嶛寮嫽獠遼敹暸璙膫燎橑療鹩竂蟟繚簝賿豂蹘廫藔屪爎爒飂髎飉鷯了钌釕鄝蓼憭瞭镽尥尦炓料廖撂窷镣鐐") },
{ QString::fromUtf8("l"), QString::fromUtf8("lie"), QString::fromUtf8("裂列劣劽冽挒茢迾咧姴洌浖埒埓烈哷烮栵捩猎猟蛚聗趔煭巤颲鴷鮤儠獵擸犣躐鬛鬣鱲挘") },
{ QString::fromUtf8("l"), QString::fromUtf8("lin"), QString::fromUtf8("拎厸邻阾林临冧啉崊淋晽粦琳碄粼箖鄰隣隣遴潾嶙獜暽辚燐斴璘霖瞵磷疄臨繗翷麐轔鏻鳞瀶壣驎麟鱗菻亃僯凛凜撛澟懔懍廪廩檩檁癛癝吝恡悋赁焛賃蔺橉甐膦閵蹸藺躏躙躪轥") },
{ QString::fromUtf8("l"), QString::fromUtf8("liu"), QString::fromUtf8("溜熘澑蹓刘畄浏斿流留琉旈畱裗硫遛旒蒥蓅骝媹嵧馏飗榴瑠镏瘤瑬劉磂駠鹠橊疁镠璢癅蟉駵麍鎏鎦嚠瀏懰藰鏐飀騮鐂飅鶹鰡驑柳栁桞珋桺绺锍綹鋶罶熮橮羀嬼六陆翏廇塯碌鹨磟餾霤雡飂鬸鷚") },
{ QString::fromUtf8("l"), QString::fromUtf8("ling"), QString::fromUtf8("令伶刢灵坽囹夌苓彾呤姈狑泠柃朎昤瓴玲皊秢铃竛鸰砱陵羐凌菱淩崚掕婈棂琌蛉聆紷衑翎舲笭绫羚詅軨跉祾棱裬蓤龄鈴閝零綾蔆輘霊駖鹷鴒魿霗鲮錂蕶澪燯霛霝齢鯪酃孁齡櫺醽麢欞爧龗岭岺袊领領嶺另炩蘦靈") },
{ QString::fromUtf8("l"), QString::fromUtf8("long"), QString::fromUtf8("龙茏咙泷栊昽珑胧竜眬砻聋笼隆湰滝漋槞嶐窿篭龍癃鏧霳巃巄瀧嚨蘢爖櫳瓏曨襱朧矓礱礲龒龓籠豅躘聾蠪蠬靇鑨驡鸗陇拢垄垅篢隴儱壟壠攏竉弄哢梇徿贚") },
{ QString::fromUtf8("l"), QString::fromUtf8("lou"), QString::fromUtf8("搂瞜娄婁偻蒌溇喽楼漊慺蔞遱廔嘍熡樓蝼耧耬艛螻軁謱髅髏鞻鷜嵝嶁摟塿甊篓簍陋屚漏镂瘘瘺瘻鏤露") },
{ QString::fromUtf8("l"), QString::fromUtf8("lu"), QString::fromUtf8("噜撸謢擼嚕卢芦庐泸垆炉枦栌胪鸬舮舻玈颅鲈馿魲盧璷壚瀘蘆廬嚧獹攎爐櫨曥瓐臚矑艫籚蠦罏纑鑪髗顱鱸鸕黸卤虏掳鹵鲁硵虜蓾滷塷澛樐魯磠橹擄穞镥瀂氌櫓艣鏀鐪艪鑥六圥甪陆侓录彔坴峍赂辂陸勎娽逯菉渌淕淥硉绿鹿椂禄祿琭勠僇剹稑盝睩碌賂輅路粶箓蓼蔍廘漉摝塶辘戮熝樚膔踛醁趢録錄錴穋潞蕗璐簏螰鴼蹗騄轆簶鹭簬簵鏕鵦鵱麓鯥騼鏴露籙鷺虂轳焒閊鈩氇轤") },
{ QString::fromUtf8("l"), QString::fromUtf8("lv"), QString::fromUtf8("驴闾榈閭膢氀櫚藘驢吕呂郘侣侶挔捛捋旅梠祣偻铝稆絽屡缕僂屢膂褛鋁履褸膐縷儢穭律垏虑绿率氯葎嵂滤綠緑慮膟箻繂勴濾爈櫖鑢") },
{ QString::fromUtf8("l"), QString::fromUtf8("luan"), QString::fromUtf8("娈峦孪栾挛脟鸾脔滦銮鵉巒孌奱孿圝攣灓欒曫羉臠圞虊灤鑾癴癵鸞卵乱釠亂") },
{ QString::fromUtf8("l"), QString::fromUtf8("lue"), QString::fromUtf8("寽畧稤鋝鋢") },
{ QString::fromUtf8("l"), QString::fromUtf8("lve"), QString::fromUtf8("掠略锊圙") },
{ QString::fromUtf8("l"), QString::fromUtf8("lun"), QString::fromUtf8("抡掄仑伦论芲沦纶囵侖轮倫陯圇淪菕婨崘崙棆腀碖蜦耣綸輪踚錀鯩埨惀稐溣論嗧磮") },
{ QString::fromUtf8("l"), QString::fromUtf8("luo"), QString::fromUtf8("捋啰落頱囉罗萝逻猡脶腡椤锣骡箩镙螺羅覶鏍騾覼蠡儸邏蘿玀攞欏驘鸁籮鑼饠囖剆倮蓏裸躶瘰蠃臝曪癳泺洛咯骆峈荦络烙洜珞硌硦絡跞笿詻雒犖摞漯駱鵅鮥濼纙鮱") },

{ QString::fromUtf8("m"), QString::fromUtf8("m"), QString::fromUtf8("呒呣姆") },
{ QString::fromUtf8("m"), QString::fromUtf8("mai"), QString::fromUtf8("埋薶霾买荬買嘪鷶劢迈麦佅売卖脉脈麥衇勱賣邁霡霢蕒") },
{ QString::fromUtf8("m"), QString::fromUtf8("ma"), QString::fromUtf8("亇妈孖抹蚂麻媽嫲摩吗嗎痲痳蔴犘蟆马犸玛码馬獁溤瑪碼螞鎷鷌鰢杩祃骂閁唛傌睰嘜禡榪罵駡鬕唜嘛魸蟇") },
{ QString::fromUtf8("m"), QString::fromUtf8("man"), QString::fromUtf8("埋嫚颟顢悗蛮谩蔓馒摱慲樠瞒瞞鞔謾饅鳗鬘鬗鰻蠻娨屘満满滿螨蟎鏋矕曼鄤僈蔄幔獌漫缦墁慢熳槾镘澷縵鏝襔") },
{ QString::fromUtf8("m"), QString::fromUtf8("mang"), QString::fromUtf8("邙牤芒吂汒忙尨杧杗氓盲盳笀恾茫厖庬哤娏狵浝牻釯铓硭痝蛖鋩駹蘉莽莾硥茻壾漭蟒蠎") },
{ QString::fromUtf8("m"), QString::fromUtf8("mao"), QString::fromUtf8("猫貓毛矛枆茆茅牦旄罞軞酕渵堥楙锚髦鉾蝥氂髳錨蟊鶜冇夘卯戼峁泖昴铆笷鉚蓩冃芼皃茂冐冒贸柕眊耄覒袤貿鄚萺帽媢毷暓瑁愗鄮貌瞀蝐懋毟") },
{ QString::fromUtf8("m"), QString::fromUtf8("mei"), QString::fromUtf8("没沒坆苺枚玫栂眉脄莓郿脢梅珻睂堳湄湈葿媒猸嵋腜瑂禖楣楳煤酶槑镅鹛塺鋂霉鎇徾糜攗鶥黴毎每美凂挴浼羙嵄渼媄媺镁嬍燘躾鎂黣妹抺沬袂昧祙眛谜寐媚跊鬽痗煝魅韎睸蝞篃") },
{ QString::fromUtf8("m"), QString::fromUtf8("me"), QString::fromUtf8("乄么匁扖庅嚒濹嚜嚰") },
{ QString::fromUtf8("m"), QString::fromUtf8("men"), QString::fromUtf8("闷门们扪汶玧钔門閅們菛捫璊穈鍆亹虋焖悶暪燜懑懣椚") },
{ QString::fromUtf8("m"), QString::fromUtf8("meng"), QString::fromUtf8("掹蒙擝尨甿氓虻莔萌溕盟鄳甍蝱鄸儚蕄瞢橗幪濛懞檬曚氋朦鹲礞鯍矇艨矒饛霿靀顭鸏黾勐冡猛锰蜢艋錳獴懵蠓鯭鼆孟梦夢夣懜霥") },
{ QString::fromUtf8("m"), QString::fromUtf8("mi"), QString::fromUtf8("咪眯瞇弥祢迷猕谜蒾詸謎醚糜縻麋麊麿藌彌擟禰靡麛瀰獼蘪镾蘼戂攠瓕爢醾醿鸍釄米芈羋侎沵洣弭敉脒渳葞蔝銤濔孊灖冖糸汨沕泌怽宓觅祕峚宻秘覔覓密淧幂谧蓂幎覛塓蜜榓鼏蔤滵漞嘧熐冪樒幦濗謐簚櫁羃鼡袮粎裃椧嚸欕") },
{ QString::fromUtf8("m"), QString::fromUtf8("mian"), QString::fromUtf8("宀芇杣眠绵婂媔棉綿臱蝒緜嬵檰櫋矈矊矏丏汅沔免勉俛眄娩渑偭勔冕葂喕湎睌缅愐腼緬澠靦鮸靣面麪麫糆麺麵") },
{ QString::fromUtf8("m"), QString::fromUtf8("miao"), QString::fromUtf8("喵苗媌描瞄鹋緢嫹鶓劰杪秒眇渺缈淼緲篎藐邈妙庙竗玅庿缪廟") },
{ QString::fromUtf8("m"), QString::fromUtf8("min"), QString::fromUtf8("民玟苠姄岷怋旻旼盿砇珉罠崏捪缗琘琝瑉碈痻鈱緍緡錉鴖鍲皿冺刡忟闵黾抿泯忞敃勄闽悯敏笢閔黽惽湣敯暋愍閩僶潣憫慜簢鳘蠠鰵垊笽") },
{ QString::fromUtf8("m"), QString::fromUtf8("mie"), QString::fromUtf8("乜吀咩哶孭灭烕搣滅蔑薎鴓幭篾瀎懱櫗礣蠛衊鑖鱴旀") },
{ QString::fromUtf8("m"), QString::fromUtf8("ming"), QString::fromUtf8("名明鸣眀洺茗冥眳朙铭鄍蓂溟嫇猽詺銘鳴榠暝瞑螟覭佲姳凕慏酩命掵") },
{ QString::fromUtf8("m"), QString::fromUtf8("miu"), QString::fromUtf8("谬缪謬") },
{ QString::fromUtf8("m"), QString::fromUtf8("mo"), QString::fromUtf8("摸嚤无尛谟嫫馍模摹膜麽麼摩橅磨糢謨謩嬷嬤擵饃蘑髍魔劘饝万抹懡末圽没沫陌妺茉帓殁歾歿枺昩脉帞冒莫莈皌秣砞眜眿袜絈眽貃蛨貊塻蓦嗼漠寞獏銆靺魩黙嫼嘿墨瞐瞙瘼镆默貘蟔鏌藦爅癦驀纆礳耱丆匁乮裃酛魹囕") },
{ QString::fromUtf8("m"), QString::fromUtf8("mou"), QString::fromUtf8("哞牟劺侔呣恈谋眸蛑缪踎謀鍪麰鴾繆某") },
{ QString::fromUtf8("m"), QString::fromUtf8("mu"), QString::fromUtf8("毪氁模母牡亩姆畂拇畆畒姥峔牳胟砪畝畞畮鉧踇木目仫牟狇沐坶苜牧炑毣莫莯蚞钼雮募慔幕幙墓鉬睦楘慕暮暯艒霂縸穆鞪厼榁") },

{ QString::fromUtf8("n"), QString::fromUtf8("na"), QString::fromUtf8("那南拏拿嗱搻镎鎿乸哪雫内呐吶妠纳肭郍娜钠衲袦納笝軜豽捺貀鈉靹蒳魶凪魸噺") },
{ QString::fromUtf8("n"), QString::fromUtf8("nai"), QString::fromUtf8("腉孻乃艿奶氖疓廼迺哪倷釢嬭佴奈柰耐萘渿鼐褦螚錼") },
{ QString::fromUtf8("n"), QString::fromUtf8("nan"), QString::fromUtf8("囝囡男抩枏柟侽南莮畘难娚喃楠暔諵難赧萳揇湳煵腩蝻戁婻遖") },
{ QString::fromUtf8("n"), QString::fromUtf8("nao"), QString::fromUtf8("孬呶怓挠峱铙硇蛲詉猱碙撓嶩憹蟯獶譊夒鐃獿巎垴恼悩脑脳匘堖惱瑙嫐腦碯闹淖閙鬧臑") },
{ QString::fromUtf8("n"), QString::fromUtf8("nang"), QString::fromUtf8("囊囔乪嚢蠰馕欜饢擃曩攮灢儾齉") },
{ QString::fromUtf8("n"), QString::fromUtf8("ne"), QString::fromUtf8("哪疒那讷呐抐眲訥丆匁鼡縇") },
{ QString::fromUtf8("n"), QString::fromUtf8("nei"), QString::fromUtf8("哪娞馁脮腇餒鮾鯘内內那氝氞錗") },
{ QString::fromUtf8("n"), QString::fromUtf8("nen"), QString::fromUtf8("恁嫩嫰") },
{ QString::fromUtf8("n"), QString::fromUtf8("neng"), QString::fromUtf8("能") },
{ QString::fromUtf8("n"), QString::fromUtf8("ng"), QString::fromUtf8("嗯唔") },
{ QString::fromUtf8("n"), QString::fromUtf8("ni"), QString::fromUtf8("妮尼泥兒呢坭怩籾秜铌郳倪屔淣婗猊蚭埿棿跜鈮馜蜺聣輗觬貎鲵霓麑鯢齯臡拟你伲伱苨妳狔抳柅掜旎晲孴隬儗儞薿擬聻屰氼逆胒昵匿眤堄惄腻愵溺嫟睨暱縌誽膩嬺嶷檷哛鳰") },
{ QString::fromUtf8("n"), QString::fromUtf8("nian"), QString::fromUtf8("拈蔫年秊秊哖姩秥粘鲇鲶鮎黏鯰涊淰捻辇辗碾輦撵撚簐蹍攆蹨躎卄廿念唸埝惗艌焾") },
{ QString::fromUtf8("n"), QString::fromUtf8("niang"), QString::fromUtf8("娘嬢孃酿醸釀") },
{ QString::fromUtf8("n"), QString::fromUtf8("niao"), QString::fromUtf8("鸟茑袅鳥嫋裊蔦樢褭嬝嬲尿脲溺") },
{ QString::fromUtf8("n"), QString::fromUtf8("nie"), QString::fromUtf8("捏捻揑苶乜帇圼枿陧涅聂痆臬隉菍啮湼敜嵲嗫踂踗踙摰镊镍噛槷嶭篞臲錜颞蹑聶嚙鎳闑孽孼櫱蘖籋囁齧鑈巕蠥糱糵囓躡讘鑷顳钀") },
{ QString::fromUtf8("n"), QString::fromUtf8("nin"), QString::fromUtf8("囜您拰脌") },
{ QString::fromUtf8("n"), QString::fromUtf8("ning"), QString::fromUtf8("宁苧咛狞拧柠聍甯寍寕寗寜寧凝儜橣擰獰嚀薴嬣檸聹鑏鬡鸋矃佞侫泞倿澝濘") },
{ QString::fromUtf8("n"), QString::fromUtf8("niu"), QString::fromUtf8("妞牛牜汼狃扭纽忸炄杻钮紐莥鈕靵拗") },
{ QString::fromUtf8("n"), QString::fromUtf8("nou"), QString::fromUtf8("羺槈耨獳鎒檽鐞鯑") },
{ QString::fromUtf8("n"), QString::fromUtf8("nong"), QString::fromUtf8("农侬浓哝脓秾農辳儂蕽濃噥膿燶檂禯穠襛譨醲欁鬞繷弄挊挵癑齈") },
{ QString::fromUtf8("n"), QString::fromUtf8("nu"), QString::fromUtf8("奴伮驽孥笯駑努弩呶砮胬怒傉搙莻") },
{ QString::fromUtf8("n"), QString::fromUtf8("nv"), QString::fromUtf8("女钕籹釹沑衂恧朒衄") },
{ QString::fromUtf8("n"), QString::fromUtf8("nuan"), QString::fromUtf8("奻渜煗暖餪") },
{ QString::fromUtf8("n"), QString::fromUtf8("nun"), QString::fromUtf8("黁") },
{ QString::fromUtf8("n"), QString::fromUtf8("nve"), QString::fromUtf8("疟虐") },
{ QString::fromUtf8("n"), QString::fromUtf8("nuo"), QString::fromUtf8("那娜挪梛傩橠儺诺逽喏掿愞搦锘榒稬諾蹃鍩糑懧懦糥穤糯") },

{ QString::fromUtf8("o"), QString::fromUtf8("ou"), QString::fromUtf8("区讴沤欧殴瓯鸥塸熰歐鴎甌膒毆謳藲櫙鏂鷗呕吘偶腢嘔蕅耦藕怄慪漚") },
{ QString::fromUtf8("o"), QString::fromUtf8("o"), QString::fromUtf8("噢哦丆仒乯迲猠硛旕筽鳰縇穒纐") },

{ QString::fromUtf8("p"), QString::fromUtf8("pa"), QString::fromUtf8("叭汃妑苩派皅趴舥啪葩扒杷爬耙掱琶筢潖帊帕怕袙巼") },
{ QString::fromUtf8("p"), QString::fromUtf8("pai"), QString::fromUtf8("拍俳徘猅排棑牌箄輫簰簲迫沠派哌渒湃蒎鎃闏") },
{ QString::fromUtf8("p"), QString::fromUtf8("pan"), QString::fromUtf8("扳拌眅萠番潘攀丬爿洀柈胖般盘跘蒰幋媻槃搫盤磐縏磻蹒蹣鎜蟠瀊鞶坢冸判伴沜泮拚炍牉盼叛畔袢詊溿頖鋬鵥襻鑻") },
{ QString::fromUtf8("p"), QString::fromUtf8("pang"), QString::fromUtf8("乓胮雱滂膀膖霶仿彷厐庞逄旁舽嫎徬磅螃鳑龎龐鰟嗙耪覫髈炐肨胖眫") },
{ QString::fromUtf8("p"), QString::fromUtf8("pao"), QString::fromUtf8("抛拋泡脬萢刨庖咆狍垉炰炮爮袍匏袌軳跑鞄麃麅奅疱皰砲靤麭礟礮喸褜") },
{ QString::fromUtf8("p"), QString::fromUtf8("pei"), QString::fromUtf8("呸怌肧胚衃醅阫陪培赔毰锫裴裵賠錇俖伂犻沛佩帔姵斾旆珮配浿辔馷霈轡蓜") },
{ QString::fromUtf8("p"), QString::fromUtf8("pen"), QString::fromUtf8("喷噴濆歕瓫盆葐湓呠翸喯") },
{ QString::fromUtf8("p"), QString::fromUtf8("pi"), QString::fromUtf8("丕伓伾批纰邳坯炋枈披抷狉狓岯砒紕被秛秠铍悂旇耚翍豾鈚釽鉟銔髬駓磇劈噼錃魾錍憵鎞礔礕霹皮阰陂芘肶枇毗毘郫陴疲蚍蚾蚽豼埤啤崥琵焷脾腗椑裨鈹鲏蜱罴膍隦魮鮍壀篺螷鵧貔羆鼙蠯匹庀仳圮苉吡否脴痞銢鴄諀嶏擗噽癖嚭屁淠揊媲嫓睥辟稫潎僻澼甓疈譬闢鸊鷿迲") },
{ QString::fromUtf8("p"), QString::fromUtf8("peng"), QString::fromUtf8("匉抨泙怦恲砰硑烹梈軯閛剻漰嘭駍磞芃朋竼莑倗捀堋弸袶彭棚椖搒塜塳傰蓬稝鹏硼樥熢澎憉輣錋篷篣膨韸髼鬅蟛蟚纄蘕韼鵬鬔騯鑝捧淎皏掽椪碰槰踫輧") },
{ QString::fromUtf8("p"), QString::fromUtf8("pian"), QString::fromUtf8("片囨扁偏媥犏翩篇鶣便骈胼腁缏楄楩賆跰褊骿駢蹁騈谝覑貵諞骗騙騗") },
{ QString::fromUtf8("p"), QString::fromUtf8("piao"), QString::fromUtf8("票剽勡嘌彯漂缥飘旚螵翲犥飄飃魒朴嫖瓢薸闝莩殍瞟縹篻醥顠皫僄徱骠慓驃鰾") },
{ QString::fromUtf8("p"), QString::fromUtf8("pie"), QString::fromUtf8("氕覕撇暼撆瞥丿苤鐅嫳") },
{ QString::fromUtf8("p"), QString::fromUtf8("ping"), QString::fromUtf8("乒甹俜娉涄砯聠艵頩冯平评苹郱凭呯坪枰玶胓屏洴帡荓瓶蚲萍帲淜幈蓱蛢缾甁塀焩評鲆軿竮凴箳慿憑鮃檘簈屛岼") },
{ QString::fromUtf8("p"), QString::fromUtf8("pin"), QString::fromUtf8("拚拼姘砏礗穦馪驞贫玭娦貧琕嫔频嬪薲蘋嚬矉颦顰品榀牝汖娉聘朩") },
{ QString::fromUtf8("p"), QString::fromUtf8("po"), QString::fromUtf8("朴钋陂岥泊泼坡釙颇酦頗潑醗醱鏺婆鄱蔢嘙皤繁櫇嚩叵尀钷笸鉕箥駊廹迫岶洦敀昢珀破砶烞粕湐蒪魄乶哛桲") },
{ QString::fromUtf8("p"), QString::fromUtf8("pou"), QString::fromUtf8("剖娝抔抙捊垺掊裒箁咅哣婄犃") },
{ QString::fromUtf8("p"), QString::fromUtf8("pu"), QString::fromUtf8("仆攵攴扑抪炇陠铺痡鋪噗撲潽鯆圤匍莆菩脯葡菐蒱蒲僕酺墣獛璞穙镤瞨濮贌鏷纀朴浦埔圃烳普圑溥谱暜諩樸擈氆檏镨譜蹼鐠堡舖舗暴瀑曝巬哛") },

{ QString::fromUtf8("q"), QString::fromUtf8("qi"), QString::fromUtf8("七迉沏妻柒栖桤凄郪倛娸捿淒悽萋戚桼棲敧欺欹期攲紪缉傶僛嘁墄漆慽緀榿慼踦霋魌蹊鏚鶈丌亓祁齐圻忯芪岐岓奇其亝祈祇斉肵歧疧俟荠剘陭旂耆蚑蚔蚚脐斊竒颀畦軝跂釮埼萁萕帺骐骑猉崎掑淇棋棊祺蛴琪琦锜褀碕碁鬿頎愭﨑齊旗綥粸綦蜞蜝璂禥蕲錡鲯藄鄿濝懠檱櫀鳍騏騎臍鵸鶀鯕蘄麒鬐艩蠐騹鰭玂麡乞邔企芑岂屺杞玘盀启呇唘豈起啓啟啔婍绮棨晵綮綺稽諬闙气讫迄汔気汽芞弃矵呮泣炁亟盵契咠砌訖栔氣欫唭葺湆湇棄夡愒滊摖暣甈碶憇槭噐器憩碛磜磧磩藒蟿罊鐑嵜褄螧簯簱籏") },
{ QString::fromUtf8("q"), QString::fromUtf8("qia"), QString::fromUtf8("掐袷葜擖拤卡峠酠跒鞐圶冾帢洽恰胢硈殎髂") },
{ QString::fromUtf8("q"), QString::fromUtf8("qian"), QString::fromUtf8("千阡仟芊迁扦奷汘圱圲汧岍杄茾佥欦钎臤牵拪悭蚈铅谸釺婜牽孯掔谦鈆鉛鹐签愆僉嗛骞撁搴慳遷厱諐褰謙顅檶櫏攐攑簽鵮騫攓籖鬜鬝籤韆仱岒扲忴拑乹前荨钤钱钳虔歬軡乾偂掮揵亁媊葥鈐靬犍鉗銭墘榩箝蕁潜潛羬黔橬錢黚騝騚濳灊鰬浅肷淺遣膁蜸槏谴缱繾譴欠刋伣纤芡茜俔倩悓堑椠棈傔嵌皘蒨慊塹蔳綪歉篏儙槧篟輤縴壍嬱竏粁鎆鏲") },
{ QString::fromUtf8("q"), QString::fromUtf8("qing"), QString::fromUtf8("靑青轻氢郬卿倾寈清淸埥圊氫軽傾蜻輕錆鲭鯖鑋夝甠剠勍啨情殑棾葝氰晴暒擏樈檠擎黥苘顷请頃庼廎漀請謦檾庆亲凊倩掅殸碃綮箐靘慶磬罄濪儬硘櫦") },
{ QString::fromUtf8("q"), QString::fromUtf8("qie"), QString::fromUtf8("切癿伽茄聺且妾怯厒砌窃匧悏挈洯惬淁笡蛪趄愜慊朅锲箧篋踥鍥穕鯜竊") },
{ QString::fromUtf8("q"), QString::fromUtf8("qin"), QString::fromUtf8("侵亲钦衾骎媇嵚欽綅嵰誛嶔親顉駸鮼寴芹芩庈肣矜秦蚙菦埐珡耹捦菳禽覃鈙鈫雂琴琹溱勤靲嫀嗪廑慬嶜擒噙鳹斳澿檎懄螓瘽懃蠄鵭坅昑笉赾梫寑锓寝寢鋟螼吣吢抋沁唚菣揿搇撳藽瀙") },
{ QString::fromUtf8("q"), QString::fromUtf8("qiao"), QString::fromUtf8("悄郻硗雀跷鄡鄥勪踍敲毃锹劁骹頝墝墽燆橇幧缲磽鍫鍬繑繰趬蹺鐰乔侨荞荍峤桥菬硚喬翘僑谯槗墧憔蕉蕎嘺嫶鞒犞燋樵橋瞧癄礄翹譙趫櫵藮鐈鞽顦巧釥愀髜壳陗俏诮帩峭窍誚髚僺撬撽韒鞘鞩竅躈") },
{ QString::fromUtf8("q"), QString::fromUtf8("qiang"), QString::fromUtf8("羌呛抢斨枪戗戕玱羗将猐啌跄腔溬嗴獇椌蜣锖锵羫槍牄瑲戧嶈摤篬謒镪蹌蹡鎗鏘強强蔷嫱墙樯蔃漒薔彊廧墻嬙檣牆艢蘠羟羥搶墏襁繈繦鏹炝唴嗆熗羻") },
{ QString::fromUtf8("q"), QString::fromUtf8("qiu"), QString::fromUtf8("丘丠龟邱坵恘秋秌恷蚯媝湫萩楸湬蓲鹙蝵緧篍趥穐鳅鞦鞧蟗鶖鰌鰍蠤龝仇叴芁扏囚犰玌朹肍汓虬求虯泅俅訄訅酋觓釚唒莍逑逎浗紌毬球梂赇殏釻頄渞湭遒巯崷盚皳絿蛷煪裘觩巰賕蝤璆銶醔鼽鮂鯄鰽搝糗蘒蘒") },
{ QString::fromUtf8("q"), QString::fromUtf8("qu"), QString::fromUtf8("区曲匤阹佉伹诎驱岖岴屈抾坥浀胠祛袪蛆紶躯區焌煀詘趋筁蛐粬趍駆憈嶇敺駈誳麹魼髷麯趨軀覰麴鶌黢驅鰸鱋佢劬斪朐胊菃鸲絇翑渠淭葋軥蕖璖鴝磲螶蟝璩瞿鼩蘧忂灈戵爠臞氍欋籧癯蠷衢欔躣鑺蠼鸜苣取竘娶詓竬蝺龋齲去厺刞呿耝阒觑趣閴麮鼁闃覷覻衐") },
{ QString::fromUtf8("q"), QString::fromUtf8("que"), QString::fromUtf8("炔缺缼蒛阙瘸芍却卻崅埆琷悫雀确硞棤阕塙搉鹊皵碏榷愨慤碻確趞闋燩闕礐鵲礭") },
{ QString::fromUtf8("q"), QString::fromUtf8("qiong"), QString::fromUtf8("銎邛卭宆穷穹茕桏筇笻赹惸焪焭琼蛩蛬舼跫睘煢熍瞏窮憌橩璚儝藑藭瓊竆瓗嬛") },
{ QString::fromUtf8("q"), QString::fromUtf8("quan"), QString::fromUtf8("奍弮悛圈圏棬椦箞鐉全权卷诠佺姾荃峑洤恮泉牷辁拳铨痊硂惓埢婘啳葲湶絟筌犈瑔輇觠詮搼跧銓蜷権踡駩醛鳈鬈騡鰁巏權齤颧蠸顴犭犬犮畎烇绻綣虇劝券牶勧韏縓勸楾闎") },
{ QString::fromUtf8("q"), QString::fromUtf8("qun"), QString::fromUtf8("夋囷逡帬宭峮裙群羣裠麇") },

{ QString::fromUtf8("r"), QString::fromUtf8("rao"), QString::fromUtf8("荛娆饶桡嬈蕘橈襓饒扰隢擾绕遶繞") },
{ QString::fromUtf8("r"), QString::fromUtf8("rang"), QString::fromUtf8("嚷穣勷儴蘘獽瀼禳瓤穰躟鬤壌壤攘爙让懹譲讓") },
{ QString::fromUtf8("r"), QString::fromUtf8("ran"), QString::fromUtf8("呥肰衻袇袡蚦蚺然髥髯嘫燃繎冄冉苒姌染珃媣橪") },
{ QString::fromUtf8("r"), QString::fromUtf8("re"), QString::fromUtf8("若喏惹热熱") },
{ QString::fromUtf8("r"), QString::fromUtf8("reng"), QString::fromUtf8("扔仍辸礽芿陾艿") },
{ QString::fromUtf8("r"), QString::fromUtf8("ren"), QString::fromUtf8("人亻仁壬朲忈任芢忎秂魜銋鵀忍荏荵栠栣秹稔躵刃刄认讱仞仭纫屻饪牣纴轫杒妊韧肕祍姙衽紉紝軔訒袵梕葚腍絍鈓飪靭靱韌餁認") },
{ QString::fromUtf8("r"), QString::fromUtf8("rong"), QString::fromUtf8("戎肜栄茸荣茙狨绒毧峵容烿媶嵘搑傛絨羢搈溶嵤嫆蓉榵榕榮熔穁瑢縙镕褣蝾槦融螎駥嬫嶸爃鎔瀜曧蠑冗宂坈傇軵氄穃") },
{ QString::fromUtf8("r"), QString::fromUtf8("ri"), QString::fromUtf8("日驲囸衵釰釼鈤馹乤乬乫乮乭乶乽乼乺挘艝鑓虄") },
{ QString::fromUtf8("r"), QString::fromUtf8("rou"), QString::fromUtf8("厹禸柔粈脜葇媃揉渘楺瑈腬煣蝚糅輮蹂鍒鞣騥瓇鶔鰇韖肉宍譳") },
{ QString::fromUtf8("r"), QString::fromUtf8("ru"), QString::fromUtf8("邚如侞帤茹挐桇铷袽渪筎蒘銣蝡蕠儒鴑鴽嚅薷濡孺嬬曘襦蠕颥醹顬鱬汝肗乳辱鄏擩入洳溽缛蓐嗕媷褥縟扖杁嶿") },
{ QString::fromUtf8("r"), QString::fromUtf8("rui"), QString::fromUtf8("甤緌蕤桵蕊蕋橤繠蘂蘃壡芮汭枘蚋锐蜹瑞睿鋭銳叡") },
{ QString::fromUtf8("r"), QString::fromUtf8("ruan"), QString::fromUtf8("堧撋壖阮软朊耎軟偄媆瑌腝碝緛輭瓀礝") },
{ QString::fromUtf8("r"), QString::fromUtf8("run"), QString::fromUtf8("闰润閏閠潤橍膶") },
{ QString::fromUtf8("r"), QString::fromUtf8("ruo"), QString::fromUtf8("挼捼叒若鄀偌弱婼渃焫楉蒻箬篛爇鰙鰯鶸嵶") },

{ QString::fromUtf8("s"), QString::fromUtf8("sang"), QString::fromUtf8("丧桒桑喪槡嗓搡磉褬颡鎟顙") },
{ QString::fromUtf8("s"), QString::fromUtf8("san"), QString::fromUtf8("三弎参叁毵毶厁毿犙鬖伞傘散糁馓糝糣糤繖鏒鏾饊俕閐壭") },
{ QString::fromUtf8("s"), QString::fromUtf8("sai"), QString::fromUtf8("思毢愢揌塞腮毸嘥噻鳃顋鰓赛僿賽簺嗮") },
{ QString::fromUtf8("s"), QString::fromUtf8("sa"), QString::fromUtf8("仨撒洒訯靸潵灑躠卅钑飒脎萨鈒馺摋蕯颯薩櫒扨苆乷栍隡虄") },
{ QString::fromUtf8("s"), QString::fromUtf8("sao"), QString::fromUtf8("掻搔溞骚慅缫螦繅鳋颾騒騷鰠鱢扫掃嫂埽瘙燥氉臊矂髞乺") },
{ QString::fromUtf8("s"), QString::fromUtf8("seng"), QString::fromUtf8("僧鬙") },
{ QString::fromUtf8("s"), QString::fromUtf8("sen"), QString::fromUtf8("森椮槮襂") },
{ QString::fromUtf8("s"), QString::fromUtf8("se"), QString::fromUtf8("閪色洓涩栜啬渋铯雭歮嗇瑟塞摵歰銫澁濇濏擌懎瘷穑璱澀瀒穡繬轖穯鏼譅飋縇鱪") },
{ QString::fromUtf8("s"), QString::fromUtf8("sha"), QString::fromUtf8("杀杉沙纱刹砂殺莎唦猀粆紗挲铩桬痧硰摋煞蔱裟榝樧噎鲨魦閷髿鯊鯋鎩繺奢啥傻儍倽萐帹啑唼喢厦廈嗄歃翜翣箑閯霎") },
{ QString::fromUtf8("s"), QString::fromUtf8("shai"), QString::fromUtf8("筛酾篩簁簛籭色晒曬") },
{ QString::fromUtf8("s"), QString::fromUtf8("shang"), QString::fromUtf8("汤伤殇商觞禓傷蔏滳漡墒慯殤熵螪觴謪鬺上垧扄晌赏樉賞鋿鏛贘鑜丄尚尙恦绱緔鞝") },
{ QString::fromUtf8("s"), QString::fromUtf8("shan"), QString::fromUtf8("山彡邖删刪芟杉钐衫苫姗姍狦挻舢珊栅柵脠痁扇軕掺笘釤傓跚剼搧煽幓嘇潸澘鯅縿膻檆羴羶闪陕陝炶閃晱睒煔熌覢讪汕疝单訕剡赸掸掞善椫禅銏骟鄯僐缮墠墡樿敾歚擅嬗禪膳磰赡謆繕蟮蟺鐥饍鳝騸贍譱灗鱓鱔圸") },
{ QString::fromUtf8("s"), QString::fromUtf8("she"), QString::fromUtf8("奢猞赊畬畲畭輋賖賒檨舌佘折虵蛇阇揲蛥舍捨叶厍设社舎厙拾涉射赦設渉涻弽滠慑摄摂蔎慴歙蠂韘騇麝懾灄攝欇") },
{ QString::fromUtf8("s"), QString::fromUtf8("shao"), QString::fromUtf8("莦弰捎烧梢稍焼萷旓蛸艄筲輎鞘燒髾鮹勺芍杓苕柖玿韶少邵卲劭绍袑哨娋紹睄綤潲蕱") },
{ QString::fromUtf8("s"), QString::fromUtf8("shei"), QString::fromUtf8("谁") },
{ QString::fromUtf8("s"), QString::fromUtf8("shen"), QString::fromUtf8("申扟屾伸身籶侁参诜冞罙呻妽绅柛氠穼珅姺籸娠峷莘眒甡砷深紳敒兟訷棯裑葠蓡罧詵糁甧蔘糂鲹駪薓燊曑鵢鯓鯵鰺什神甚鉮鰰邥弞沈矤审哂矧谂谉婶訠渖諗審頣魫曋瞫瀋嬸讅覾肾胂侺昚涁眘脤渗祳葚腎瘆慎愼椹蜃蜄滲鋠瘮堔榊籡") },
{ QString::fromUtf8("s"), QString::fromUtf8("shou"), QString::fromUtf8("収收熟扌手守首垨艏寿受狩兽售授涭绶痩膄壽夀瘦綬獣獸鏉") },
{ QString::fromUtf8("s"), QString::fromUtf8("shi"), QString::fromUtf8("尸失师呞邿诗鸤虱狮施屍浉師絁釶葹湿湤溼溮蒒蓍鉇詩獅瑡酾鳲嘘鳾箷蝨褷鲺鍦濕鯴鰤鶳襹釃十饣什石时识实実旹飠食祏炻蚀拾姼峕埘莳時遈寔湜溡塒鉐實榯蝕鲥鼫鼭識鰣史矢乨豕使驶始屎宩兘笶鉂駛士氏礻示市世丗仕似卋忕式戺亊事侍势试呩饰视柹柿枾昰是贳恃恀眂峙拭冟室适逝眎眡铈舐轼烒栻秲釈視释貰弑谥徥揓崼嗜蒔勢弒軾筮睗觢試鈰鉃飾鉽誓舓適奭餝餙銴諡諟澨噬嬕遾螫謚簭釋襫乄辻佦竍嵵煶鮖籂鰘籡鱰") },
{ QString::fromUtf8("s"), QString::fromUtf8("sheng"), QString::fromUtf8("升生阩呏声斘枡昇泩狌苼陞珄牲殅陹笙湦焺甥鉎鍟聲鼪鵿渑绳憴縄繉繩譝省眚偗渻圣胜晟晠乘剰盛貹剩勝嵊琞聖墭榺蕂賸竔曻﨡橳") },
{ QString::fromUtf8("s"), QString::fromUtf8("shu"), QString::fromUtf8("书殳抒纾陎叔枢杸姝荼倏倐殊紓書焂梳鄃菽婌掓軗淑疏疎舒琡綀毹毺摅输跾踈蔬樞輸鮛橾儵攄鵨尗秫孰赎塾熟璹贖属暑暏黍鼠蜀数署潻薯薥曙癙藷襡襩屬术朮戍束沭述侸荗咰树怷竖恕捒庶庻蒁絉術裋尌鉥腧竪墅漱潄澍數豎錰霔濖樹鶐鏣虪瀭糬蠴") },
{ QString::fromUtf8("s"), QString::fromUtf8("shua"), QString::fromUtf8("刷唰耍誜") },
{ QString::fromUtf8("s"), QString::fromUtf8("shuang"), QString::fromUtf8("双泷爽霜雙骦孀孇騻欆鷞鹴礵艭驦鸘漺慡縔塽灀﨎鏯") },
{ QString::fromUtf8("s"), QString::fromUtf8("shuan"), QString::fromUtf8("闩拴閂栓涮腨") },
{ QString::fromUtf8("s"), QString::fromUtf8("shuai"), QString::fromUtf8("衰摔甩帅帥率蟀卛") },
{ QString::fromUtf8("s"), QString::fromUtf8("shui"), QString::fromUtf8("谁脽誰氵水氺说帨涗涚祱税稅裞睡") },
{ QString::fromUtf8("s"), QString::fromUtf8("shun"), QString::fromUtf8("楯吮顺順舜蕣橓瞚瞤瞬鬊") },
{ QString::fromUtf8("s"), QString::fromUtf8("song"), QString::fromUtf8("忪松枀枩柗娀凇倯菘庺崧淞梥硹嵩濍憽檧鬆怂悚耸竦愯楤傱嵷慫聳駷讼宋诵送訟颂頌誦鎹餸") },
{ QString::fromUtf8("s"), QString::fromUtf8("shuo"), QString::fromUtf8("说説說妁烁朔铄硕欶矟蒴搠獡槊碩箾鎙爍鑠") },
{ QString::fromUtf8("s"), QString::fromUtf8("si"), QString::fromUtf8("厶纟丝司糹私泀咝俬思恖鸶虒偲缌媤蛳斯絲鉰楒禗飔凘厮禠蜤锶銯罳鋖緦磃澌嘶噝撕蕬廝燍螄鍶颸蟖蟴騦鐁鷥鼶死巳亖四似寺汜泤姒兕伺佀祀孠杫価驷饲泗洠娰俟枱柶牭食飤肂涘洍耜耛梩笥釲覗竢肆嗣貄鈶鈻飼榹禩駟蕼儩瀃厑唜旕鯐鶍") },
{ QString::fromUtf8("s"), QString::fromUtf8("sou"), QString::fromUtf8("叟凁捜鄋搜蒐蓃廀廋嗖獀馊溲飕摉摗锼螋艘醙鎪餿颼騪叜傁嗾瞍擞薮藪櫢籔嗽瘶擻") },
{ QString::fromUtf8("s"), QString::fromUtf8("su"), QString::fromUtf8("苏甦酥窣稣穌鯂蘓蘇櫯囌俗玊夙诉泝肃洬涑莤速珟素粛殐梀骕宿谡傃粟訴肅鹔愫塑塐遡嫊嗉溯溸缩遬蔌僳榡愬膆趚觫鋉餗碿樎樕憟潥潚縤簌謖藗橚璛蹜驌鷫鱐苆") },
{ QString::fromUtf8("s"), QString::fromUtf8("suan"), QString::fromUtf8("狻痠酸匴祘笇筭蒜算") },
{ QString::fromUtf8("s"), QString::fromUtf8("sui"), QString::fromUtf8("夊芕尿虽浽荾哸倠隋眭睢滖熣鞖濉雖绥随遂遀綏隨髄瓍膸瀡髓亗岁砕祟谇埣嵗煫歲歳碎睟粹隧澻穂嬘賥誶燧檖禭璲穗穟邃襚繀繐繸旞譢鐆鐩韢荽") },
{ QString::fromUtf8("s"), QString::fromUtf8("sun"), QString::fromUtf8("孙狲荪孫飧飱猻搎蓀槂蕵薞笋损隼筍損榫箰簨鎨鶽潠") },
{ QString::fromUtf8("s"), QString::fromUtf8("suo"), QString::fromUtf8("莎莏唆娑挱桫梭挲傞睃嗍蓑羧摍缩趖簑簔縮鮻所唢索琐惢锁嗩溑暛褨瑣璅鎖鎻鎍鏁逤溹蜶琑嗦鱛") },

{ QString::fromUtf8("t"), QString::fromUtf8("ta"), QString::fromUtf8("他它她牠祂铊趿鉈溻塌榙禢褟踏溚塔墖獭鮙鳎獺鰨拓沓挞闼狧粏崉涾傝嗒遝阘搨漯毾榻澾撻誻錔橽嚃鞜蹋濌鞳闒蹹闥嚺譶躢侤萙遢燵襨鶎鱩") },
{ QString::fromUtf8("t"), QString::fromUtf8("tan"), QString::fromUtf8("坍贪怹痑啴舑貪滩摊嘽瘫潬擹攤灘癱坛昙郯倓谈弹婒埮惔覃锬痰榃谭潭憛墰墵談醈曇錟壇燂橝澹檀顃罈藫壜譚醰貚譠罎忐坦钽袒菼毯僋鉭嗿憳憻醓暺璮叹炭探湠嘆碳舕歎") },
{ QString::fromUtf8("t"), QString::fromUtf8("tai"), QString::fromUtf8("台囼孡苔胎邰旲坮骀抬炱炲菭跆鲐颱臺箈駘鮐儓薹擡嬯檯籉呔太夳冭汏汰汱忲肽态钛舦泰酞鈦溙態燤") },
{ QString::fromUtf8("t"), QString::fromUtf8("tao"), QString::fromUtf8("夲叨弢涛绦掏焘絛詜慆搯滔幍嫍槄瑫韬飸縚縧轁濤謟鞱韜饕迯匋洮逃咷陶桃梼萄淘绹啕祹裪蜪綯鞀鞉醄鋾駣騊饀鼗讨討套") },
{ QString::fromUtf8("t"), QString::fromUtf8("tang"), QString::fromUtf8("汤铴湯嘡羰劏蝪趟薚镗蹚鏜鞺鼞坣唐堂棠啺鄌傏蓎隚搪溏塘煻榶漟禟瑭膅膛磄糃樘橖糖螗篖踼赯醣螳糛鎕餹饄闛鶶伖帑倘偒淌惝傥耥躺镋鎲儻戃爣曭矘钂烫摥燙鐋") },
{ QString::fromUtf8("t"), QString::fromUtf8("te"), QString::fromUtf8("忑忒特铽慝鋱蟘朰扨脦罀") },
{ QString::fromUtf8("t"), QString::fromUtf8("teng"), QString::fromUtf8("膯鼟疼痋幐腾誊漛滕邆駦螣縢謄儯藤騰鰧籐籘虅驣霯") },
{ QString::fromUtf8("t"), QString::fromUtf8("tiao"), QString::fromUtf8("旫佻庣挑恌祧聎芀条苕迢岧岹祒條调萔笤蓚蓨龆樤蜩鋚鲦鞗髫鯈鎥齠鰷宨晀朓脁窕誂窱斢嬥眺粜絩覜趒跳糶") },
{ QString::fromUtf8("t"), QString::fromUtf8("tian"), QString::fromUtf8("天兲婖添酟靔黇靝田佃沺屇恬胋畋畑畠钿甜甛菾湉填塡嗔阗搷碵緂窴磌璳闐鷆鷏忝殄倎唺淟悿觍晪琠腆睓痶舔餂瑱賟覥錪掭舚鴫") },
{ QString::fromUtf8("t"), QString::fromUtf8("ti"), QString::fromUtf8("体剔梯锑踢銻擿鷉鷈厗荑绨偍媞崹提渧缇惿遆啼稊鹈罤题瑅綈嗁睼褆碮漽蕛徲緹醍趧蹄蹏鍗鳀謕鮷題鵜騠鶗鶙鯷禵鷤挮躰骵軆體戻屉洟剃俶倜逖涕悌惕屜掦逷啑笹悐惖替揥裼褅歒髰殢薙嚏鬀鬄瓋嚔籊趯") },
{ QString::fromUtf8("t"), QString::fromUtf8("tie"), QString::fromUtf8("帖怗贴萜聑貼铁蛈鉄銕僣鐡鐵驖呫飻餮") },
{ QString::fromUtf8("t"), QString::fromUtf8("tou"), QString::fromUtf8("偷偸媮婾鋀鍮亠头投骰頭妵紏敨黈蘣透") },
{ QString::fromUtf8("t"), QString::fromUtf8("tu"), QString::fromUtf8("凸宊秃禿怢突涋捸湥堗葖痜嶀鋵鵚鼵図图凃荼徒途庩峹捈涂悇梌屠菟揬稌瘏筡鈯嵞塗蒤腯廜潳瑹酴跿圖圗馟駼鍎鵌鶟鷋鷵土圡吐钍唋釷兎迌兔莵堍鵵汢溌") },
{ QString::fromUtf8("t"), QString::fromUtf8("tong"), QString::fromUtf8("恫炵通痌絧嗵蓪熥樋仝同彤佟侗庝峂峒峝哃狪茼垌烔晍桐浵砼蚒秱铜眮童粡赨詷酮鉖銅鉵餇鲖勭僮潼獞橦犝曈朣膧燑氃穜瞳鮦统捅桶統筒筩綂恸痛衕慟憅") },
{ QString::fromUtf8("t"), QString::fromUtf8("ting"), QString::fromUtf8("厅庁汀町听耓烃厛烴桯綎鞓聴聼廰聽廳邒廷莛庭亭停葶婷嵉渟蜓筳楟榳閮霆蝏聤諪鼮圢甼侹娗挺涏烶梃珽脡铤艇颋誔鋌頲") },
{ QString::fromUtf8("t"), QString::fromUtf8("tuan"), QString::fromUtf8("猯湍圕煓貒团団抟剸摶漙團慱槫篿檲鏄糰鷒鷻畽墥疃彖湪褖") },
{ QString::fromUtf8("t"), QString::fromUtf8("tun"), QString::fromUtf8("吞呑旽涒焞朜噋暾屯坉囤忳芚蛌軘豚豘飩鲀魨黗霕臀臋氽褪饨") },
{ QString::fromUtf8("t"), QString::fromUtf8("tui"), QString::fromUtf8("忒推蓷藬弚颓隤尵橔頹頺頽魋蘈穨蹪俀腿僓蹆骽侻退娧煺蜕蛻褪駾燵") },
{ QString::fromUtf8("t"), QString::fromUtf8("tuo"), QString::fromUtf8("乇仛讬饦托扡汑杔佗侂咜咃沰拖拕说侻莌捝挩袥託飥涶脱脫馲魠鮵阤驮陁陀驼狏岮沱坨柁鸵砣砤袉紽詑酡跎堶馱碢槖駄駝駞橐鴕鮀鼧鵎騨鼍驒驝鼉彵妥庹椭楕嫷橢鰖拓柝毤萚唾跅毻箨嶞魄蘀籜鵇") },

{ QString::fromUtf8("w"), QString::fromUtf8("wa"), QString::fromUtf8("屲凹穵劸洼哇挖娲窊畖窐媧啘嗗瓾蛙搲溛漥窪鼃韈攨娃瓦邷佤咓砙袜聉嗢腽膃襪韤瓸甅") },
{ QString::fromUtf8("w"), QString::fromUtf8("wai"), QString::fromUtf8("咼歪喎竵崴外顡") },
{ QString::fromUtf8("w"), QString::fromUtf8("wei"), QString::fromUtf8("厃危委威烓隈隇偎逶喴葳葨媙崴嵔揻揋愄溦椳楲詴煨微蜲蝛覣縅薇燰鳂癓鰃鰄巍霺囗为韦圩围囲闱违帏沩洈峗峞為韋桅涠帷唯维惟琟嵬媁圍喡幃違湋溈爲維潍鄬蓶潿潙醀鍏闈鮠濰壝矀覹犩欈伟伪苇芛尾纬炜玮洧浘娓荱诿隗偽偉萎崣梶痏硊骩骫骪愇猥渨蒍葦徫廆椲暐煒艉痿瑋韪腲鲔撱嶉僞寪蔿頠緯諉踓韑薳儰濻鍡鮪颹韙瀢韡亹斖卫未位苿味胃畏軎叞菋谓硙尉遗喂媦猬渭煟蔚碨蜼蝟磑犚慰緭熭衛衞餧鮇懀謂罻螱褽魏餵轊藯鏏鳚霨蘶饖讆躗躛讏捤墛嶶") },
{ QString::fromUtf8("w"), QString::fromUtf8("wang"), QString::fromUtf8("尢尣尪汪尫尩亾兦亡王仼莣蚟罓罒网彺往徃罔枉惘菵辋棢暀蛧蝄網輞誷魍瀇妄迋忘旺徍望朢") },
{ QString::fromUtf8("w"), QString::fromUtf8("wen"), QString::fromUtf8("昷温溫辒殟榅瑥瘟榲緼蕰豱輼轀鳁鞰鰛鰮文芠彣纹炆闻蚊蚉紋阌珳雯駇馼聞瘒鳼鴍魰螡閿閺闅蟁鼤繧闦刎伆吻呅抆呡肳紊桽脗稳穏穩问妏免汶莬問渂揾搵絻顐璺塭鎾饂") },
{ QString::fromUtf8("w"), QString::fromUtf8("wan"), QString::fromUtf8("涴弯剜帵婠湾塆睕蜿豌潫彎壪灣丸刓芄汍纨完岏抏玩紈捖顽貦烷頑翫宛倇莞挽盌唍绾埦惋梚菀萖婉脘晚晥晩晼琬皖椀碗畹綰綩輓踠鋔万卐卍忨妧捥脕腕萬蔓輐澫鋄錽薍瞣蟃贃鎫贎乛杤笂琓") },
{ QString::fromUtf8("w"), QString::fromUtf8("weng"), QString::fromUtf8("翁嗡滃鹟螉聬鎓鶲勜奣嵡蓊塕暡瞈攚瓮蕹甕罋齆") },
{ QString::fromUtf8("w"), QString::fromUtf8("wo"), QString::fromUtf8("挝涡倭莴萵唩猧渦涹窝喔窩蜗蝸踒我婑婐捰仴沃肟枂卧臥捾涴偓幄媉渥握焥硪楃腛斡瞃龌臒瓁濣齷遤") },
{ QString::fromUtf8("w"), QString::fromUtf8("wu"), QString::fromUtf8("兀乌邬弙污汙汚圬呜巫杇於屋洿诬钨恶烏剭窏鄔嗚誈誣歍箼螐鴮鎢鰞亡无毋芜吾吴吳呉郚茣莁唔娪峿浯洖梧祦珸铻鹀無蜈鋙蕪墲橆璑鵐蟱鯃譕鼯鷡五午伍仵迕妩庑怃忤玝武侮倵逜陚捂娒娬牾啎珷鹉碔摀熓瑦舞憮潕廡嫵儛甒瞴鵡躌兀勿阢务戊扤屼岉芴坞杌物忢旿矹卼敄俉误務悟悮悞粅晤焐痦婺隖骛嵍靰雾雺嵨奦溩塢鹜熃寤誤鋈窹霚鼿齀霧騖蘁鶩厼朰鯲") },

{ QString::fromUtf8("x"), QString::fromUtf8("xi"), QString::fromUtf8("夕兮邜吸汐忚西扸希卥析昔穸肸肹矽怸饻恓郗茜俙徆莃奚娭唏浠狶悕屖栖牺氥息悉硒琋赥釸欷晞桸惜烯焁焈淅渓唽菥傒鄎焟焬犀晰晳翕翖舾粞稀睎惁腊锡皙裼煕厀徯蒠溪嵠僖熙熈熄榽蜥緆餏覡豨瘜磎膝潝嘻噏嬉嬆凞樨橀暿歙熺熻熹螅螇窸羲錫貕蹊豯蟋谿豀瞦燨犠巂繥糦鵗譆醯觹鏭鐊隵酅巇嚱犧曦爔饎觽鼷鸂蠵觿鑴习郋席觋習袭喺媳蓆蒵椺嶍漝趘槢褶薂隰檄謵鎴鳛霫飁騱騽鰼襲驨洗枲玺铣徙喜葸葈鈢鉨鉩蓰漇屣憘歖禧憙諰謑縰壐蟢蹝璽鱚矖囍躧匸卌戏饩屃系呬细郄怬忥盻恄郤係咥屓绤欯阋細釳趇舄舃塈隙椞禊慀隟綌赩熂墍犔稧潟澙戯蕮覤縘黖戱戲磶虩餼鬩繫闟霼衋屭巪凩巼夞莻唟裃硳喸聢噺橲礂鯐") },
{ QString::fromUtf8("x"), QString::fromUtf8("xia"), QString::fromUtf8("呷虾谺閕傄颬煆瞎蝦鰕匣狎侠俠狭陜峡炠柙烚峽埉狹祫珨硖翈舺陿假葭硤遐筪瑕舝敮暇辖碬磍蕸縖赮魻霞鍜轄鎋黠騢鶷閜丅下吓疜夏唬厦睱諕懗罅夓鎼鏬圷梺") },
{ QString::fromUtf8("x"), QString::fromUtf8("xian"), QString::fromUtf8("仚仙屳纤先奾忺佡氙杴秈苮祆枮籼莶珗掀铦锨酰跹僊僲銛鲜嘕韯銽暹薟憸嬐鍁韱鮮褼繊蹮馦孅攕廯纎鶱躚襳纖鱻闲伭弦咁妶贤胘涎盷咸挦娴娹婱蚿絃衔舷閑閒蛝鹇痫湺啣嗛嫌甉銜誸賢羬稴澖憪嫻嫺撏諴醎輱癇癎瞯藖礥鹹麙贒鷼鷳鷴冼狝险洗显烍毨蚬崄険猃赻铣筅蜆跣禒搟尠尟銑箲險獫嶮獮藓鍌燹顕幰攇蘚櫶譣玁韅顯灦见县苋岘限现线臽県陥宪姭娊峴陷莧哯涀垷埳現晛馅羡缐睍絤腺粯塪献羨僩僴誢綫線鋧撊憲橺橌錎餡縣豏壏麲臔瀗獻糮霰鼸咞衘鑦") },
{ QString::fromUtf8("x"), QString::fromUtf8("xiang"), QString::fromUtf8("乡芗相香郷鄉鄊厢廂湘缃鄕葙萫薌箱緗膷襄麘忀骧欀瓖镶纕鑲驤瓨降佭详庠栙祥絴翔詳跭享亯响饷蚃晑飨想銄餉鲞鮝蠁鯗響饗饟鱶向姠巷项珦象項缿衖勨像嶑橡曏襐蟓嚮鐌鱌") },
{ QString::fromUtf8("x"), QString::fromUtf8("xiao"), QString::fromUtf8("灱灲肖枭呺哓削侾骁枵绡庨烋宵宯逍消鸮虓婋猇萧梟焇销痚痟翛硝硣窙蛸綃揱箫嘐潇踃歊銷霄獢撨嘵憢膮蕭彇颵魈鴞鴵簘蟏蟂藃穘嚣瀟蟰簫髇櫹囂嚻髐鷍驍蠨毊虈洨郩崤淆訤殽誵小晓暁筱筿皛篠謏曉皢孝効恔咲哮涍俲笑校效啸傚敩詨誟嘨嘋嘯熽歗斆斅﨧") },
{ QString::fromUtf8("x"), QString::fromUtf8("xing"), QString::fromUtf8("兴狌星垶骍猩惺煋瑆腥觪篂箵鮏興觲騂曐皨鯹刑邢饧行陉形侀郉陘荥洐型钘娙铏硎鈃蛵滎銒鉶鋞餳省睲醒擤杏性幸姓荇莕倖婞悻涬葕緈﨨嬹臖哘謃") },
{ QString::fromUtf8("x"), QString::fromUtf8("xin"), QString::fromUtf8("忄心邤辛芯妡忻炘杺欣昕盺莘俽惞訢鈊锌歆新廞鋅噷嬜薪馨鑫馫枔镡襑鐔伈阠伩囟孞信軐訫脪衅焮馸顖舋釁") },
{ QString::fromUtf8("x"), QString::fromUtf8("xie"), QString::fromUtf8("些娎猲揳楔歇蝎蠍叶邪劦协旪胁協奊垥恊峫挟拹挾脇脋脅衺斜谐偕絜翓綊瑎愶嗋携熁膎鲑鞋蝢緳缬撷擕縀勰諧燲嚡擷鞵襭攜孈讗龤写血冩寫藛伳灺绁泄泻祄缷洩炧炨契卸卨屑烲禼徢偰偞焎紲械絏絬亵谢屟媟渫塮僁解靾榭榍褉暬緤噧屧獬嶰澥懈廨邂薤薢糏韰謝褻燮夑瀉鞢齘繲蟹蠏瀣爕齛齥纈齂躞") },
{ QString::fromUtf8("x"), QString::fromUtf8("xiong"), QString::fromUtf8("匂凶兄兇匈讻芎忷汹洶恟哅胸胷訩詾賯雄熊熋焸焽诇詗夐敻楿") },
{ QString::fromUtf8("x"), QString::fromUtf8("xu"), QString::fromUtf8("吁圩戌盱疞砉欨胥须顼訏許裇虚虗偦谞媭揟湑欻虛須綇楈需魆墟嘘噓蕦嬃歔縃緰蝑諝歘燸譃魖繻驉鬚鑐俆徐冔禑蒣许诩呴姁浒栩珝喣暊詡稰鄦糈諿醑盨旭旴伵芧序汿侐卹怴沀恤昫叙洫晇殈烅珬垿欰畜酗烼绪续敍敘勖勗溆婿壻聓訹絮朂続賉頊滀蓄慉煦槒漵潊銊聟緒盢瞁稸魣緖獝藇藚續鱮﨏蓿") },
{ QString::fromUtf8("x"), QString::fromUtf8("xiu"), QString::fromUtf8("休俢修庥咻脩烌羞脙鸺臹貅馐髤銝樇髹鵂鎀鏅饈鱃飍苬朽宿滫潃糔秀岫峀绣珛袖臭琇锈綉溴嗅璓褏褎銹螑繍嚊繡鏥鏽齅鮴") },
{ QString::fromUtf8("x"), QString::fromUtf8("xue"), QString::fromUtf8("削疶蒆靴薛辥辪鞾穴斈乴茓峃学泶鸴袕踅學嶨壆噱燢澩觷鷽彐雪鳕鱈吷狘岤坹桖谑趐謔瞲瀥樰膤轌") },
{ QString::fromUtf8("x"), QString::fromUtf8("xuan"), QString::fromUtf8("吅轩昍宣弲晅軒梋谖萱萲喧媗揎塇愃愋煖煊蓒暄瑄睻蝖禤箮翧儇鋗鞙蕿嬛懁諠諼駽鍹翾蠉矎蘐藼譞玄县玹痃悬琁旋蜁嫙漩璇暶檈璿懸咺选烜選癣癬券泫怰炫昡绚眩铉袨琄眴衒渲絢楦楥鉉碹蔙镟颴縼繏鏇贙") },
{ QString::fromUtf8("x"), QString::fromUtf8("xun"), QString::fromUtf8("坃勋荤埙焄勛塤熏窨勲勳薫薰壎獯曛臐燻蘍矄纁爋壦醺廵巡寻旬杊郇询畃荨荀浔洵峋恂紃珣栒桪毥偱循尋揗詢鲟鄩噚潭潯駨璕攳燖燅樳蟳鱏鱘灥卂讯训迅伨驯汛侚狥逊迿巺徇殉訊訓訙浚奞殾巽稄馴遜愻蕈噀顨鑂嚑") },

{ QString::fromUtf8("y"), QString::fromUtf8("ya"), QString::fromUtf8("ㄚ丫圧吖压厌呀庘押枒鸦哑鸭桠孲铔雅椏鴉鴨錏壓鵶鐚牙伢芽岈厓玡琊蚜笌堐猚崖崕涯釾睚衙漄齖疋厊庌疨唖啞痖瘂蕥劜圠轧覀襾冴亚讶迓亜犽亞軋砑挜娅垭俹氩掗訝埡婭猰聐揠氬稏圔窫齾鯲鑓軈") },
{ QString::fromUtf8("y"), QString::fromUtf8("yan"), QString::fromUtf8("咽恹烟殷珚胭焉淹淊阏阉崦湮腌硽煙歅鄢傿嫣漹嶖醃閹燕懨嬮篶懕臙黫讠延闫妍芫严阽言訁郔岩沿炎炏昖狿埏莚姸娫研铅盐娮阎啱琂硏訮閆蜒綖筵嵒嵓喦塩揅楌詽碞蔅颜虤閻厳檐顔顏簷壛巌嚴櫩巖巗壧鹽礹麣夵抁沇奄乵兖兗匽弇俨衍剡眼酓偃掩郾厣萒遃隒嵃揜渰渷扊棪愝晻琰罨裺椼演嵼褗蝘魇戭噞躽縯黡檿厴黤甗鶠鰋龑黭黬儼孍顩鼴鼹魘巘巚曮齴黶厌妟觃牪砚姲彦彥烻唁验宴艳晏覎偐谚隁焔焰焱堰喭雁敥猒硯椻鳫滟溎墕熖厭酽暥鴈谳嬊餍燄赝鬳諺鴳曕嚈酀騐験艶贋嚥嬿爓曣騴醶齞鷃贗灔囐鷰驗醼讌觾饜艷釅驠灎灧讞豓豔灩剦樮軅") },
{ QString::fromUtf8("y"), QString::fromUtf8("yao"), QString::fromUtf8("幺夭吆约妖殀祅要訞喓葽楆腰鴁鴢徼邀爻尧尭肴侥荛姚峣轺垚烑陶倄珧窑铫堯揺傜谣軺滧徭遥遙嗂媱猺摇搖愮摿榣暚飖瑶瑤餆窯窰磘嶢嶤餚繇謡謠鎐鳐颻蘨邎顤鰩鱙仸宎岆抭杳枖狕苭咬柼眑窅窈舀偠婹崾溔蓔榚闄騕齩鷕疟穾药钥袎窔葯筄詏靿覞熎鹞獟鼼薬藥燿曜艞矅耀纅鷂讑") },
{ QString::fromUtf8("y"), QString::fromUtf8("yang"), QString::fromUtf8("央姎抰泱殃胦秧眏鸯鉠雵鞅鴦鍈阳阦扬羊飏炀杨旸钖疡氜劷佯徉洋垟昜羏珜烊陽眻蛘揚崵崸煬楊敭瑒暘瘍輰諹鍚鴹颺鰑霷鸉卬仰佒咉岟坱炴柍养氧痒紻軮楧傟慃氱飬蝆養駚懩攁瀁癢怏恙样羕詇漾様樣礢") },
{ QString::fromUtf8("y"), QString::fromUtf8("ye"), QString::fromUtf8("吔耶倻掖椰暍歋潱噎擨蠮邪爷捓揶铘爺瑘鋣鎁ㄝ也冶野埜嘢漜壄业叶曳页曵邺抴夜枼拽亱咽頁捙枽烨晔液谒葉腋殗業煠馌墷璍僷燁曅曄皣瞱擛鄴靥餣謁嶪嶫澲擫瞸曗鍱鎑饁擪礏爗鵺鐷靨驜鸈丆亪") },
{ QString::fromUtf8("y"), QString::fromUtf8("yi"), QString::fromUtf8("一弌衤伊衣医吚壱依祎洢咿郼渏悘铱猗蛜壹揖椅禕漪稦銥嫛嬄撎夁噫瑿鹥繄檥檹醫毉黟譩鷖黳乁义匜仪夷圯宐诒冝杝沂沶侇迤宜狋怡饴拸姨恞贻峓迻荑瓵珆咦訑貤胰栘桋巸眙袘宧扅萓蛇痍移椬蛦貽詒羠遗媐颐飴頉誃跠椸暆疑熪遺儀彛彜嶬螔頤頥顊鴺鮧簃嶷寲彝彞謻鏔籎觺讉乙已以迆钇攺矣苡佁尾苢迱庡舣蚁釔笖酏扆逘倚偯旑崺鈘鉯鳦裿蛾旖踦輢螘敼嬟礒蟻艤顗轙齮乂亿弋刈艺忆艾阣仡议肊伇芅亦异忔屹抑坄呓劮役苅佚译耴杙邑枍炈易衪秇诣佾呹呭驿泆怿怈绎峄浂帟帠俋弈奕疫羿昳玴轶枻食栧欭袣益谊唈浥浳挹悒垼埸埶逸勚萟殹翊翌悥豙豛異訲訳隿釴羛鈠軼骮跇詍晹敡殔棭焲蛡鄓湙幆嗌溢缢兿義亄睪獈竩痬意詣肄裔裛駅榏瘗膉蜴蓺勩廙嫕潩億鹝鹢毅镒瘞槸熠熤熼篒誼黓艗燚曀殪瘱瞖穓螠褹縊劓薏澺嬑嶧墿圛懌憶寱翳翼臆斁歝曎燡燱檍賹貖鮨鎰贀镱癔藝藙繹繶豷霬鯣鶂鶃饐醷醳譯議蘙瀷囈鐿鷊鷁懿襼鷧驛鷾鸃虉齸讛辷匇凧弬夞畩鶍鶎") },
{ QString::fromUtf8("y"), QString::fromUtf8("yin"), QString::fromUtf8("囙因阴阥侌茵骃姻洇垔音栶氤殷陰隂陻凐秵铟裀絪筃堙愔喑婣溵蔭蒑禋慇瘖銦鞇磤緸諲霒駰霠闉噾濦齗韾冘乑吟犾圻烎斦泿垠圁狺峾荶珢訚訔訡银淫寅婬崟崯鈝龂滛碒鄞蔩夤銀龈誾璌殥噖嚚蟫檭霪齦鷣廴引尹饮吲蚓隐赺鈏飲淾隠飮靷輑朄趛瘾檃隱嶾濥螾檼蘟櫽癮讔印茚荫洕胤垽堷湚猌廕窨酳癊慭憖憗鮣懚岃粌") },
{ QString::fromUtf8("y"), QString::fromUtf8("ying"), QString::fromUtf8("应応英莺珱偀渶绬婴媖瑛煐朠锳碤嫈嘤缨撄甇緓蝧罂賏樱璎鹦噟霙罃褮鴬韺嬰膺應鹰甖鶑鶧罌譍孆嚶攖蘡孾瀴櫻瓔礯譻鶯鑍鷪蠳纓鷹鸎鸚迎盁茔荥荧盈莹萤营萦蛍営萾溁溋滢蓥塋楹僌颖熒蝇潆蝿禜瑩螢營嬴縈覮謍赢濙濚濴藀瀅蠅鎣巆攍瀛瀯瀠贏櫿灐籝灜籯郢矨浧梬颍颕摬影潁穎瘿頴鐛廮巊癭映暎硬媵膡鱦栍桜愥闏") },
{ QString::fromUtf8("y"), QString::fromUtf8("yo"), QString::fromUtf8("育哟唷喲罀") },
{ QString::fromUtf8("y"), QString::fromUtf8("yong"), QString::fromUtf8("佣拥邕痈庸傭嗈鄘雍嫞滽墉慵牅壅澭擁噰镛郺臃癕雝鳙鏞灉廱饔鷛鱅癰喁颙顒鰫永甬咏泳勇勈俑栐柡悀涌埇恿惥愑湧詠硧蛹塎嵱彮愹慂踊鲬踴鯒用苚蒏醟怺砽") },
{ QString::fromUtf8("y"), QString::fromUtf8("you"), QString::fromUtf8("优忧攸怮呦泑幽峳浟逌悠麀羪滺憂鄾優瀀嚘懮櫌耰纋尢尤由甴沋邮犹油怞肬怣疣柚庮郵莜莸秞铀蚰訧偤逰遊猶游鱿鲉鈾楢猷輏駀魷蝤蝣蕕鮋輶繇友有酉丣卣苃羑莠栯梄铕聈湵蜏禉銪槱牖牗黝又右幼佑侑狖峟囿牰祐迶哊宥姷诱唀蚴亴釉貁酭誘褎鼬櫾孧") },
{ QString::fromUtf8("y"), QString::fromUtf8("yue"), QString::fromUtf8("曰曱约約箹矱哕噦月乐戉刖妜岄抈礿玥泧岳说恱栎钥钺蚏蚎阅軏悦悅捳跃跀鈅越粤粵鉞閲閱篗樾嬳嶽龠籆蘥瀹黦躍爚禴籥鑰鸑籰鸙") },
{ QString::fromUtf8("y"), QString::fromUtf8("yuan"), QString::fromUtf8("囦肙鸢剈冤鸳眢寃涴渊渁渆渕淵葾惌蒬棩鹓裷蜎箢鳶駌蜵鴛鵷嬽灁鼘鼝元円邧贠沅园芫员茒杬垣爰貟笎蚖袁圆原員厡媛猨援圎湲鼋缘鈨源溒園圓塬猿嫄媴蒝辕榞榬緣魭縁褤蝯蝝螈黿羱薗橼圜轅謜鎱櫞邍騵鶢鶰厵远盶逺遠鋺夗苑妴院怨衏垸傆掾禐瑗愿裫褑噮願") },
{ QString::fromUtf8("y"), QString::fromUtf8("yu"), QString::fromUtf8("込迂迃吁扝扜纡於穻陓紆盓菸淤唹瘀箊与于亐予邘伃余妤扵杅欤玙玗盂衧臾鱼舁竽虶禺茰俞兪谀娱娛娯馀狳桙酑雩魚渔萸隅隃萮渝湡揄堣堬嵎嵛崳逾喁楰愉腴畬骬虞艅觎愚瑜歈榆楡牏舆窬睮褕漁蕍蝓歶雓餘諛羭踰覦嬩澞璵歟螸輿鍝謣髃鮽騟籅旟轝蘛鰅鷠鸆齵屿宇伛羽妪雨俣俁语挧禹圄祤圉敔匬鄅偊庾萭斞铻瘐楀與瑀傴寙語窳頨龉貐懙噳嶼斔穥麌齬肀驭玉聿芋芌圫饫汩忬谷欥育郁茟狱秗昱浴峪彧俼预钰砡粖袬谕逳菀尉阈淯淢惐悆欲域堉棫棛棜琙焴寓媀喻喅喩庽御遇馭飫粥鹆硲硢矞裕鈺誉罭預蓣蒮煜滪愈稢戫蔚僪隩嶎獄嫗緎蜮蜟毓瘉銉輍豫鋊鳿遹薁蓹熨潏稶慾澦燠燏蕷鴥鴪鴧錥諭閾礇禦鹬魊儥鵒礜癒醧篽饇櫲蘌霱譽鐭雤鬻驈欎鷸鱊籞鸒欝龥鬰鬱籲灪爩礖軉") },
{ QString::fromUtf8("y"), QString::fromUtf8("yun"), QString::fromUtf8("晕蒀缊蒕煴氲氳熅奫蝹赟馧贇匀勻云伝芸员妘沄纭囩昀秐眃畇郧涢耺耘紜雲鄖蒷溳愪筠筼熉澐蕓鋆篔縜橒允阭狁抎夽陨荺殒隕喗鈗馻殞磒賱霣齫齳孕运郓枟恽酝鄆傊運愠惲慍暈韫腪韵褞熨蕴薀縕醖醞餫韞韗藴蘊韻抣") },

{ QString::fromUtf8("z"), QString::fromUtf8("za"), QString::fromUtf8("帀扎匝沞咂拶桚鉔魳臜臢杂沯砸韴雑襍雜囃囋雥咋乽橴") },
{ QString::fromUtf8("z"), QString::fromUtf8("zan"), QString::fromUtf8("兂糌橵篸簪簮鵤鐟鐕咱偺喒拶昝寁揝撍噆儧攅攒儹攢趱趲暂暫賛赞錾鄼酂濽蹔鏨贊瓉瓒酇囋灒讃瓚禶襸讚饡") },
{ QString::fromUtf8("z"), QString::fromUtf8("zao"), QString::fromUtf8("傮遭糟醩蹧凿鑿早枣蚤棗澡璪薻藻灶皂皁造唣唕梍慥煰喿艁簉噪燥竃竈譟趮躁栆") },
{ QString::fromUtf8("z"), QString::fromUtf8("zang"), QString::fromUtf8("匨赃牂脏羘賍賘臧贓髒贜驵駔奘弉塟葬蔵銺藏臓臟欌") },
{ QString::fromUtf8("z"), QString::fromUtf8("zai"), QString::fromUtf8("灾災甾哉烖栽渽溨睵賳仔宰载崽再扗在洅傤載酨儎縡岾") },
{ QString::fromUtf8("z"), QString::fromUtf8("ze"), QString::fromUtf8("则沢泽泎责迮咋择則帻啧啫舴笮責矠滜溭箦嘖嫧幘蔶赜樍歵諎擇瞔皟簀賾礋襗謮蠌齚齰鸅仄庂汄昃昗侧捑崱択硳") },
{ QString::fromUtf8("z"), QString::fromUtf8("zeng"), QString::fromUtf8("曽曾増鄫缯增憎橧璔磳矰罾繒譄综锃鋥赠熷甑鬵贈囎") },
{ QString::fromUtf8("z"), QString::fromUtf8("zen"), QString::fromUtf8("怎谮譖") },
{ QString::fromUtf8("z"), QString::fromUtf8("zei"), QString::fromUtf8("贼戝賊鲗蠈鰂鱡") },
{ QString::fromUtf8("z"), QString::fromUtf8("zha"), QString::fromUtf8("扎吒咋抯挓查柤奓紥哳偧紮渣溠喳猹揸楂劄摣皶觰樝皻譇齄齇轧札闸炸铡蚻喋牐閘箚耫鍘譗厏苲拃眨砟鲊鲝鮓鮺乍诈灹咤栅柞痄宱蚱詐搾槎榨蜡霅醡蓙") },
{ QString::fromUtf8("z"), QString::fromUtf8("zhai"), QString::fromUtf8("侧夈捚斋斎摘榸齋宅择翟檡窄鉙责柴债砦祭債寨粂瘵") },
{ QString::fromUtf8("z"), QString::fromUtf8("zhan"), QString::fromUtf8("占沾枬毡旃栴蛅粘飦趈詀惉詹閚谵薝邅噡嶦霑氊氈瞻鹯旜譫饘鳣魙驙鸇鱣讝斩飐盏展崭斬琖盞搌辗嶄嶃榐颭醆嫸橏輾黵佔战栈桟站绽偡菚湛棧戦綻輚嶘戰虥虦襢覱轏譧驏蘸") },
{ QString::fromUtf8("z"), QString::fromUtf8("zhao"), QString::fromUtf8("佋钊妱招巶昭釗着啁朝鉊鼌駋嘲鍣皽爫爪找沼瑵召兆诏枛炤狣垗赵笊肁棹旐詔罩照肇肈箌趙曌燳鮡瞾櫂羄罀") },
{ QString::fromUtf8("z"), QString::fromUtf8("zhang"), QString::fromUtf8("仉张張章鄣傽蔁遧粻嫜獐彰漳慞樟暲璋餦蟑騿麞鱆长涨掌漲礃丈仗扙帐杖胀账涱帳脹障痮幛嶂墇賬瘴瘬瞕粀幥鏱") },
{ QString::fromUtf8("z"), QString::fromUtf8("zhe"), QString::fromUtf8("折蜇遮嗻嫬螫厇歽矺砓虴籷袩埑哲啠辄晢晣悊喆詟蛰谪摺輒輙銸磔辙蟄鮿謫謺嚞轍讁讋者锗褚赭踷鍺褶襵这柘這浙淛蔗樜鹧蟅鷓粍") },
{ QString::fromUtf8("z"), QString::fromUtf8("zhei"), QString::fromUtf8("这") },
{ QString::fromUtf8("z"), QString::fromUtf8("zhong"), QString::fromUtf8("中伀汷彸刣忪妐炂忠泈终钟柊盅衳舯衷終鈡蜙锺幒蔠銿鴤螤螽鍾鼨蹱鐘籦肿种冢喠尰煄腫歱塚種瘇徸踵众仲妕狆祌衶重茽蚛眾偅堹媑筗衆諥") },
{ QString::fromUtf8("z"), QString::fromUtf8("zheng"), QString::fromUtf8("丁正争佂诤征姃怔爭糽埩炡政挣狰峥烝脀钲眐症聇睁铮掙崝崢猙揁媜筝踭鉦睜徰蒸錚箏篜鲭鬇癥鏳氶抍拯掟晸愸撜整证郑証幁塣諍靕鄭鴊證") },
{ QString::fromUtf8("z"), QString::fromUtf8("zhi"), QString::fromUtf8("之氏支只卮汁芝汦汥吱巵知肢泜织枝栀祗胝胑秓衼疷隻脂祬栺倁梔椥臸綕禔稙搘馶蜘榰憄鳷鴲織鼅蘵执侄妷直姪值値聀釞职淔埴執殖戠植犆禃跖絷瓡馽摭潪嬂漐慹踯膱樴縶蹢蹠職蟙軄躑夂止阯劧旨帋芷扺沚纸址坁坧抧茋祉秖恉轵枳砋衹咫指洔淽茝紙疻訨趾黹軹酯徴墌徵藢襧芖至豸扻伿识忮志炙质治垁郅迣厔制帜帙挃庢庤陟峙洷栉柣祑挚桎晊歭秩贽轾徏娡狾致袟紩畤窒痔痓铚鸷貭翐觗袠猘徝掷乿剬偫秷梽智滞崻傂骘痣彘蛭置锧跱輊筫雉寘搱廌滍稚滯墆銍製覟誌瘈疐觯踬質鋕熫稺膣摯摨幟擳隲璏旘瀄鴙駤緻螲懥櫛穉儨劕擿擲懫贄觶騭鯯櫍瓆豑礩騺驇鷙躓鑕豒俧潌") },
{ QString::fromUtf8("z"), QString::fromUtf8("zhou"), QString::fromUtf8("州舟诌侜周洲诪炿烐珘调郮辀婤淍啁週徟鸼矪粥喌赒輈銂輖賙霌鵃謅盩嚋騆譸妯轴軸肘疛帚菷晭睭箒鯞纣伷咒呪绉宙冑祝昼咮荮紂胄皱酎粙舳晝葤詋甃僽駎皺縐噣骤繇籀籕籒驟碡駲") },
{ QString::fromUtf8("z"), QString::fromUtf8("zhua"), QString::fromUtf8("抓挝撾檛膼簻髽爪") },
{ QString::fromUtf8("z"), QString::fromUtf8("zhu"), QString::fromUtf8("朱邾侏诛茱洙诸珠株猪秼铢硃袾蛛絑誅跦銖槠蝫潴蕏橥諸豬駯鴸鮢鼄藸瀦鯺櫫櫧蠩术竹竺笁柚茿炢烛逐窋笜逫蓫瘃篴燭蠋躅鱁劚孎灟爥斸欘曯蠾钃丶主劯宔拄柱罜陼帾渚煮煑属詝褚濐嘱燝麈瞩囑鸀矚宁伫住佇芧苎助纻坾贮驻迬杼拀注祝柷炷殶壴莇祩竚眝疰砫蛀紵紸著庶羜铸筑貯軴註跓嵀鉒筯飳馵箸翥樦鋳駐麆築篫簗鑄墸") },
{ QString::fromUtf8("z"), QString::fromUtf8("zhen"), QString::fromUtf8("贞针侦帧浈胗珍珎貞針祯桢真眞砧帪偵酙葴幀寊湞遉斟溱嫃獉搸蓁蒖甄椹楨禎鉁禛瑧榛碪殝潧箴臻樼澵薽錱轃鍼籈鱵诊枕抮轸昣弫姫屒眕疹畛袗聄紾裖軫覙診缜駗稹縝縥辴鬒黰阵圳纼甽鸩陣侲挋振栚朕紖眹赈塦揕絼賑誫镇震鴆鎭鎮鋴") },
{ QString::fromUtf8("z"), QString::fromUtf8("zhuai"), QString::fromUtf8("拽转跩") },
{ QString::fromUtf8("z"), QString::fromUtf8("zhui"), QString::fromUtf8("隹追骓椎锥錐騅鵻沝坠笍娷缀缒甀腏惴畷膇硾墜綴赘縋諈醊錣礈贅鑆") },
{ QString::fromUtf8("z"), QString::fromUtf8("zhuang"), QString::fromUtf8("庄妆妝庒荘莊娤桩梉粧装湷裝樁糚奘壮壯状狀壵焋僮幢撞戆") },
{ QString::fromUtf8("z"), QString::fromUtf8("zhuan"), QString::fromUtf8("专叀専砖專鄟嫥塼甎瑼膞磗颛磚諯顓蟤鱄转孨竱轉传沌灷啭転堟蒃瑑腞赚僎馔撰篆篹襈縳賺譔饌籑囀") },
{ QString::fromUtf8("z"), QString::fromUtf8("zhun"), QString::fromUtf8("屯迍宒肫窀谆啍諄衠准埻凖準綧訰稕") },
{ QString::fromUtf8("z"), QString::fromUtf8("zhuo"), QString::fromUtf8("拙炪捉倬桌棁梲涿棳焯槕穛擢鐯穱彴犳汋圴灼妰卓叕茁浊斫烵浞诼丵酌娺啄啅着椓晫斮斱琢琸硺罬窡禚斲撯擆劅諑諁鋜篧缴濁濯斵斀謶镯櫡鵫躅蠗灂鐲鷟籗蠿籱窧") },
{ QString::fromUtf8("z"), QString::fromUtf8("zou"), QString::fromUtf8("邹驺陬郰诹菆掫棷棸鄒緅箃諏鲰鄹黀鯫騶齱齺赱走奏揍") },
{ QString::fromUtf8("z"), QString::fromUtf8("zong"), QString::fromUtf8("宗枞倧骔综堫惾腙葼猣嵏嵕棕椶朡稯嵸潈綜緃翪踪踨緵熧蝬磫繌鍐鬃騌蹤騣鯮鬉鬷鯼鑁总倊偬捴揔搃惣焧傯蓗摠総縂緫燪總纵昮疭猔碂粽糉瘲縦縱豵糭") },
{ QString::fromUtf8("z"), QString::fromUtf8("zi"), QString::fromUtf8("仔孖孜吱甾茊茲兹姿姕咨赀资玆栥紎赼缁秶崰淄谘菑葘鄑滋湽嵫椔粢辎嗞孳孶锱禌趑觜訾資貲緇緕龇鈭稵镃輜鼒鲻髭輺錙諮趦澬鍿鎡頾頿齍鶅鯔鰦纃齜蓻子吇杍姊姉胏秄矷虸耔籽秭呰茈笫釨梓啙紫滓訿榟字芓自荢茡剚倳牸恣眦眥渍胾胔漬嗭魸鯑") },
{ QString::fromUtf8("z"), QString::fromUtf8("zu"), QString::fromUtf8("苴租菹葅蒩卆足卒哫崒崪族椊箤踤镞鏃阻诅组祖珇爼俎唨組詛靻鼡乼") },
{ QString::fromUtf8("z"), QString::fromUtf8("zun"), QString::fromUtf8("尊嶟遵樽罇繜鐏鳟鷷鱒僔噂撙譐捘銌") },
{ QString::fromUtf8("z"), QString::fromUtf8("zui"), QString::fromUtf8("咀厜脧嗺樶蟕纗觜嶊嘴噿璻栬冣絊酔晬祽最稡罪辠酻槜醉蕞嶵鋷錊檇檌") },
{ QString::fromUtf8("z"), QString::fromUtf8("zuan"), QString::fromUtf8("钻鉆劗鑚躜躦鑽篹繤缵纂纉纘籫赚攥") },
{ QString::fromUtf8("z"), QString::fromUtf8("zuo"), QString::fromUtf8("作嘬穝昨莋秨笮捽琢筰鈼稓左佐撮繓阼坐怍岞岝侳祚胙袏座唑做葃葄飵糳咗") }

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
        QString::fromUtf8("欧阳") , QString::fromUtf8("太史") , QString::fromUtf8("端木") , QString::fromUtf8("上官") , QString::fromUtf8("司马") , QString::fromUtf8("东方") , QString::fromUtf8("独孤") , QString::fromUtf8("南宫") , QString::fromUtf8("万俟") , QString::fromUtf8("闻人") ,
        QString::fromUtf8("夏侯") , QString::fromUtf8("诸葛") , QString::fromUtf8("尉迟") , QString::fromUtf8("公羊") , QString::fromUtf8("赫连") , QString::fromUtf8("澹台") , QString::fromUtf8("皇甫") , QString::fromUtf8("宗政") , QString::fromUtf8("濮阳") , QString::fromUtf8("公冶") ,
        QString::fromUtf8("太叔") , QString::fromUtf8("申屠") , QString::fromUtf8("公孙") , QString::fromUtf8("慕容") , QString::fromUtf8("仲孙") , QString::fromUtf8("钟离") , QString::fromUtf8("长孙") , QString::fromUtf8("宇文") , QString::fromUtf8("司徒") , QString::fromUtf8("鲜于") ,
        QString::fromUtf8("司空") , QString::fromUtf8("闾丘") , QString::fromUtf8("子车") , QString::fromUtf8("亓官") , QString::fromUtf8("司寇") , QString::fromUtf8("巫马") , QString::fromUtf8("公西") , QString::fromUtf8("颛孙") , QString::fromUtf8("壤驷") , QString::fromUtf8("公良") ,
        QString::fromUtf8("漆雕") , QString::fromUtf8("乐正") , QString::fromUtf8("宰父") , QString::fromUtf8("谷梁") , QString::fromUtf8("拓跋") , QString::fromUtf8("夹谷") , QString::fromUtf8("轩辕") , QString::fromUtf8("令狐") , QString::fromUtf8("段干") , QString::fromUtf8("百里") ,
        QString::fromUtf8("呼延") , QString::fromUtf8("东郭") , QString::fromUtf8("南门") , QString::fromUtf8("羊舌") , QString::fromUtf8("微生") , QString::fromUtf8("公户") , QString::fromUtf8("公玉") , QString::fromUtf8("公仪") , QString::fromUtf8("梁丘") , QString::fromUtf8("公仲") ,
        QString::fromUtf8("公上") , QString::fromUtf8("公门") , QString::fromUtf8("公山") , QString::fromUtf8("公坚") , QString::fromUtf8("左丘") , QString::fromUtf8("公伯") , QString::fromUtf8("西门") , QString::fromUtf8("公祖") , QString::fromUtf8("第五") , QString::fromUtf8("公乘") ,
        QString::fromUtf8("贯丘") , QString::fromUtf8("公皙") , QString::fromUtf8("南荣") , QString::fromUtf8("东里") , QString::fromUtf8("东宫") , QString::fromUtf8("仲长") , QString::fromUtf8("子书") , QString::fromUtf8("子桑") , QString::fromUtf8("即墨") , QString::fromUtf8("达奚") ,
        QString::fromUtf8("褚师") , QString::fromUtf8("吴铭") , QString::fromUtf8("纳兰") , QString::fromUtf8("归海") , QString::fromUtf8("东皇") , QString::fromUtf8("泽翁") , QString::fromUtf8("阿扎") , QString::fromUtf8("泽朗") , QString::fromUtf8("索朗") , QString::fromUtf8("邓真")
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

