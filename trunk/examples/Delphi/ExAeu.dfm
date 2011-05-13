object AEForm: TAEForm
  Left = 245
  Top = 136
  ActiveControl = AE1
  Caption = 'Array Editor Example'
  ClientHeight = 259
  ClientWidth = 524
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
  object Label1: TLabel
    Left = 272
    Top = 8
    Width = 241
    Height = 49
    AutoSize = False
    Caption = 
      'The number of elements is essentially unlimited since you determ' +
      'ine where the data comes from.'
    WordWrap = True
  end
  object Label2: TLabel
    Left = 272
    Top = 72
    Width = 241
    Height = 49
    AutoSize = False
    Caption = 'Double-Click the active date cell to invoke the calendar form.'
    WordWrap = True
  end
  object Label3: TLabel
    Left = 272
    Top = 136
    Width = 241
    Height = 49
    AutoSize = False
    Caption = 
      'These Array Editors are linked together using the OnSelect event' +
      '.'
    WordWrap = True
  end
  object AE1: TOvcSimpleArrayEditor
    Left = 6
    Top = 10
    Width = 123
    Height = 225
    BorderStyle = bsSingle
    DisabledColors.BackColor = clWindow
    DisabledColors.TextColor = clGrayText
    HighlightColors.BackColor = clHighlight
    HighlightColors.TextColor = clHighlightText
    LineColor = clSilver
    Options = [efoCaretToEnd, efoTrimBlanks]
    RowHeight = 17
    NumItems = 50
    PadChar = ' '
    TextMargin = 2
    UseScrollBar = False
    OnGetItem = AE1GetItem
    OnGetItemColor = AE1GetItemColor
    OnSelect = AE1Select
    Controller = OvcController1
    ParentColor = False
    TabOrder = 0
    TabStop = True
    OnDblClick = AE1DblClick
    DataType = sftLongInt
    DecimalPlaces = 0
    MaxLength = 10
    PictureMask = 'i'
    RangeHigh = {FFFFFF7F000000000000}
    RangeLow = {00000080000000000000}
  end
  object AE2: TOvcPictureArrayEditor
    Left = 131
    Top = 10
    Width = 129
    Height = 225
    BorderStyle = bsSingle
    DisabledColors.BackColor = clWindow
    DisabledColors.TextColor = clGrayText
    HighlightColors.BackColor = clHighlight
    HighlightColors.TextColor = clHighlightText
    LineColor = clSilver
    Options = [efoCaretToEnd, efoTrimBlanks]
    RowHeight = 17
    NumItems = 50
    PadChar = ' '
    TextMargin = 2
    UseScrollBar = True
    OnGetItem = AE2GetItem
    OnSelect = AE2Select
    Controller = OvcController1
    ParentColor = False
    TabOrder = 1
    TabStop = True
    OnDblClick = AE2DblClick
    DataType = pftDate
    DecimalPlaces = 0
    Epoch = 0
    MaxLength = 10
    PictureMask = 'MM/DD/yyyy'
    RangeHigh = {25600D00000000000000}
    RangeLow = {00000000000000000000}
  end
  object BitBtn1: TBitBtn
    Left = 440
    Top = 225
    Width = 75
    Height = 27
    Caption = '&Close'
    DoubleBuffered = True
    NumGlyphs = 2
    ParentDoubleBuffered = False
    TabOrder = 2
    OnClick = btnExitClick
  end
  object btnColor: TBitBtn
    Left = 272
    Top = 224
    Width = 75
    Height = 27
    Caption = 'Cell Color'
    DoubleBuffered = True
    ParentDoubleBuffered = False
    TabOrder = 3
    OnClick = btnColorClick
  end
  object OvcController1: TOvcController
    EntryCommands.TableList = (
      'Default'
      True
      ())
    Epoch = 1900
    Left = 424
    Top = 184
  end
  object dlgColor: TColorDialog
    Left = 272
    Top = 184
  end
end
