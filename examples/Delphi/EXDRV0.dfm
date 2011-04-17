object Form1: TForm1
  Left = 258
  Top = 164
  Caption = 
    'Data Report View example - demonstrates drag & drop between two ' +
    'report views'
  ClientHeight = 448
  ClientWidth = 560
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = True
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 16
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 560
    Height = 26
    Align = alTop
    TabOrder = 1
    object OvcViewComboBox1: TOvcViewComboBox
      Left = 2
      Top = 3
      Width = 145
      Height = 22
      ReportView = OvcDataReportView1
      HotTrack = True
      ItemHeight = 16
      TabOrder = 0
    end
  end
  object OvcSplitter1: TOvcSplitter
    Left = 0
    Top = 26
    Width = 560
    Height = 422
    Orientation = soHorizontal
    Position = 210
    Align = alClient
    object SPL1OvcSplitter1Form1: TOvcSection
      object OvcDataReportView1: TOvcDataReportView
        Left = 0
        Top = 0
        Width = 557
        Height = 207
        ActiveView = 'View_1'
        Align = alClient
        Controller = OrController1
        DragMode = dmAutomatic
        Items.Data = {
          4F445244750300000E00000005000000416E64790008000000000000004028DF
          400A000000000000000000948E0F401000000053656E696F7220456E67696E65
          6572000100000001040000000200000007000000417374726964000800000000
          0000006068E0400A000000000000000000B8880E400A00000053656372657461
          727900010000000004000000010000000500000042696C6C0008000000000000
          00A0B4E0400A00000000000000000020CB0E4009000000456E67696E65657200
          010000000004000000020000000600000044616E6E79000800000000000000A0
          B4E0400A00000000000000000000FA0E4009000000456E67696E656572000100
          00000104000000020000000700000047656F726765000800000000000000A02B
          E0400A00000000000000000080BB0E40100000004A756E696F7220456E67696E
          65657200010000000004000000020000000600000048656E7279000800000000
          0000004010E1400A00000000000000000060EA0E4009000000456E67696E6565
          720001000000010400000002000000050000004A656666000800000000000000
          80C1DA400A00000000000000000060EA0F400400000043454F00010000000004
          00000000000000060000004A6572727900080000000000000060F2E0400A0000
          0000000000000070940E400A000000417373697374616E740001000000010400
          000002000000040000004A696D000800000000000000C083DF400A0000000000
          00000000409C0F40080000004D616E6167657200010000000104000000010000
          00050000004A6F686E000800000000000000C060DE400A000000000000000000
          50C30F40090000004469726563746F7200010000000104000000020000000600
          00004A756C696500080000000000000000C0E0400A00000000000000000008CF
          0E40070000005772697465720001000000000400000001000000060000004C61
          727279000800000000000000A06BE1400A00000000000000000010A40E401000
          00004A756E696F7220456E67696E656572000100000000040000000200000005
          0000004D696B65000800000000000000807AE1400A000000000000000000409C
          0C4007000000496E7465726E0001000000000400000001000000060000005361
          6C6C7900080000000000000000CEDF400A00000000000000000028A00E400A00
          0000417373697374616E740001000000000400000001000000}
        KeySearch = True
        Options.ListBorderStyle = bsNone
        TabOrder = 0
        OnDragDrop = OvcDataReportView1DragDrop
        OnDragOver = OvcDataReportView1DragOver
        object EmpName: TOvcDataRvField
          Caption = 'Name'
          NoDesign = True
        end
        object EmpDate: TOvcDataRvField
          Caption = 'Date Hired'
          DataType = dtDateTime
          NoDesign = True
          Format = 'yyyy-mm-dd'
        end
        object EmpSalary: TOvcDataRvField
          Alignment = taRightJustify
          Caption = 'Salary'
          DataType = dtFloat
          NoDesign = True
          Format = '###,###,##0.00'
        end
        object EmpTitle: TOvcDataRvField
          Caption = 'Title'
          NoDesign = True
        end
        object EmpReview: TOvcDataRvField
          Caption = 'Review Pend.'
          DataType = dtBoolean
          NoDesign = True
        end
        object EmpDep: TOvcDataRvField
          Alignment = taRightJustify
          Caption = 'Dep.'
          DataType = dtInteger
          NoDesign = True
        end
        object Salary_By_Department: TOvcRVView
          ShowGroupTotals = True
          ShowFooter = True
          Title = 'Salary By Department'
          object Salary_By_Department_EmpDep: TOvcRvViewField
            Width = 17
            FieldName = 'EmpDep'
            GroupBy = True
          end
          object Salary_By_Department_EmpName: TOvcRvViewField
            Width = 89
            FieldName = 'EmpName'
          end
          object Salary_By_Department_EmpDate: TOvcRvViewField
            Width = 81
            FieldName = 'EmpDate'
          end
          object Salary_By_Department_EmpSalary: TOvcRvViewField
            Width = 86
            ComputeTotals = True
            FieldName = 'EmpSalary'
          end
          object Salary_By_Department_EmpTitle: TOvcRvViewField
            Width = 115
            FieldName = 'EmpTitle'
          end
          object Salary_By_Department_EmpReview: TOvcRvViewField
            Width = 90
            FieldName = 'EmpReview'
          end
        end
        object View_1: TOvcRVView
          Title = 'Default View'
          object View_1_EmpName: TOvcRvViewField
            Width = 89
            FieldName = 'EmpName'
          end
          object View_1_EmpDate: TOvcRvViewField
            Width = 81
            FieldName = 'EmpDate'
          end
          object View_1_EmpSalary: TOvcRvViewField
            Width = 86
            FieldName = 'EmpSalary'
          end
          object View_1_EmpTitle: TOvcRvViewField
            Width = 115
            FieldName = 'EmpTitle'
          end
          object View_1_EmpReview: TOvcRvViewField
            Width = 90
            FieldName = 'EmpReview'
          end
          object View_1_EmpDep: TOvcRvViewField
            Width = 54
            FieldName = 'EmpDep'
          end
        end
        object Salary_By_Title: TOvcRVView
          ShowGroupTotals = True
          ShowFooter = True
          Title = 'Salary By Title'
          object Salary_By_Title_EmpTitle: TOvcRvViewField
            Width = 19
            FieldName = 'EmpTitle'
            GroupBy = True
          end
          object Salary_By_Title_EmpName: TOvcRvViewField
            Width = 89
            FieldName = 'EmpName'
          end
          object Salary_By_Title_EmpDate: TOvcRvViewField
            Width = 81
            FieldName = 'EmpDate'
          end
          object Salary_By_Title_EmpSalary: TOvcRvViewField
            Width = 106
            ComputeTotals = True
            FieldName = 'EmpSalary'
          end
          object Salary_By_Title_EmpReview: TOvcRvViewField
            Width = 90
            FieldName = 'EmpReview'
          end
          object Salary_By_Title_EmpDep: TOvcRvViewField
            FieldName = 'EmpDep'
          end
        end
        object Review_Pending: TOvcRVView
          Filter = 'EmpReview is true'
          Title = 'Review Pending'
          object Review_Pending_EmpName: TOvcRvViewField
            Width = 89
            FieldName = 'EmpName'
          end
          object Review_Pending_EmpDate: TOvcRvViewField
            Width = 81
            FieldName = 'EmpDate'
          end
          object Review_Pending_EmpSalary: TOvcRvViewField
            Width = 86
            FieldName = 'EmpSalary'
          end
          object Review_Pending_EmpTitle: TOvcRvViewField
            Width = 115
            FieldName = 'EmpTitle'
          end
          object Review_Pending_EmpReview: TOvcRvViewField
            Width = 90
            FieldName = 'EmpReview'
          end
          object Review_Pending_EmpDep: TOvcRvViewField
            Width = 54
            FieldName = 'EmpDep'
          end
        end
      end
    end
    object SPL2OvcSplitter1Form1: TOvcSection
      object OvcDataReportView2: TOvcDataReportView
        Left = 0
        Top = 26
        Width = 557
        Height = 180
        ActiveView = 'View_1'
        Align = alClient
        Controller = OrController1
        DragMode = dmAutomatic
        KeySearch = True
        Options.ListBorderStyle = bsNone
        TabOrder = 0
        OnDragDrop = OvcDataReportView1DragDrop
        OnDragOver = OvcDataReportView1DragOver
        object EmpName: TOvcDataRvField
          Caption = 'Name'
        end
        object EmpDate: TOvcDataRvField
          Caption = 'Date Hired'
          DataType = dtDateTime
          Format = 'yyyy-mm-dd'
        end
        object EmpSalary: TOvcDataRvField
          Alignment = taRightJustify
          Caption = 'Salary'
          DataType = dtFloat
          Format = '###,###,##0.00'
        end
        object EmpTitle: TOvcDataRvField
          Caption = 'Title'
        end
        object EmpReview: TOvcDataRvField
          Caption = 'Review Pend.'
          DataType = dtBoolean
        end
        object EmpDep: TOvcDataRvField
          Alignment = taRightJustify
          Caption = 'Dep.'
          DataType = dtInteger
        end
        object Salary_By_Department: TOvcRVView
          ShowGroupTotals = True
          ShowFooter = True
          Title = 'Salary By Department'
          object Salary_By_Department_EmpDep: TOvcRvViewField
            Width = 17
            FieldName = 'EmpDep'
            GroupBy = True
          end
          object Salary_By_Department_EmpName: TOvcRvViewField
            Width = 89
            FieldName = 'EmpName'
          end
          object Salary_By_Department_EmpDate: TOvcRvViewField
            Width = 81
            FieldName = 'EmpDate'
          end
          object Salary_By_Department_EmpSalary: TOvcRvViewField
            Width = 86
            ComputeTotals = True
            FieldName = 'EmpSalary'
          end
          object Salary_By_Department_EmpTitle: TOvcRvViewField
            Width = 115
            FieldName = 'EmpTitle'
          end
          object Salary_By_Department_EmpReview: TOvcRvViewField
            Width = 90
            FieldName = 'EmpReview'
          end
        end
        object View_1: TOvcRVView
          Title = 'Default View'
          object View_1_EmpName: TOvcRvViewField
            Width = 89
            FieldName = 'EmpName'
          end
          object View_1_EmpDate: TOvcRvViewField
            Width = 81
            FieldName = 'EmpDate'
          end
          object View_1_EmpSalary: TOvcRvViewField
            Width = 86
            FieldName = 'EmpSalary'
          end
          object View_1_EmpTitle: TOvcRvViewField
            Width = 115
            FieldName = 'EmpTitle'
          end
          object View_1_EmpReview: TOvcRvViewField
            Width = 90
            FieldName = 'EmpReview'
          end
          object View_1_EmpDep: TOvcRvViewField
            Width = 54
            FieldName = 'EmpDep'
          end
        end
        object Salary_By_Title: TOvcRVView
          ShowGroupTotals = True
          ShowFooter = True
          Title = 'Salary By Title'
          object Salary_By_Title_EmpTitle: TOvcRvViewField
            Width = 19
            FieldName = 'EmpTitle'
            GroupBy = True
          end
          object Salary_By_Title_EmpName: TOvcRvViewField
            Width = 89
            FieldName = 'EmpName'
          end
          object Salary_By_Title_EmpDate: TOvcRvViewField
            Width = 81
            FieldName = 'EmpDate'
          end
          object Salary_By_Title_EmpSalary: TOvcRvViewField
            Width = 106
            ComputeTotals = True
            FieldName = 'EmpSalary'
          end
          object Salary_By_Title_EmpReview: TOvcRvViewField
            Width = 90
            FieldName = 'EmpReview'
          end
          object Salary_By_Title_EmpDep: TOvcRvViewField
            FieldName = 'EmpDep'
          end
        end
        object Review_Pending: TOvcRVView
          Filter = 'EmpReview is true'
          Title = 'Review Pending'
          object Review_Pending_EmpName: TOvcRvViewField
            Width = 89
            FieldName = 'EmpName'
          end
          object Review_Pending_EmpDate: TOvcRvViewField
            Width = 81
            FieldName = 'EmpDate'
          end
          object Review_Pending_EmpSalary: TOvcRvViewField
            Width = 86
            FieldName = 'EmpSalary'
          end
          object Review_Pending_EmpTitle: TOvcRvViewField
            Width = 115
            FieldName = 'EmpTitle'
          end
          object Review_Pending_EmpReview: TOvcRvViewField
            Width = 90
            FieldName = 'EmpReview'
          end
          object Review_Pending_EmpDep: TOvcRvViewField
            Width = 54
            FieldName = 'EmpDep'
          end
        end
      end
      object Panel2: TPanel
        Left = 0
        Top = 0
        Width = 557
        Height = 26
        Align = alTop
        TabOrder = 1
        object OvcViewComboBox2: TOvcViewComboBox
          Left = 1
          Top = 1
          Width = 145
          Height = 22
          ReportView = OvcDataReportView2
          ItemHeight = 16
          TabOrder = 0
        end
      end
    end
  end
  object OrController1: TOvcController
    EntryCommands.TableList = (
      'Default'
      True
      ()
      'WordStar'
      False
      ()
      'Grid'
      False
      ())
    Epoch = 1900
    Left = 80
    Top = 16
  end
end
