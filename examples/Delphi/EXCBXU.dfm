object Form1: TForm1
  Left = 222
  Top = 148
  Caption = 'ExCbx: Orpheus ComboBoxes'
  ClientHeight = 544
  ClientWidth = 519
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = True
  Position = poScreenCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 16
  object OvcComboBoxLabel1: TOvcAttachedLabel
    Left = 20
    Top = 10
    Width = 118
    Height = 16
    AutoSize = False
    Caption = 'OvcComboBoxLabel1'
    FocusControl = OvcComboBox
    Transparent = False
    Control = OvcComboBox
  end
  object OvcFontComboBoxLabel1: TOvcAttachedLabel
    Left = 20
    Top = 57
    Width = 143
    Height = 16
    AutoSize = False
    Caption = 'OvcFontComboBoxLabel1'
    FocusControl = OvcFontComboBox
    Transparent = False
    Control = OvcFontComboBox
  end
  object OvcDriveComboBoxLabel1: TOvcAttachedLabel
    Left = 20
    Top = 105
    Width = 147
    Height = 16
    AutoSize = False
    Caption = 'OvcDriveComboBoxLabel1'
    FocusControl = OvcDriveComboBox
    Transparent = False
    Control = OvcDriveComboBox
  end
  object OvcDirectoryComboBoxLabel1: TOvcAttachedLabel
    Left = 20
    Top = 153
    Width = 169
    Height = 16
    AutoSize = False
    Caption = 'OvcDirectoryComboBoxLabel1'
    FocusControl = OvcDirectoryComboBox
    Transparent = False
    Control = OvcDirectoryComboBox
  end
  object OvcFileComboBoxLabel1: TOvcAttachedLabel
    Left = 20
    Top = 201
    Width = 138
    Height = 16
    AutoSize = False
    Caption = 'OvcFileComboBoxLabel1'
    FocusControl = OvcFileComboBox
    Transparent = False
    Control = OvcFileComboBox
  end
  object OvcPrinterComboBoxLabel1: TOvcAttachedLabel
    Left = 20
    Top = 249
    Width = 156
    Height = 16
    AutoSize = False
    Caption = 'OvcPrinterComboBoxLabel1'
    FocusControl = OvcPrinterComboBox
    Transparent = False
    Control = OvcPrinterComboBox
  end
  object OvcAssociationComboBoxLabel1: TOvcAttachedLabel
    Left = 20
    Top = 297
    Width = 182
    Height = 16
    AutoSize = False
    Caption = 'OvcAssociationComboBoxLabel1'
    FocusControl = OvcAssociationComboBox
    Transparent = False
    Control = OvcAssociationComboBox
  end
  object OvcHistoryComboBoxLabel1: TOvcAttachedLabel
    Left = 20
    Top = 345
    Width = 157
    Height = 16
    AutoSize = False
    Caption = 'OvcHistoryComboBoxLabel1'
    FocusControl = OvcHistoryComboBox
    Transparent = False
    Control = OvcHistoryComboBox
  end
  object OvcDbAliasComboBoxLabel1: TOvcAttachedLabel
    Left = 20
    Top = 393
    Width = 160
    Height = 16
    AutoSize = False
    Caption = 'OvcDbAliasComboBoxLabel1'
    FocusControl = OvcDbAliasComboBox
    Transparent = False
    Control = OvcDbAliasComboBox
  end
  object OvcDbTableNameComboBoxLabel1: TOvcAttachedLabel
    Left = 20
    Top = 441
    Width = 198
    Height = 16
    AutoSize = False
    Caption = 'OvcDbTableNameComboBoxLabel1'
    FocusControl = OvcDbTableNameComboBox
    Transparent = False
    Control = OvcDbTableNameComboBox
  end
  object OvcDbFieldComboBoxLabel1: TOvcAttachedLabel
    Left = 20
    Top = 489
    Width = 160
    Height = 16
    AutoSize = False
    Caption = 'OvcDbFieldComboBoxLabel1'
    FocusControl = OvcDbFieldComboBox
    Transparent = False
    Control = OvcDbFieldComboBox
  end
  object OvcComboBox: TOvcComboBox
    Left = 20
    Top = 26
    Width = 196
    Height = 22
    ItemHeight = 16
    Items.Strings = (
      '000'
      '111'
      '222'
      '333'
      '444'
      '555'
      '666'
      '777'
      '888'
      '999')
    LabelInfo.OffsetX = 0
    LabelInfo.OffsetY = 0
    LabelInfo.Visible = True
    MRUListColor = clAqua
    Style = ocsDropDownList
    TabOrder = 0
    OnSelectionChange = ComboBoxSelectionChange
  end
  object OvcFontComboBox: TOvcFontComboBox
    Left = 20
    Top = 73
    Width = 196
    Height = 22
    ItemHeight = 16
    LabelInfo.OffsetX = 0
    LabelInfo.OffsetY = 0
    LabelInfo.Visible = True
    MRUListColor = clAqua
    Style = ocsDropDownList
    TabOrder = 1
    PreviewControl = Preview1
    PreviewFont = True
    OnSelectionChange = ComboBoxSelectionChange
  end
  object OvcDirectoryComboBox: TOvcDirectoryComboBox
    Left = 20
    Top = 169
    Width = 196
    Height = 22
    Directory = 'D:\'
    Mask = '*.*'
    FileComboBox = OvcFileComboBox
    ItemHeight = 16
    LabelInfo.OffsetX = 0
    LabelInfo.OffsetY = 0
    LabelInfo.Visible = True
    MRUListColor = clAqua
    Style = ocsDropDownList
    TabOrder = 2
    Text = 'D:\'
    OnSelectionChange = ComboBoxSelectionChange
  end
  object OvcFileComboBox: TOvcFileComboBox
    Left = 20
    Top = 217
    Width = 196
    Height = 22
    Directory = '\'
    FileMask = '*.*'
    ShowIcons = False
    ItemHeight = 16
    LabelInfo.OffsetX = 0
    LabelInfo.OffsetY = 0
    LabelInfo.Visible = True
    MRUListColor = clAqua
    Style = ocsDropDownList
    TabOrder = 3
    OnSelectionChange = ComboBoxSelectionChange
  end
  object OvcHistoryComboBox: TOvcHistoryComboBox
    Left = 20
    Top = 361
    Width = 196
    Height = 22
    ItemHeight = 16
    LabelInfo.OffsetX = 0
    LabelInfo.OffsetY = 0
    LabelInfo.Visible = True
    TabOrder = 4
    OnSelectionChange = ComboBoxSelectionChange
  end
  object OvcAssociationComboBox: TOvcAssociationComboBox
    Left = 20
    Top = 313
    Width = 196
    Height = 22
    ItemHeight = 16
    LabelInfo.OffsetX = 0
    LabelInfo.OffsetY = 0
    LabelInfo.Visible = True
    MRUListColor = clAqua
    Style = ocsDropDownList
    TabOrder = 5
    OnSelectionChange = ComboBoxSelectionChange
  end
  object OvcPrinterComboBox: TOvcPrinterComboBox
    Left = 20
    Top = 265
    Width = 196
    Height = 22
    SelectPrinter = False
    ItemHeight = 16
    LabelInfo.OffsetX = 0
    LabelInfo.OffsetY = 0
    LabelInfo.Visible = True
    MRUListColor = clAqua
    Style = ocsDropDownList
    TabOrder = 6
    OnSelectionChange = ComboBoxSelectionChange
  end
  object Properties: TGroupBox
    Left = 240
    Top = 263
    Width = 273
    Height = 273
    Caption = 'Unique Properties '
    TabOrder = 7
    object Label5: TLabel
      Left = 12
      Top = 78
      Width = 51
      Height = 16
      Caption = 'Directory'
    end
    object Label6: TLabel
      Left = 12
      Top = 108
      Width = 49
      Height = 16
      Caption = 'FileMask'
    end
    object Label7: TLabel
      Left = 12
      Top = 166
      Width = 85
      Height = 16
      Caption = 'AssociatedIcon'
    end
    object Icon1: TImage
      Left = 112
      Top = 167
      Width = 57
      Height = 65
    end
    object Label8: TLabel
      Left = 12
      Top = 52
      Width = 45
      Height = 16
      Caption = 'Preview'
    end
    object Label9: TLabel
      Left = 12
      Top = 138
      Width = 63
      Height = 16
      Caption = 'Description'
    end
    object Label4: TLabel
      Left = 12
      Top = 22
      Width = 58
      Height = 16
      Caption = 'FontName'
    end
    object FontBtn: TSpeedButton
      Left = 231
      Top = 18
      Width = 33
      Height = 24
      Caption = 'Set'
      OnClick = FontBtnClick
    end
    object DirectoryBtn: TSpeedButton
      Left = 231
      Top = 76
      Width = 33
      Height = 24
      Caption = 'Set'
      OnClick = DirectoryBtnClick
    end
    object MaskBtn: TSpeedButton
      Left = 231
      Top = 106
      Width = 33
      Height = 24
      Caption = 'Set'
      OnClick = MaskBtnClick
    end
    object Label13: TLabel
      Left = 12
      Top = 242
      Width = 76
      Height = 16
      Caption = 'VolumeName'
    end
    object Preview1: TEdit
      Left = 112
      Top = 48
      Width = 113
      Height = 24
      ReadOnly = True
      TabOrder = 0
    end
    object FileMask1: TEdit
      Left = 112
      Top = 106
      Width = 113
      Height = 24
      TabOrder = 1
      Text = '*.*'
    end
    object Directory1: TEdit
      Left = 112
      Top = 76
      Width = 113
      Height = 24
      TabOrder = 2
    end
    object Description1: TEdit
      Left = 112
      Top = 136
      Width = 113
      Height = 24
      ReadOnly = True
      TabOrder = 3
    end
    object FontName1: TEdit
      Left = 112
      Top = 18
      Width = 113
      Height = 24
      TabOrder = 4
    end
    object Volume1: TEdit
      Left = 112
      Top = 238
      Width = 113
      Height = 24
      ReadOnly = True
      TabOrder = 5
    end
  end
  object GroupBox1: TGroupBox
    Left = 240
    Top = 8
    Width = 273
    Height = 249
    Caption = 'Common Properties '
    TabOrder = 8
    object Label10: TLabel
      Left = 12
      Top = 71
      Width = 92
      Height = 16
      Caption = 'DropDownCount'
    end
    object Label11: TLabel
      Left = 12
      Top = 102
      Width = 78
      Height = 16
      Caption = 'MRUListCount'
    end
    object Label12: TLabel
      Left = 12
      Top = 130
      Width = 62
      Height = 16
      Caption = 'ItemHeight'
    end
    object HeightBtn: TSpeedButton
      Left = 151
      Top = 126
      Width = 33
      Height = 25
      Caption = 'Set'
      OnClick = HeightBtnClick
    end
    object MRUCountBtn: TSpeedButton
      Left = 152
      Top = 97
      Width = 33
      Height = 23
      Caption = 'Set'
      OnClick = MRUCountBtnClick
    end
    object DropCountBtn: TSpeedButton
      Left = 152
      Top = 68
      Width = 33
      Height = 24
      Caption = 'Set'
      OnClick = DropCountBtnClick
    end
    object Label1: TLabel
      Left = 12
      Top = 160
      Width = 79
      Height = 16
      Caption = 'List[ListIndex]'
    end
    object Label2: TLabel
      Left = 12
      Top = 190
      Width = 50
      Height = 16
      Caption = 'ListIndex'
    end
    object Label3: TLabel
      Left = 12
      Top = 220
      Width = 57
      Height = 16
      Caption = 'ItemIndex'
    end
    object AllFontBtn: TSpeedButton
      Left = 216
      Top = 15
      Width = 33
      Height = 23
      Caption = 'Font'
      OnClick = AllFontBtnClick
    end
    object Style1: TCheckBox
      Left = 12
      Top = 22
      Width = 115
      Height = 17
      Alignment = taLeftJustify
      Caption = 'DropDownList'
      TabOrder = 0
      OnClick = Style1Click
    end
    object DropCount1: TEdit
      Left = 113
      Top = 68
      Width = 33
      Height = 24
      TabOrder = 1
      Text = '8'
    end
    object MRUCount1: TEdit
      Left = 112
      Top = 98
      Width = 33
      Height = 24
      TabOrder = 2
      Text = '3'
    end
    object Height1: TEdit
      Left = 113
      Top = 127
      Width = 33
      Height = 24
      TabOrder = 3
      Text = '16'
    end
    object Text1: TEdit
      Left = 112
      Top = 157
      Width = 113
      Height = 24
      ReadOnly = True
      TabOrder = 4
      Text = 'Text1'
    end
    object ListIndex1: TEdit
      Left = 112
      Top = 187
      Width = 113
      Height = 24
      ReadOnly = True
      TabOrder = 5
      Text = 'ListIndex1'
    end
    object ItemIndex1: TEdit
      Left = 112
      Top = 217
      Width = 113
      Height = 24
      ReadOnly = True
      TabOrder = 6
      Text = 'ItemIndex1'
    end
    object HotTrack1: TCheckBox
      Left = 12
      Top = 45
      Width = 115
      Height = 17
      Alignment = taLeftJustify
      Caption = 'HotTrack'
      TabOrder = 7
      OnClick = HotTrack1Click
    end
  end
  object OvcDriveComboBox: TOvcDriveComboBox
    Left = 20
    Top = 121
    Width = 196
    Height = 22
    DirectoryComboBox = OvcDirectoryComboBox
    ItemHeight = 16
    LabelInfo.OffsetX = 0
    LabelInfo.OffsetY = 0
    LabelInfo.Visible = True
    MRUListColor = clAqua
    TabOrder = 9
    OnSelectionChange = ComboBoxSelectionChange
  end
  object OvcDbAliasComboBox: TOvcDbAliasComboBox
    Left = 20
    Top = 409
    Width = 196
    Height = 22
    DbEngineHelper = OvcDbBDEHelper1
    ItemHeight = 16
    LabelInfo.OffsetX = 0
    LabelInfo.OffsetY = 0
    LabelInfo.Visible = True
    TabOrder = 10
    OnChange = ComboBoxSelectionChange
  end
  object OvcDbTableNameComboBox: TOvcDbTableNameComboBox
    Left = 20
    Top = 457
    Width = 196
    Height = 22
    DbEngineHelper = OvcDbBDEHelper1
    Enabled = False
    ItemHeight = 16
    LabelInfo.OffsetX = 0
    LabelInfo.OffsetY = 0
    LabelInfo.Visible = True
    TabOrder = 11
    OnChange = ComboBoxSelectionChange
  end
  object OvcDbFieldComboBox: TOvcDbFieldComboBox
    Left = 20
    Top = 505
    Width = 196
    Height = 22
    DataSource = DataSource1
    Enabled = False
    ItemHeight = 16
    LabelInfo.OffsetX = 0
    LabelInfo.OffsetY = 0
    LabelInfo.Visible = True
    TabOrder = 12
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
    Left = 22
    Top = 54
  end
  object Table1: TTable
    Left = 82
    Top = 56
  end
  object DataSource1: TDataSource
    DataSet = Table1
    Left = 128
    Top = 56
  end
  object FontDialog1: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'System'
    Font.Style = []
    Left = 424
    Top = 24
  end
  object OvcDbBDEHelper1: TOvcDbBDEHelper
    Left = 180
    Top = 56
  end
end
