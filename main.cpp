
// Marvish Chandra

class FattyAcids{
    public:
    std::string acid;
    std::string structure;
    std::int meltingPoint;
    std::string saturatedPalmitic;
    std::string saturatedStearic;
    std::string unsaturatedOleic;
    std::string unsaturatedLinoleic;
    std::string otherPercent;
};

public static void fatty_acids_saturated(String[] args):
acid1.acid = "Lauric"
acid1.structure = "CH3(CH2)10COOH"
acid1.meltingPoint = 44
acid2.acid = "Palmitic"
acid2.structure = "CH3(CH2)14COOH"
acid2.meltingPoint = 63
acid3.acid = "Stearic"
acid3.structure = "CH3(CH2)16COOH"

public static void fatty_acids_unsaturated(String[] args):
acid4.acid = "Oleic"
acid4.structure = "CH3(CH2)7CH=CH(CH2)7COOH"
acid4.meltingPoint = 16
acid5.acid = "Linoleic"
acid5.structure = "CH3(CH2)4(CH=CHCH2)2(CH2)6COOH"
acid5.meltingPoint = -5
acid6.acid = "Linolenic"
acid6.structure = "CH3CH2(CH=CHCH2)3(CH2)6COOH"
acid6.meltingPoint = -11
acid7.acid = "Arachidonic"
acid7.structure = "CH3(CH2)4(CH=CHCH2)4(CH2)2COOH"
acid.meltingPoint = -50

class CommonFattyAcids{
    public:
    std::string chemical;
    std::int palmiticMP;
    std::int stearicMP;
    std::int oleicMP;
    std::int linoleicMP;
    std::int otherMP;
}

public static void saturatedFats(String[] args):
chemical1.chemical = "butter"
chemical1.palmiticMP = 29
chemical1.stearicMP = 9
chemical2.chemical = "lard"
chemical2.palmiticMP = 30
chemical2.stearicMP = 18
chemical3.chemical = "beef"
chemical3.palmiticMP = 32
chemical3.stearicMP = 25
chemical4.chemical = "corn oil"
chemical4.palmiticMP = 10
chemical4.stearicMP = 4
chemical5.chemical = "soybean"
chemical5.palmiticMP = 7
chemical5.stearicMP = 3
chemical6.chemical = "peanut"
chemical6.palmiticMP = 7
chemical6.stearicMP = 5
chemical7.chemical = "olive"
chemical7.palmiticMP = 6
chemical7.stearicMP = 4
public static void unsaturatedFats(String[] args):
chemical1.oleicMP = 27
chemical1.linoleicMP = 4
chemical1.otherMP = 31
chemical2.oleicMP = 41
chemical2.linoleicMP = 6
chemical2.otherMP = 5
chemical3.oleicMP = 38
chemical3.linoleicMP = 3
chemical3.otherMP = 2
chemical4.oleicMP = 34
chemical4.linoleicMP = 48
chemical4.otherMP = 4
chemical5.oleicMP = 25
chemical5.linoleicMP = 56
chemical5.otherMP = 9
chemical6.oleicMP = 60
chemical6.linoleicMP = 21
chemical6.otherMP = 7
chemical7.oleicMP = 83
chemical7.linoleicMP = 7

