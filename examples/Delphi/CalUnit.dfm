object CalForm: TCalForm
  Left = 268
  Top = 139
  BorderStyle = bsDialog
  Caption = 'Calendar'
  ClientHeight = 268
  ClientWidth = 342
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = True
  Position = poScreenCenter
  ShowHint = True
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 16
  object Panel1: TPanel
    Left = 4
    Top = 5
    Width = 332
    Height = 227
    TabOrder = 2
    object Calendar: TOvcCalendar
      Left = 11
      Top = 8
      Width = 294
      Height = 195
      BorderStyle = bsNone
      Colors.ActiveDay = clRed
      Colors.ColorScheme = cscalWindows
      Colors.DayNames = clMaroon
      Colors.Days = clBlack
      Colors.InactiveDays = clGray
      Colors.MonthAndYear = clBlue
      Colors.Weekend = clRed
      DayNameWidth = 3
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -12
      Font.Name = 'Tahoma'
      Font.Style = []
      Options = [cdoShortNames, cdoShowYear, cdoShowInactive, cdoShowRevert, cdoShowToday, cdoShowNavBtns]
      ParentFont = False
      TabOrder = 0
      OnDrawItem = CalendarDrawItem
    end
    object MonthSpinner: TOvcSpinner
      Left = 11
      Top = 201
      Width = 294
      Height = 16
      Hint = 'Change the displayed month'
      AutoRepeat = True
      Delta = 1.000000000000000000
      FocusedControl = Calendar
      OnClick = MonthSpinnerClick
    end
    object YearSpinner2: TOvcSpinner
      Left = 305
      Top = 8
      Width = 16
      Height = 193
      Hint = 'Change the displayed year'
      AutoRepeat = True
      Delta = 1.000000000000000000
      FocusedControl = Calendar
      OnClick = YearSpinnerClick
    end
  end
  object btnOk: TBitBtn
    Left = 181
    Top = 237
    Width = 75
    Height = 25
    Caption = 'OK'
    Default = True
    DoubleBuffered = True
    ModalResult = 1
    NumGlyphs = 2
    ParentDoubleBuffered = False
    TabOrder = 0
  end
  object btnCancel: TBitBtn
    Left = 261
    Top = 237
    Width = 75
    Height = 25
    Cancel = True
    Caption = 'Cancel'
    DoubleBuffered = True
    ModalResult = 2
    NumGlyphs = 2
    ParentDoubleBuffered = False
    TabOrder = 1
  end
  object OvcController: TOvcController
    EntryCommands.TableList = (
      'Default'
      True
      (
        1114
        57
        3080
        56))
    Epoch = 1900
    Left = 3
    Top = 237
  end
end
